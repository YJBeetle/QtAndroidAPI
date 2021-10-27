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
		
		Currency_CurrencyUsage(QAndroidJniObject obj);
		// Constructors
		Currency_CurrencyUsage() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::util

