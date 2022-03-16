#pragma once

#include "../../../JObject.hpp"

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
class JObject;

namespace android::icu::number
{
	class NumberRangeFormatterSettings : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatterSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatterSettings(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::icu::number::NumberRangeFormatterSettings collapse(android::icu::number::NumberRangeFormatter_RangeCollapse arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		android::icu::number::NumberRangeFormatterSettings identityFallback(android::icu::number::NumberRangeFormatter_RangeIdentityFallback arg0) const;
		android::icu::number::NumberRangeFormatterSettings numberFormatterBoth(android::icu::number::UnlocalizedNumberFormatter arg0) const;
		android::icu::number::NumberRangeFormatterSettings numberFormatterFirst(android::icu::number::UnlocalizedNumberFormatter arg0) const;
		android::icu::number::NumberRangeFormatterSettings numberFormatterSecond(android::icu::number::UnlocalizedNumberFormatter arg0) const;
	};
} // namespace android::icu::number

