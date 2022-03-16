#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FormatStyle.hpp"

namespace java::time::format
{
	// Fields
	java::time::format::FormatStyle FormatStyle::FULL()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"FULL",
			"Ljava/time/format/FormatStyle;"
		);
	}
	java::time::format::FormatStyle FormatStyle::LONG()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"LONG",
			"Ljava/time/format/FormatStyle;"
		);
	}
	java::time::format::FormatStyle FormatStyle::MEDIUM()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"MEDIUM",
			"Ljava/time/format/FormatStyle;"
		);
	}
	java::time::format::FormatStyle FormatStyle::SHORT()
	{
		return getStaticObjectField(
			"java.time.format.FormatStyle",
			"SHORT",
			"Ljava/time/format/FormatStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	java::time::format::FormatStyle FormatStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/FormatStyle;",
			arg0.object<jstring>()
		);
	}
	JArray FormatStyle::values()
	{
		return callStaticObjectMethod(
			"java.time.format.FormatStyle",
			"values",
			"()[Ljava/time/format/FormatStyle;"
		);
	}
} // namespace java::time::format

