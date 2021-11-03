#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::number
{
	class NumberFormatter_DecimalSeparatorDisplay : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberFormatter_DecimalSeparatorDisplay ALWAYS();
		static android::icu::number::NumberFormatter_DecimalSeparatorDisplay AUTO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormatter_DecimalSeparatorDisplay(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter_DecimalSeparatorDisplay(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberFormatter_DecimalSeparatorDisplay valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::number

