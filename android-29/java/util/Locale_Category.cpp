#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Locale_Category.hpp"

namespace java::util
{
	// Fields
	java::util::Locale_Category Locale_Category::DISPLAY()
	{
		return getStaticObjectField(
			"java.util.Locale$Category",
			"DISPLAY",
			"Ljava/util/Locale$Category;"
		);
	}
	java::util::Locale_Category Locale_Category::FORMAT()
	{
		return getStaticObjectField(
			"java.util.Locale$Category",
			"FORMAT",
			"Ljava/util/Locale$Category;"
		);
	}
	
	// Constructors
	
	// Methods
	java::util::Locale_Category Locale_Category::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale$Category",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$Category;",
			arg0.object<jstring>()
		);
	}
	JArray Locale_Category::values()
	{
		return callStaticObjectMethod(
			"java.util.Locale$Category",
			"values",
			"()[Ljava/util/Locale$Category;"
		);
	}
} // namespace java::util

