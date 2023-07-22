#pragma once

#include "./NumberFormatterSettings.def.hpp"

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
		LocalizedNumberFormatter(QAndroidJniObject obj) : android::icu::number::NumberFormatterSettings(obj) {}
		
		// Constructors
		
		// Methods
		android::icu::number::FormattedNumber format(android::icu::util::Measure arg0) const;
		android::icu::number::FormattedNumber format(jdouble arg0) const;
		android::icu::number::FormattedNumber format(java::lang::Number arg0) const;
		android::icu::number::FormattedNumber format(jlong arg0) const;
		java::text::Format toFormat() const;
	};
} // namespace android::icu::number

