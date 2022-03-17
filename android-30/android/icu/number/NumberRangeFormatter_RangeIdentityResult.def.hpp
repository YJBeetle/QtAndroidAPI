#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityResult : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult EQUAL_AFTER_ROUNDING();
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult EQUAL_BEFORE_ROUNDING();
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult NOT_EQUAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatter_RangeIdentityResult(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatter_RangeIdentityResult(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberRangeFormatter_RangeIdentityResult valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::number

