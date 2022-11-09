//
// Created by CHENMENG on 2022/11/9.
//

#include<iostream>
using namespace std;
class BasicException{
public:
    char* Where(){return "BasicException...";}
};
class FileSysException:public BasicException{
public:
    char *Where(){return "FileSysException...";}
};
class FileNotFound:public FileSysException{
public:
    char *Where(){return "FileNotFound...";}
};
class DiskNotFound:public FileSysException{
public:
    char *Where(){return "DiskNotFound...";}
};
int main(){
//    try{
//        throw FileNotFound();
//    }
//    catch(DiskNotFound p){cout<<p.Where()<<endl;}
//    catch(FileNotFound p){cout<<p.Where()<<endl;}
//    catch(FileSysException p){cout<<p.Where()<<endl;}
//    catch(BasicException p){cout<<p.Where()<<endl;}
    try{
        throw FileSysException();
    }
    catch(FileSysException p){cout<<p.Where()<<endl;}
    catch(BasicException p){cout<<p.Where()<<endl;}  //如果排在前面最先执行 Basic
    catch(DiskNotFound p){cout<<p.Where()<<endl;}
    catch(FileNotFound p){cout<<p.Where()<<endl;}
}
