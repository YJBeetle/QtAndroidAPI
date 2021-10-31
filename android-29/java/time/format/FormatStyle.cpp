#include "./FormatStyle.hpp"

namespace java::time::format
{
	// Fields
	QAndroidJniObject FormatStyle::FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"FULL",
			"Ljava/time/format/FormatStyle;"
		);
	}
	QAndroidJniObject FormatStyle::LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"LONG",
			"Ljava/time/format/FormatStyle;"
		);
	}
	QAndroidJniObject FormatStyle::MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"MEDIUM",
			"Ljava/time/format/FormatStyle;"
		);
	}
	QAndroidJniObject FormatStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.FormatStyle",
			"SHORT",
			"Ljava/time/format/FormatStyle;"
		);
	}
	
	FormatStyle::FormatStyle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FormatStyle::valueOf(jstring arg0)
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

