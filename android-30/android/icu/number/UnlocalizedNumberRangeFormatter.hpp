#pragma once

#include "../../../JObject.hpp"
#include "./NumberRangeFormatterSettings.hpp"

namespace android::icu::number
{
	class LocalizedNumberRangeFormatter;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::number
{
	class UnlocalizedNumberRangeFormatter : public android::icu::number::NumberRangeFormatterSettings
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnlocalizedNumberRangeFormatter(const char *className, const char *sig, Ts...agv) : android::icu::number::NumberRangeFormatterSettings(className, sig, std::forward<Ts>(agv)...) {}
		UnlocalizedNumberRangeFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::LocalizedNumberRangeFormatter locale(android::icu::util::ULocale arg0);
		android::icu::number::LocalizedNumberRangeFormatter locale(java::util::Locale arg0);
	};
} // namespace android::icu::number

