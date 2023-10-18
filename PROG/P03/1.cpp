unsigned long hstr_to_integer (const char hstr[]){
  int i = 0;
  long soma = 0;
  while (hstr[i]!= '\0'){
    if (hstr[i] >= 'A' && hstr[i]<= 'F'){
         soma *=16;
         soma+=hstr[i]-'A'+ 10;
         i++;
      }
      else if (hstr[i] >= 'a' && hstr[i]<= 'f'){
         soma *=16;
         soma+=hstr[i]-'a'+ 10;
         i++;   
      }
      else{
         soma*=16;
         soma+=hstr[i]-48;
         i++;
      }
   }   
   return soma;
}    

