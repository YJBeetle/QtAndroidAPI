#include "../../../JArray.hpp"
#include "../../../JString.hpp"
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
	
	// QJniObject forward
	ResolverStyle::ResolverStyle(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::format::ResolverStyle ResolverStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/ResolverStyle;",
			arg0.object<jstring>()
		);
	}
	JArray ResolverStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.ResolverStyle",
			"values",
			"()[Ljava/time/format/ResolverStyle;"
		);
	}
} // namespace java::time::format

