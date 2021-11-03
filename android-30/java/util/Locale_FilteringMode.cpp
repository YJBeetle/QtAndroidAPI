#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Locale_FilteringMode.hpp"

namespace java::util
{
	// Fields
	java::util::Locale_FilteringMode Locale_FilteringMode::AUTOSELECT_FILTERING()
	{
		return getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"AUTOSELECT_FILTERING",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::EXTENDED_FILTERING()
	{
		return getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"EXTENDED_FILTERING",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::IGNORE_EXTENDED_RANGES()
	{
		return getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"IGNORE_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::MAP_EXTENDED_RANGES()
	{
		return getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"MAP_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::REJECT_EXTENDED_RANGES()
	{
		return getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"REJECT_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	
	// QAndroidJniObject forward
	Locale_FilteringMode::Locale_FilteringMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Locale_FilteringMode Locale_FilteringMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.Locale$FilteringMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;",
			arg0.object<jstring>()
		);
	}
	JArray Locale_FilteringMode::values()
	{
		return callStaticObjectMethod(
			"java.util.Locale$FilteringMode",
			"values",
			"()[Ljava/util/Locale$FilteringMode;"
		);
	}
} // namespace java::util

