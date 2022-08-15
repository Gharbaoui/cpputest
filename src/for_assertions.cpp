#include <cctype>

bool	is_it_cat(const char *cat)
{
	unsigned i;
	const char c[] = "cat";
	i = 0;

	while(cat[i]){
		if (std::tolower(cat[i]) != c[i])
			return false;
		++i;
	}
	return (true && (i == 3));
}
