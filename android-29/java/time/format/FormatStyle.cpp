#include "./FormatStyle.hpp"

namespace java::time::format
{
	// Fields
	java::time::format::FormatStyle FormatStyle::FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"FULL",
			"Ljava/time/format/FormatStyle;"
		);
	}
	java::time::format::FormatStyle FormatStyle::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"LONG",
			"Ljava/time/format/FormatStyle;"
		);
	}
	java::time::format::FormatStyle FormatStyle::MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"MEDIUM",
			"Ljava/time/format/FormatStyle;"
		);
	}
	java::time::format::FormatStyle FormatStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"SHORT",
			"Ljava/time/format/FormatStyle;"
		);
	}
	
	// QAndroidJniObject forward
	FormatStyle::FormatStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::format::FormatStyle FormatStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/FormatStyle;",
			arg0
		);
	}
	jarray FormatStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"values",
			"()[Ljava/time/format/FormatStyle;"
		).object<jarray>();
	}
} // namespace java::time::format

