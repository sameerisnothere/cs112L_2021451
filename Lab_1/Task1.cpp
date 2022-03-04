#include <iostream>
#include <iomanip>
using namespace std;

struct student_det
{
    string name;
    int regNo;
    string degree_prog;
    float sgpa;
};


int main()
{
    int numOfcourses,numOfstudents;
    cout<<"Enter the number of students: ";
    cin>>numOfstudents;
    student_det s[numOfstudents];

    for (int i = 0; i < numOfstudents; i++)
    {
        cout << "Enter record of student #" << (i + 1) << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter reg.no: ";
        cin >> s[i].regNo;
        cout << "Enter degree program: ";
        cin >> s[i].degree_prog;
        cout << "Enter the number of courses: ";
        cin >> numOfcourses;
        float marks[numOfcourses], grade[numOfcourses];
        float tot_ch=numOfcourses *3, tot_grade=0;
        for (int j = 0; j < numOfcourses; j++)
        {
            cout << "Enter the marks of course #" << (j + 1) << ": ";
            cin >> marks[j];
            if (marks[j] >= 86)
                grade[j] = 4.0 * 3;
            else if (marks[j] >= 82 && marks[j] < 86)
                grade[j] = 3.67 * 3;
            else if (marks[j] >= 78 && marks[j] < 82)
                grade[j] = 3.33 * 3;
            else if (marks[j] >= 74 && marks[j] < 78)
                grade[j] = 3.0 * 3;
            else if (marks[j] >= 70 && marks[j] < 74)
                grade[j] = 2.67 * 3;
            else if (marks[j] >= 66 && marks[j] < 70)
                grade[j] = 2.33 * 3;

        }
        for (int k = 0; k < numOfcourses; k++)
        {
            tot_grade += grade[k];
        }

        s[i].sgpa=tot_grade / tot_ch;
        cout << endl;
    }
    for(int j=numOfstudents;j>1;j--){
        for(int i=0;i<numOfstudents-1;i++){
        if(s[j].sgpa<s[j+1].sgpa){
            student_det temp = s[j];
			s[j] = s[j+1];
			s[j+1] = temp;
        }            
        }
    }
    cout << "S.no" <<"  "<<"Name"<<"  "<<"Reg.no"<<"  "<<"Degree program"<<"  "<<"SGPA"<<endl;
    for(int i=0;i<3;i++){
        cout<<(i+1)<<"       "<<s[i].name<<"       "<<s[i].regNo<<"       "<<s[i].degree_prog<<"       "<<s[i].sgpa<<endl;
    }

    return 0;
}
