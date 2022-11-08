#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string name[] = {"x1", "x2", "x3"};
    double salary[] = {1200, 1300, 1400};

    map<string, double> sal;
    map<string, double>::iterator p;
    for (int i = 0; i < 3; ++i) {
        sal.insert(make_pair(name[i], salary[i]));
    }

    sal["Tom"] = 1400;
    sal["bob"] = 1500;
    for (p = sal.begin(); p != sal.end(); p++) {
        cout << p->first << "\t" << p->second << endl;
    }

    string person;
    cout << "请输入你要查找的人员:";
    cin >> person;
    int flag = 1;
    for (p = sal.begin(); p != sal.end(); p++) {
        if (p->first == person) {
            cout << p->second << endl;
            flag = 0;
        }
    }
    if (flag) {
        cout<<"没有找到！！";
    }

    cout<<"输入删除人的名字:";
    cin>>person;
    map<string,double>::iterator it;
    it = sal.find(person);
    if (it!=sal.end()){
        cout<<"查找成功！"<<endl;
        cout<<it->first<<":"<<it->second<<endl;
        sal.erase(it);
        cout<<"删除成功！"<<endl;
    }

    cout<<"最后的成员:"<<endl;
    for (p=sal.begin();p!=sal.end();p++) {
        cout<<p->first<<":"<<p->second<<endl;
    }

}
