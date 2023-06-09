#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;

// Define Entry struct to hold information about each entry
struct Entry {
public:
    string name = "";
    int id = 0;
    string government = "";
    int age = 0;
    char gender = {};
    string vaccineType = "";
    bool firstDose = false;
    string firstDoseDate = "";
    bool secondDose = false;
    string secondDoseDate = "";
    string password = "";
};

class MainManager {
public:
    unordered_map<int, Entry> entries; // Map to store the entries
    queue<Entry> waitingList; // Queue to store the entries waiting for vaccination

    // Function to create a new entry and add it to the entries vector or waiting list
    //seif
    void CreateEntry(Entry newEntry);

    // Function to edit an entry and add it to the waiting list if not fully vaccinated
    //Mohamed
    bool EditEntry(int id, Entry newEntry);

    // Function to check the vaccination status of a given entry
    //Nour
    bool CheckVaccineStatus(int id);
    // Function to delete an entry from the entries vector or waiting list

    //Seif
    void DeleteEntry(int id);
    void Delete_All();

    // Function to show a certain entry
    //Moamen
    void ShowEntry(int id);

    //Nour
    // Function to get the current entry
    Entry GetEntry(int id);
    
    // Function to show all entries and waiting list
    //seif
    void ShowAll();

    // Function to show all the netries in the waiting lists 
    //Nour
    void ShowWaitingList();

    //Moamen
    // Function to show all the entries in the entries map
    void ShowEntriesMap();
    
    // Function to write the entries and waiting list to a CSV file
    //Mohamed
    void SaveEntriesToFile(string filename);
    // Function to load entries and waiting list from a CSV file
    //Mohamed
    void LoadEntriesFromFile(string filename);

    //Nour
    //Function To Check if the ID IS Entered Before
    bool CheckID(int id);

    // Main Menu Functions
    bool Check_Admin(string s, string pass);
};
