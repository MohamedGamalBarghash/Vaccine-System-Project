#pragma once
#include "MainManager.h"
#include <queue>
class Admin : public MainManager {
public:
    string password;
    Admin();
    void Delete(int ID);
    void DeleteAll();
    void ViewAll();
    void ViewOne(int ID);
    void ViewOrderedByAge();
    void ViewWaitingList();
    void ViewDosesRecord();
    float ViewStatistics();
};