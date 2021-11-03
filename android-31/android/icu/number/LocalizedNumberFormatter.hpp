#pragma once

#include "../../../JObject.hpp"
#include "./NumberFormatterSettings.hpp"

namespace android::icu::number
{
	class FormattedNumber;
}
namespace android::icu::util
{
	class Measure;
}
namespace java::lang
{
	class Number;
}
namespace java::text
{
	class Format;
}

namespace android::icu::number
{
	class LocalizedNumberFormatter : public android::icu::number::NumberFormatterSettings
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalizedNumberFormatter(const char *className, const char *sig, Ts...agv) : android::icu::number::NumberFormatterSettings(className, sig, std::forward<Ts>(agv)...) {}
		LocalizedNumberFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::FormattedNumber format(android::icu::util::Measure arg0);
		android::icu::number::FormattedNumber format(jdouble arg0);
		android::icu::number::FormattedNumber format(java::lang::Number arg0);
		android::icu::number::FormattedNumber format(jlong arg0);
		java::text::Format toFormat();
	};
} // namespace android::icu::number

