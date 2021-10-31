#include "./ResolverStyle.hpp"

namespace java::time::format
{
	// Fields
	QAndroidJniObject ResolverStyle::LENIENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.ResolverStyle",
			"LENIENT",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	QAndroidJniObject ResolverStyle::SMART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.ResolverStyle",
			"SMART",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	QAndroidJniObject ResolverStyle::STRICT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.ResolverStyle",
			"STRICT",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	
	// QAndroidJniObject forward
	ResolverStyle::ResolverStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ResolverStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/ResolverStyle;",
			arg0
		);
	}
	jarray ResolverStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"values",
			"()[Ljava/time/format/ResolverStyle;"
		).object<jarray>();
	}
} // namespace java::time::format

