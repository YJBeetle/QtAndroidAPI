#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::util
{
	class Currency_CurrencyUsage : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CASH();
		static QAndroidJniObject STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Currency_CurrencyUsage(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Currency_CurrencyUsage(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::util

