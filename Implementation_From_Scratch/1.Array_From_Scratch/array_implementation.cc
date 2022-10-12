#include <bits/stdc++.h>

template <typename x> class vector_{

public:
    vector_(){
        array = new x[1];
        capacity = 1;
        current = 0;
    }
    ~ vector_(){
        delete[] array;
    }

    void push(x data){
        
        resize();
        array[current] = data;
        current++;

    }

    void insert(int index, x data){
        push(data);
        for(int i=current-1;i>index;i--){
            array[i]=array[i-1];
        }
        array[index] = data;
    }

    void pop(){
        resize();
        current--;
    }
    void prnt(){
        for(int i=0;i<current;i++){
            std::cout << array[i] << " " ;
        }
        std::cout << std::endl;
    }
    void delete_(int index){
        for(int i=index;i<current;i++){
            array[i]=array[i+1];
        }
        current--;
    }

    void remove(x data){
        for(int i=0;i<current;i++){
            if(array[i]==data) {
                delete_(i);
                i--;
            }
        }
        resize();
    }

    int size(){
        return current;
    }

    int capacity_(){
        return capacity;
    }

    bool is_empty(){
        return !current;
    }

    x at(int index){
        return array[index];
    }

    int find(x data){
        for(int i=0;i<current;i++){
            if(data==array[i]){
                return i;
            }
        }
    }


private:
    x* array;
    int capacity;
    int current;
    void resize(){
        if(current == capacity){
            x* temp = new x[2*capacity];

            for (int i=0; i<capacity; i++){
                temp[i] = array[i];
            }

            delete[] array;
            capacity *= 2;
            array = temp;
        }

        else if(current<(capacity/4)){
            x* temp = new x[capacity/2];

            for (int i=0; i<current; i++){
                temp[i] = array[i];
            }

            delete[] array;
            capacity /= 2;
            array = temp;
        }
    }
};



int main(){
    vector_<int> vec1;
    std::cout << "Push 33 for 6 times and 38 for 4 times" << std::endl;
    vec1.push(33);
    vec1.push(33);
    vec1.push(33);
    vec1.push(33);
    vec1.push(33);
    vec1.push(33);
    vec1.push(38);
    vec1.push(38);
    vec1.push(38);
    vec1.push(38);
    std::cout << "Printing all values: " ;
    vec1.prnt();
    std::cout << "Inserting 12 at 0 index";
    vec1.insert(0, 12);
    std::cout << "Inserting 13 at 1 index";
    vec1.insert(1, 13);
    std::cout << "Printing all values: " ;
    vec1.prnt();
    std::cout << "Current Capacity" << vec1.capacity_() << std::endl;
    std::cout << "Current Size" << vec1.size() << std::endl;
    std::cout << "Popping 2 times and printing all values again" ;
    vec1.pop();
    vec1.pop();
    vec1.prnt();
    std::cout << "Deleting element at index 1 and then printing all values";
    vec1.delete_(1);
    vec1.prnt();
    std::cout << "Is the array Empty?[1 means 'yes' and 0 means 'no']" <<  vec1.is_empty() << std::endl;
    std::cout << "Removing all 33 and print again";
    vec1.remove(33);
    vec1.prnt();
    std::cout << "Current Capacity" << vec1.capacity_() << std::endl;
    std::cout << "Current Size" << vec1.size() << std::endl;
    std::cout << "Printing Element at 0 index = " << vec1.at(0) << std::endl;

    return 0;
}