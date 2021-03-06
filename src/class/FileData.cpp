#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "FileData.hpp"

using namespace std;

//Creates the random number seed for password encryption
FileData::FileData(string& p){
  //Generate a random number seed to encrypt the user password from a given string password
  string pass = "2yMM&Oha5Yc5Yhro?z_gOm?_%#7mEfpA8=i1C$Oc?77RJwPWgU25CHf93_kfJeV^yDIcgrqcP&W57mjtWojTp=rL8AAwCxXn$TCyqW@BeMQWo$b?yWMwj^8hIm$2s1j$jep!sKl-xm8&DKH=qzDw5e$wz*tDJ4k2VCV0IVx9SWW!Q=aa8yM06ZaTPbo+nhrnsy$y|Qh@OK$ZvlciND=fvNqHqwC!-QKN9hLs688F@r%R%bUmh|8Zy$*S^I|!W*hKQoJOKg%+Yn6aQ$m#4L8wKlCsA06*NiCfWOmh*mTQs@Jwr^K|WDkLELjmMk$oXQV-povQx+s9B6F8kF=n@7Dl2Vh_7oycM?OE7OHg_sG#PNpJil=Bi0+j8HHkfFAUdJ5G1=XoKTKoC*yHsNt-hYiLKCsbon|YqGSxNJTk15we$&TVMUWnnQZB4@Zc$v||8NoqJ4J+ZdsNh2eK7_7xB-TrI9rXUfROJ84gMoj+H64^2V-0++h*R@+P-BZiK+XS3+ET+$aVDEI|8qKeA@pto!dCqz#Pwtdj1Iib=%Aea$y0AFNjt5?36f2u3ygs0sclUqBq-+Wp2hlqDK?d$cyut7_sbO5_6KZEQn%zSC@kW^zdfR?+=Ag-aLRFqee%R23?cfabMMk|!&&rcHHyyAT?F6vY4zRcRzE_oZ_66H1Jzg_Mj!^c?pnk5@$BKirGSO+@7_L13=1QHqMexv*OmD!FtAjAGT&NDlbsYl@IzK&#D%q5@oLNli$dx?LBxYh7QH8n075$2&Pju+9%_&=-dkkz+XZDxjGDmwHi!BgRyuSRng8$ZQxnesd?_XFKD3-H9Cobf4Q7$IdK#|@_!Er!|Jvhk%5xSn3MfAKAInDRi9NLyVYpkmp@sIrvCrN8|L+BYyWVWlg_Nob_uTTo=R8U4ob3%gp|JJQPIjlNYW*dA3fFn6YI@3aGWQ?+KpP9lmFu8p6iwX!^i5NNi?31&Odd+_+NgFQPbV@RyfGDnYX$7ZG?1RdNA|sUM7WalWaQ2JZI_%oAKZJk4^ZXOJRxwjyi&K_$2zEno8wBD-$f?*osCFoKn48Gs?+u|Q8i6D8cJjwrd2VeWr8bcNsjkKwQDugWnW|G7PDZPEOwnF62*EXC^vO%6@^bT#l%-oMm0XvP61Ud&EYv86N|bqO^a&xc#*53xq%_DgHvWOli3qEG4w55&ebLb=CBnx2Wu??Sv2-p9mg6The2^n^rQ#?-QZDwbD=9qvK!aE@%1rAXaOJ*q$pk79l%g&H$WfmONqJO8Jg|lyzPyHK!pIx|QMN%_BrU!yUV-_ZczXfSB9?t2*w?HKzCPK@GZJYy=M_&h6=ubwvSBJPE=Lo$j@LqkZl^9gf&vDRq+J-YaZnqEzTv-xSKFFjpGM&EboY7*Et-bz4ICmbB9kI#Z@o0Wu4ET6CYtFzEf&uIexvCUYYhh4rFaUGnRiDq4O_b?A=&kJ9WClR!IPm64+G*FX%TA03bGYUUucMOsuRtQ##NAP|=c4t1QV_0Ln99IrTk3|^X9I%$5DjO9l%HRZmK!Nt%JYyHLF7_mcOEabd=jGUJ=@VU^UPtW5LvI|6RZmst5=47vDDqzqV#h+3@s7TjnTlSQI_zxDwJOy+TcM@l2fydFA6R?BkKd=pJh5BSJo+XIg^mE*ms?_uJjYZ6wRxRWO#Ztiz0U5eZLIs=IQDEDApD3L2RbX+J5vQh^4P9c%Y-mT&fX=ZW|HIg$FT1*pX!RjWId$YU4xO-yYd9obhEU4FOSeNfhPjUZqvX_$2wgI*usLLqZQVsvFhIqWb3$HGIRH^h1^pNTySYxv|%Rm%wz83vafT9D3ucw*&6KL9ZN!w*y4H8?W9uc-2ZfN9@wS95!Hjgu@zSWTDDJYBCdNUsz5%=?O_2Bwt0ykNx&q|7a2A^A+cMCqvcyL?btMP|OZ=-4HbKP0Bw&xCvjMShpKopwFmZeGQA*ln#sIByHOI?F67gCDLwCKF*=v=xysWyAcmnm|!GrxXYY&|sXbNN8aGH$K3#GS1fOjkMLo|$rYHiXm_4EC_xs4KYFcst655VeZgiylJ1Dr0P";
  //Use a random number to pick an operator to use - consistent every time the program is run because no seed is given
  for (int i = 0; i < pass.length(); i++){
    FileData::infoKey = ((rand() % 2) % 2 == 0) ? FileData::infoKey + pass[i] : FileData::infoKey * pass[i];
  }
  //Change range of generated seed key to a manageable number
  FileData::infoKey %= pass.length();
  //Set path variable in order to place info file
  FileData::path = p.substr(0, 3) + "info";
}

