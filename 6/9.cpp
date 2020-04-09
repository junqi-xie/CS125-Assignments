void print(int n)
{
    static int blanks = n - 1;
    if (n > 1)
        print(n - 1);
    
    for (int i = 0; i < blanks; ++i)
        cout << ' ';
    for (int i = 0; i < 2 * n - 1; ++i)
        cout << '*';
    cout << endl;
    --blanks;
}