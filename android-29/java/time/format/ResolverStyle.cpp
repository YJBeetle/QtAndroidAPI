#include "./ResolverStyle.hpp"

namespace java::time::format
{
	// Fields
	java::time::format::ResolverStyle ResolverStyle::LENIENT()
	{
		return getStaticObjectField(
			"java.time.format.ResolverStyle",
			"LENIENT",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	java::time::format::ResolverStyle ResolverStyle::SMART()
	{
		return getStaticObjectField(
			"java.time.format.ResolverStyle",
			"SMART",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	java::time::format::ResolverStyle ResolverStyle::STRICT()
	{
		return getStaticObjectField(
			"java.time.format.ResolverStyle",
			"STRICT",
			"Ljava/time/format/ResolverStyle;"
		);
	}
	
	// QAndroidJniObject forward
	ResolverStyle::ResolverStyle(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::format::ResolverStyle ResolverStyle::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/ResolverStyle;",
			arg0
		);
	}
	jarray ResolverStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"values",
			"()[Ljava/time/format/ResolverStyle;"
		).object<jarray>();
	}
} // namespace java::time::format

