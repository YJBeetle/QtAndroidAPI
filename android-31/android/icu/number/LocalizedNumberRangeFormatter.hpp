#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./NumberRangeFormatterSettings.hpp"

namespace android::icu::number
{
	class FormattedNumberRange;
}
namespace java::lang
{
	class Number;
}

namespace android::icu::number
{
	class LocalizedNumberRangeFormatter : public android::icu::number::NumberRangeFormatterSettings
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalizedNumberRangeFormatter(const char *className, const char *sig, Ts...agv) : android::icu::number::NumberRangeFormatterSettings(className, sig, std::forward<Ts>(agv)...) {}
		LocalizedNumberRangeFormatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::FormattedNumberRange formatRange(jdouble arg0, jdouble arg1);
		android::icu::number::FormattedNumberRange formatRange(jint arg0, jint arg1);
		android::icu::number::FormattedNumberRange formatRange(java::lang::Number arg0, java::lang::Number arg1);
	};
} // namespace android::icu::number

