#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void qsort(int items[][4], int left, int right)
{
    register int i, j, k;
    int x, y;

    i = left;
    j = right;
    x = items[(left + right) / 2][3];
    do
    {
        while ((items[i][3] < x) && (i < right))
            i++;
        while ((x < items[j][3]) && (j > left))
            j--;
        if (i <= j)
        {
            y = items[i][0];
            items[i][0] = items[j][0];
            items[j][0] = y;
            y = items[i][1];
            items[i][1] = items[j][1];
            items[j][1] = y;
            y = items[i][2];
            items[i][2] = items[j][2];
            items[j][2] = y;
            y = items[i][3];
            items[i][3] = items[j][3];
            items[j][3] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j)
        qsort(items, left, j);
    if (i < right)
        qsort(items, i, right);
}

int main()
{
    int i, k, j, n, z, g, count = 0;
    int p, q, r;
    int arr[100000][4] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
        arr[i][3] = arr[i][0] + arr[i][1] + arr[i][2];
        if (arr[i][0] > arr[i][1])
            swap(&arr[i][0], &arr[i][1]);
        if (arr[i][1] > arr[i][2])
            swap(&arr[i][1], &arr[i][2]);
        if (arr[i][0] > arr[i][1])
            swap(&arr[i][0], &arr[i][1]);
    }
    qsort(arr, 0, n - 1);
    i = 0;
    while (1)
    {
        p = arr[i][0];
        q = arr[i][1];
        r = arr[i][2];
        k = arr[i][3];
        j = i;
        z = 0;
        if (p == 0)
        {
            ++i;
            if (i == n)
                break;
            else
                continue;
        }
        //author Anas Khan
        while (arr[++i][3] == k && i < n)
        {
            if (arr[i][0] != 0 && arr[i][0] == p && arr[i][1] == q && arr[i][2] == r)
            {
                arr[i][0] = 0;
                z++;
            }
        }
        if (z != i - 1 - j && z >= 1)
        {
            i = j + 1;
            continue;
        }
        else if (z == 0)
        {
            count++;
            if (i != j + 1)
            {
                i = j + 1;
                continue;
            }
        }
        if (i == n)
            break;
    }
    printf("%d", count);
    return 0;
}