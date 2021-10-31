#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::number
{
	class NumberRangeFormatter_RangeCollapse;
}
namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityFallback;
}
namespace android::icu::number
{
	class UnlocalizedNumberFormatter;
}

namespace android::icu::number
{
	class NumberRangeFormatterSettings : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatterSettings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatterSettings(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::number::NumberRangeFormatterSettings collapse(android::icu::number::NumberRangeFormatter_RangeCollapse arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		android::icu::number::NumberRangeFormatterSettings identityFallback(android::icu::number::NumberRangeFormatter_RangeIdentityFallback arg0);
		android::icu::number::NumberRangeFormatterSettings numberFormatterBoth(android::icu::number::UnlocalizedNumberFormatter arg0);
		android::icu::number::NumberRangeFormatterSettings numberFormatterFirst(android::icu::number::UnlocalizedNumberFormatter arg0);
		android::icu::number::NumberRangeFormatterSettings numberFormatterSecond(android::icu::number::UnlocalizedNumberFormatter arg0);
	};
} // namespace android::icu::number

