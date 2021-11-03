#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::util
{
	class Currency_CurrencyUsage : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::Currency_CurrencyUsage CASH();
		static android::icu::util::Currency_CurrencyUsage STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Currency_CurrencyUsage(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Currency_CurrencyUsage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::util::Currency_CurrencyUsage valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::util

