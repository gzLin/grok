 #include "grok.inc"

int binary_search(int* list, int len, int item)
{
	int low = 0, high = len - 1, mid;

	while(low <= high)
	{
		mid = (low + high) / 2;
		int nresult = list[mid];
		if (nresult == item)
			return mid;
		if (nresult > item)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}

int main(int argc, char* argv[])
{
	int a[8] = {1, 5, 10, 14, 32, 65, 79, 81};
	int nresult, nPos = -1;
	if (binary_search(a, 8, 14) >= 0)
		printf("result = %d, pos = %d\n", a[binary_search(a, 8, 14)], binary_search(a, 8, 14) + 1);
	else
		printf("found nothing!\n");

	return 0;
}