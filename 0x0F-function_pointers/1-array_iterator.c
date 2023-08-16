/**
 * array_iterator - function
 * @array:par1
 * @size:par2
 * @action:par3
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		action(i);
	}
}
