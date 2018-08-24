
    #include <iostream>
    
    using namespace std;
    template <typename T>
    class ListNode{
        private:
            ListNode *next;
            T *value;
        public:
            ListNode(value);
            void switchNext(ListNode n);
            void pushNext(ListNode n);
            *ListNode getNext();
            void print();
            void printAll();
    }
    class ListNodeWrapper{
        private:
            *ListNode Head
    }
    



    int main()
    {
    
        int num = 3;

        std::cout << num << std::endl;

        return 0;
    }