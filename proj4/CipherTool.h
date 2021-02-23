#ifndef CIPHERTOOL_H
#define CIPHERTOOL_H
#include "Cipher.h"
#include "Caesar.h"
#include "Vigenere.h"
#include "Ong.h"
#include <fstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

//**Constants**


class CipherTool {
public:
  // Name: CipherTool Constructor
  // Desc - Creates a new CipherTool and sets m_filename based on string passed
  // Preconditions - Input file passed and populated with Cipher
  // Postconditions - CipherTool created
  CipherTool(string);
  // Name: CipherTool Destructor
  // Desc - Calls destructor for all ciphers in m_ciphers
  // Preconditions - m_ciphers is populated
  // Postconditions - m_ciphers emptied
  ~CipherTool();
  // Name: LoadFile
  // Desc - Opens file and reads in each Cipher. Each Cipher dynamically allocated
  // and put into m_ciphers
  // Preconditions - Input file passed and populated with Ciphers
  // Postconditions - m_ciphers populated with Ciphers
  void LoadFile();
  // Name: DisplayCiphers
  // Desc - Displays each of the ciphers in the m_ciphers
  // Preconditions - Input file passed and m_ciphers populated
  // Postconditions - Displays ciphers
  void DisplayCiphers();
  // Name: EncryptDecrypt
  // Desc - Encrypts or decrypts each of the ciphers in the m_ciphers
  // Preconditions - Input file passed and m_ciphers populated
  // Postconditions - Either Encrypts or Decrypts each cipher in m_ciphers
  void EncryptDecrypt(bool);
  // Name: Export
  // Desc - Exports each of the ciphers in the m_ciphers (so they can be reused)
  // Preconditions - Input file passed and m_ciphers populated
  // Postconditions - All ciphers exported
  void Export();
  // Name: Menu
  // Desc - Displays menu and returns choice
  // Preconditions - m_ciphers all populated
  // Postconditions - Returns choice
  int Menu();
  // Name: GetType
  // Desc - Pass it a cipher and it returns the char of the subtype
  // Returns c for Caesar, v for Vigenere, and o for Ong
  // Preconditions - m_ciphers all populated
  // Postconditions - Returns char of type
  char GetType(Cipher*);
  // Name: Start
  // Desc - Loads input file, allows user to choose what to do
  // Preconditions - m_ciphers populated with ciphers
  // Postconditions - none
  void Start();
private:
  vector<Cipher*> m_ciphers; //List of all Ciphers
  string m_filename; //Name of the file passed from proj4.cpp
};
#endif

