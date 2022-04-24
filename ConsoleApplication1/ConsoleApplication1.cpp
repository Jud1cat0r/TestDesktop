#include <iostream>
#include <ctime>;
using namespace std;
int main()
{
    srand(time(NULL));
    //const int n = 10;
    //bool flag = false;
    //int massiv[n] = {}, s = 0;
    //for (int i = 0; i < n; i++)
    //{
    //    massiv[i] = 1 + rand() % 9;
    //    cout << massiv[i] << " ";
    //}
    //cout << endl;

    //for (int i = 0; i < n - 1; i++)
    //{
    //    flag = false;
    //    for (int j = 0; j < n - 1 - i; j++)
    //    {
    //        if (massiv[j] > massiv[j + 1])
    //        {
    //            swap(massiv[j], massiv[j + 1]);
    //            flag = true;
    //        }
    //        s++;
    //    }
    //    if (flag == false) break;
    //}

    //for (int i = 0; i < n; i++)
    //{
    //    cout << massiv[i] << " ";
    //}
    //cout << s;


    //const int n = 10;
    //int massiv[n] = {};
    //for (int i = 0; i < n; i++)
    //{
    //    massiv[i] = 1 + rand() % 9;
    //    cout << massiv[i] << " ";
    //}
    //cout << endl;


    //for (int i = 0, index; i < n; i++)
    //{
    //    index = i;
    //    for (int j = i + 1, min = massiv[i]; j < n - 1; j++)
    //    {
    //        if (min < massiv[j])
    //        {
    //            min = massiv[j];
    //            index = j;
    //        }
    //    }
    //    swap(massiv[i], massiv[index]);
    //}
    //for (int i = 0; i < n; i++)
    //{
    //    cout << massiv[i] << " ";
    //}




    const int n = 10;
    int massiv[n] = {};
    for (int i = 0; i < n; i++)
    {
        massiv[i] = 1 + rand() % 9;
        cout << massiv[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1, min = 0; j > 0; j--)
        {
            if (massiv[j] < massiv[j - 1]) swap(massiv[j], massiv[j - 1]);
            else break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << massiv[i] << " ";
    }

    cout << "test text";


}





















//int array[8] = { 2,3,4,5,2,5,7,1 };
//bool flag = true;
//for (int l = 0, r = 7; l <= r;)
//{
//    if (flag == true)
//    {
//        cout << array[l];
//        l++;
//        flag = false;
//    }
//    else
//    {
//        cout << array[r];
//        r--;
//        flag = true;
//    }
//}


//int array[8] = { 2,3,4,5,2,5,7,1 };
//bool flag = true;
//for (int l = 0, r = 7; l <= r;flag=!flag)
//{
//    if (flag == true) cout << array[l++];
//    else cout << array[r--];
//}



//int array[8] = { 2,3,4,5,2,5,7,1 };
//for (int i = 0; i < 8; i++)
//{
//    cout << array[i] << " ";
//}
//cout << endl;
//for (int l = 0, r = 7; l < 7; l++, r--)
//{
//    swap(array[l], array[r]);
//}
//for (int i = 0; i < 8; i++)
//{
//    cout << array[i] << " ";
//}
