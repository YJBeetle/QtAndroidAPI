#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class LocalizedNumberRangeFormatter;
}
namespace android::icu::number
{
	class UnlocalizedNumberRangeFormatter;
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
	class NumberRangeFormatter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::UnlocalizedNumberRangeFormatter with();
		static android::icu::number::LocalizedNumberRangeFormatter withLocale(android::icu::util::ULocale arg0);
		static android::icu::number::LocalizedNumberRangeFormatter withLocale(java::util::Locale arg0);
	};
} // namespace android::icu::number

