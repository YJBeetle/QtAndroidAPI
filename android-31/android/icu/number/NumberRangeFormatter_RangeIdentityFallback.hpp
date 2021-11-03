#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityFallback : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberRangeFormatter_RangeIdentityFallback APPROXIMATELY();
		static android::icu::number::NumberRangeFormatter_RangeIdentityFallback APPROXIMATELY_OR_SINGLE_VALUE();
		static android::icu::number::NumberRangeFormatter_RangeIdentityFallback RANGE();
		static android::icu::number::NumberRangeFormatter_RangeIdentityFallback SINGLE_VALUE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatter_RangeIdentityFallback(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatter_RangeIdentityFallback(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberRangeFormatter_RangeIdentityFallback valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::number

