//
// Created by ysh on 3/19/24.
//
int main()
{
    int a = createT<int>();
    int b = createT<int>(6);
    std::string s = createT<std::string>("Only for testing purpose");

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "s = " << s << std::endl;

    MyData myData1 = createT<MyData>();

    MyData myData2 = createT<MyData>(1, 3.14, 'i');

    typedef std::vector<int> IntVec;

    IntVec intvec = createT<IntVec>(std::initializer_list<int>({ 1,2,3,4,5 }));
    return 0;
}

//실행하려고 만든 코드가 아니라, 단순 예제의 코드를 섹션별로 옮겼습니다.