#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::number
{
	class NumberFormatter_GroupingStrategy : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_GroupingStrategy AUTO();
		static android::icu::number::NumberFormatter_GroupingStrategy MIN2();
		static android::icu::number::NumberFormatter_GroupingStrategy OFF();
		static android::icu::number::NumberFormatter_GroupingStrategy ON_ALIGNED();
		static android::icu::number::NumberFormatter_GroupingStrategy THOUSANDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormatter_GroupingStrategy(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_GroupingStrategy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_GroupingStrategy valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::number

