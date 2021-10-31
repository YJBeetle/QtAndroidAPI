#include "./Locale_Category.hpp"

namespace java::util
{
	// Fields
	java::util::Locale_Category Locale_Category::DISPLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$Category",
			"DISPLAY",
			"Ljava/util/Locale$Category;"
		);
	}
	java::util::Locale_Category Locale_Category::FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$Category",
			"FORMAT",
			"Ljava/util/Locale$Category;"
		);
	}
	
	// QAndroidJniObject forward
	Locale_Category::Locale_Category(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Locale_Category Locale_Category::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$Category",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$Category;",
			arg0
		);
	}
	jarray Locale_Category::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$Category",
			"values",
			"()[Ljava/util/Locale$Category;"
		).object<jarray>();
	}
} // namespace java::util

