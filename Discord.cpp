#include <iostream>
#include <curl/curl.h>
#include <string>


std::string make_posts(std::string hook) {

  int messages = 0;
  struct curl_slist *slist1;
  std::string jsonstr = "{\"content\":\"test\", \"username\" : \"test\"}";
  slist1 = NULL;
  slist1 = curl_slist_append(slist1, "Content-Type: application/json");
  CURL *curl;
  CURLcode res;
  curl_global_init(CURL_GLOBAL_ALL);
  
  for(int i = 0; i < 10; i++) {
  
    curl = curl_easy_init();
    if(curl) {
      curl_easy_setopt(curl, CURLOPT_URL, hook.c_str());
      curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonstr.c_str());
      curl_easy_setopt(curl, CURLOPT_HTTPHEADER, slist1);
      curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
      res = curl_easy_perform(curl);

      if(res == CURLE_OK) {
      long response_code;
      curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
      std::cout << response_code << "\n";
      }
   
      if(res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
   

      curl_easy_cleanup(curl);
    }
    messages++;
  }
  curl_global_cleanup(); 
  std::string msgs = std::to_string(messages);
  std::string sent_messages = "messages sent: " + msgs + "\n";

  return sent_messages;
}


int main(void)
{

  int arrsize = 1; //change to the amount of webhooks in the array under
  std::string hooks[arrsize] = {"https://discord.com/api/webhooks/webhook"};

  for(int i = 0; i < arrsize; i++) {
    std::cout << "Sending messages\n";
    std::cout << make_posts(hooks[i]);

  }

  return 0;
}