//Sets the user password generated key
void setKey(int& passKey, string& password){
  //Use a random number to generate a key - consistent every time the program is run because no seed is given
  passKey = 1;
  for (int i = 0; i < password.length(); i++){
    passKey += password[i] + (rand() % (passKey + 1));
  }
}

//Checks if the information file exists and creates one if it doesn't
bool FileData::infoExists(){
  //Probe the file
  ifstream info(FileData::path);
  if (info.fail()){
    //Create file if it does not exist
    ofstream create(FileData::path);
    create.close();
    return false;
  }else{
    //Get master password and close file if it successfully opens
    getline(info, FileData::password);
    info.close();
    //Generate password key
    setKey(FileData::passKey, FileData::password);
    return true;
  }
}

//Encrypts the password for safe storage
string encryptPassword(int& key, string& password){
  //Set random number seed to the key
  srand(key);
  string newPassword = "";
  //Add key characters to the new password
  for (int i = 0; i < key; i++){
    //Push an encrypted character to new password
    newPassword.push_back('A' - 1 + (rand() % (int) password[i % password.length()]));
  }
  return newPassword;
}

//Sets the master password to be used and adds to info file
void FileData::setPassword(string p){
  //Set master password to the encrypted password
  FileData::password = encryptPassword(FileData::infoKey, p);
  //Generate password key
  setKey(FileData::passKey, FileData::password);
  //Add master password to file
  ofstream info(FileData::path, fstream::app);
  info << FileData::password << endl;
  info.close();
}

//Checks if the given password matches the master password
bool FileData::checkPassword(string p){
  //Compare the master password to the encrypted version of the given password
  return FileData::password == encryptPassword(FileData::infoKey, p);
}

//Returns the password generated key
int FileData::getKey(){
  return FileData::passKey;
}

//Encrypts file paths before adding to information file
string encryptPath(int key, string& p){
  //Set random number seed to the key
  srand(key);
  string newPath = "";
  //Add key characters to the new path
  for (int i = 0; i < p.length(); i++){
    //Push an encrypted character to new path
    newPath.push_back('A' + 31 + (rand() % key) + p[i]);
  }
  return newPath;
}

//Decrypts file paths before using
string decryptPath(int key, string& p){
  //Set random number seed to the key
  srand(key);
  string newPath = "";
  //Add key characters to the new path
  for (int i = 0; i < p.length(); i++){
    //Push a decrypted character to new path
    newPath.push_back(p[i] - 'A' - 31 - (rand() % key));
  }
  return newPath;
}

//Adds list of all encrypted file paths to info file
void FileData::addFileInfo(vector<string>& f){
  ofstream info(FileData::path, fstream::app);
  //Loop through list of files adding to info file
  for (int i = 0; i < f.size(); i++){
    info << encryptPath(FileData::infoKey, f[i]) << endl;
  }
  info.close();
}

//Returns whether the given vector contains the given string
bool hasStr(vector<string>& v, string& s){
  bool contains = false;
  for (int i = 0; i < v.size() && !contains; i++){
    contains |= (v[i] == s);
  }
  return contains;
}

//Removes decrypted files from file
void FileData::removeFileInfo(vector<string>& encrypted, vector<string>& decrypted){
  //Overwrite file to update file data
  ofstream info(FileData::path);
  //Add password as first line
  info << FileData::password << endl;
  for (int i = 0; i < encrypted.size(); i++){
    //Add path back to file only if it is not being decrypted
    if (!hasStr(decrypted, encrypted[i])){
      info << encryptPath(FileData::infoKey, encrypted[i]) << endl;
    }
  }
  info.close();
}

//Prints all encrypted files in the current selected drive
void printEncrypted(vector<string>& f){
  if (f.size() == 0){
    cout << "\nNo currently encrypted files.\n";
  }else{
    cout << "\nCurrently encrypted files: \n";
    for (int i = 0; i < f.size(); i++){
      cout << (i+1) << ") " << f[i] << "\n";
    }
  }
}

//Returns a list of all encrypted file paths from info file given the select drive
vector<string> FileData::getFileInfo(string& drive){
  ifstream info(FileData::path);
  vector<string> f;
  string p;
  //Read from file until end of file is reached, pushing file paths into return vector
  while (getline(info, p)){
    p = decryptPath(FileData::infoKey, p);
    if (p.length() > 3 && drive.substr(0,3) == p.substr(0, 3)){
      f.push_back(p);
    }
  }
  info.close();
  //Print all encrypted files
  printEncrypted(f);
  return f;
}