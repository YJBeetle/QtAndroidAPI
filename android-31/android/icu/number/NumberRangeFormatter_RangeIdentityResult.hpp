#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityResult : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult EQUAL_AFTER_ROUNDING();
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult EQUAL_BEFORE_ROUNDING();
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult NOT_EQUAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatter_RangeIdentityResult(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatter_RangeIdentityResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::number

