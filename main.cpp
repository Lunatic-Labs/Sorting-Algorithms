//
//  main.cpp
//  Sorting


#include <iostream>
#include <fstream>
#include "Sorts.hpp"
#include <time.h>

int main() {
    ofstream fout;
    //fout.open("Unsorted Data.csv");
    
    //column headers
    //fout << "n=,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608\n";
    //cout << "n=,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608\n";
    
    int array_size = 5;
    float time;
    bool tooLong = false;
    fout << "Insertion";
    cout << "Insertion";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            //return time it took to sort
            time = insertionSort(myArray, array_size);
            
            if (time < 600.0) //print time
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else //print inf
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    fout << endl;
    cout << endl;
    
    array_size = 5;
    tooLong = false;
    //fout << "Selection";
    cout << "Selection";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            
            time = selectionSort(myArray, array_size);
            
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    fout << endl;
    cout << endl;
    
    array_size = 5;
    tooLong = false;
    fout << "Bubble";
    cout << "Bubble";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = bubbleSort(myArray, array_size);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;
    
    array_size = 5;
    tooLong = false;
    fout << "Merge";
    cout << "Merge";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = mergeSort(myArray, 0, array_size - 1);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;
    
    array_size = 5;
    tooLong = false;
    fout << "Quick";
    cout << "Quick";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = quickSort(myArray, 0, array_size - 1);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;

    array_size = 5;
    tooLong = false;
    fout << "Heap";
    cout << "Heap";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = heapSort(myArray, array_size);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;
    
    array_size = 5;
    tooLong = false;
    fout << "Radix";
    cout << "Radix";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = rand() % 1000; // range: 0-999
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = radixSort(myArray, array_size);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;
    fout.close();
    
    fout.open("Sorted Data.csv");
    
    //column headers
    //fout << "n=,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608\n";
   // cout << "n=,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608\n";
    
    array_size = 5;
    tooLong = false;
    fout << "Insertion";
    cout << "Insertion";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = myArray[i] = i;
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            //return time it took to sort
            time = insertionSort(myArray, array_size);
     
            if (time < 600.0) //print time
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else //print inf
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    fout << endl;
    cout << endl;
     
        array_size = 5;
        tooLong = false;
        fout << "Selection";
        cout << "Selection";
        while (array_size < 10000000){
            if (!tooLong)
            {
                int * myArray;
                myArray = new int[array_size];
                for(int i = 0; i < array_size; i++)
                {
                    myArray[i] = myArray[i] = i;
                }
                // make a copy of myArray
                int * otherArray;
                otherArray = new int[array_size];
                std::copy(myArray, myArray + array_size, otherArray);
                //sort otherArray
                std::sort(otherArray, otherArray + array_size);
     
                time = selectionSort(myArray, array_size);
     
                if (time < 600.0)
                {
                    if (compare(myArray, otherArray, array_size))
                    {
                        if (time < 0.1)
                        {
                            fout << ",0";
                            cout << ",0";
                        }
                        else
                        {
                            fout << "," << time;
                            cout << "," << time;
                        }
                    }
                    else
                    {
                        cout << "Something is not right." << endl;
                        break;
                    }
                }
                else
                {
                    tooLong = true;
                    fout << ",inf";
                    cout << ",inf";
                }
                delete[] myArray;
                delete[] otherArray;
            }
            else
            {
                fout << ",inf";
                cout << ",inf";
            }
            array_size = array_size * 2;
    }
    fout << endl;
    cout << endl;
     
     array_size = 5;
     tooLong = false;
     fout << "Bubble";
     cout << "Bubble";
     while (array_size < 10000000){
         if (!tooLong)
         {
             int * myArray;
             myArray = new int[array_size];
             for(int i = 0; i < array_size; i++)
             {
                 myArray[i] = myArray[i] = i;
             }
             // make a copy of myArray
             int * otherArray;
             otherArray = new int[array_size];
             std::copy(myArray, myArray + array_size, otherArray);
             //sort otherArray
             std::sort(otherArray, otherArray + array_size);
             time = bubbleSort(myArray, array_size);
             if (time < 600.0)
             {
                 if (compare(myArray, otherArray, array_size))
                 {
                     if (time < 0.1)
                     {
                         fout << ",0";
                         cout << ",0";
                     }
                     else
                     {
                         fout << "," << time;
                         cout << "," << time;
                     }
                 }
                 else
                 {
                     cout << "Something is not right." << endl;
                     break;
                 }
             }
             else
             {
                 tooLong = true;
                 fout << ",inf";
                 cout << ",inf";
             }
             delete[] myArray;
             delete[] otherArray;
         }
         else
         {
             fout << ",inf";
             cout << ",inf";
         }
         array_size = array_size * 2;
     }
    
    fout << endl;
    cout << endl;
     
     array_size = 5;
     tooLong = false;
     fout << "Merge";
     cout << "Merge";
     while (array_size < 10000000){
         if (!tooLong)
         {
             int * myArray;
             myArray = new int[array_size];
             for(int i = 0; i < array_size; i++)
             {
                 myArray[i] = myArray[i] = i;
             }
             // make a copy of myArray
             int * otherArray;
             otherArray = new int[array_size];
             std::copy(myArray, myArray + array_size, otherArray);
             //sort otherArray
             std::sort(otherArray, otherArray + array_size);
             time = mergeSort(myArray, 0, array_size - 1);
             if (time < 600.0)
             {
                 if (compare(myArray, otherArray, array_size))
                 {
                     if (time < 0.1)
                     {
                         fout << ",0";
                         cout << ",0";
                     }
                     else
                     {
                         fout << "," << time;
                         cout << "," << time;
                     }
                 }
                 else
                 {
                     cout << "Something is not right." << endl;
                     break;
                 }
             }
             else
             {
                 tooLong = true;
                 fout << ",inf";
                 cout << ",inf";
             }
             delete[] myArray;
             delete[] otherArray;
         }
         else
         {
             fout << ",inf";
             cout << ",inf";
         }
         array_size = array_size * 2;
     }
     fout << endl;
     cout << endl;
     
     array_size = 5;
     tooLong = false;
     fout << "Quick";
     cout << "Quick";
     while (array_size < 10000000){
         if (!tooLong)
         {
             int * myArray;
             myArray = new int[array_size];
             for(int i = 0; i < array_size; i++)
             {
                 myArray[i] = myArray[i] = i;
             }
             // make a copy of myArray
             int * otherArray;
             otherArray = new int[array_size];
             std::copy(myArray, myArray + array_size, otherArray);
             //sort otherArray
             std::sort(otherArray, otherArray + array_size);
             time = quickSort(myArray, 0, array_size - 1);
             if (time < 600.0)
             {
                 if (compare(myArray, otherArray, array_size))
                 {
                     if (time < 0.1)
                     {
                         fout << ",0";
                         cout << ",0";
                     }
                     else
                     {
                         fout << "," << time;
                         cout << "," << time;
                     }
                 }
                 else
                 {
                     cout << "Something is not right." << endl;
                     break;
                 }
             }
             else
             {
                 tooLong = true;
                 fout << ",inf";
                 cout << ",inf";
             }
             delete[] myArray;
             delete[] otherArray;
         }
         else
         {
         fout << ",inf";
             cout << ",inf";
         }
         array_size = array_size * 2;
     }
     
     fout << endl;
     cout << endl;
     
    array_size = 5;
    tooLong = false;
    fout << "Heap";
    cout << "Heap";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = i;
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = heapSort(myArray, array_size);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;
    
    array_size = 5;
    tooLong = false;
    fout << "Radix";
    cout << "Radix";
    while (array_size < 10000000){
        if (!tooLong)
        {
            int * myArray;
            myArray = new int[array_size];
            for(int i = 0; i < array_size; i++)
            {
                myArray[i] = myArray[i] = i;
            }
            // make a copy of myArray
            int * otherArray;
            otherArray = new int[array_size];
            std::copy(myArray, myArray + array_size, otherArray);
            //sort otherArray
            std::sort(otherArray, otherArray + array_size);
            time = radixSort(myArray, array_size);
            if (time < 600.0)
            {
                if (compare(myArray, otherArray, array_size))
                {
                    if (time < 0.1)
                    {
                        fout << ",0";
                        cout << ",0";
                    }
                    else
                    {
                        fout << "," << time;
                        cout << "," << time;
                    }
                }
                else
                {
                    cout << "Something is not right." << endl;
                    break;
                }
            }
            else
            {
                tooLong = true;
                fout << ",inf";
                cout << ",inf";
            }
            delete[] myArray;
            delete[] otherArray;
        }
        else
        {
            fout << ",inf";
            cout << ",inf";
        }
        array_size = array_size * 2;
    }
    
    fout << endl;
    cout << endl;
    fout.close();
}
