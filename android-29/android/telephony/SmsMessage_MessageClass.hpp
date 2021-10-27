#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::telephony
{
	class SmsMessage_MessageClass : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLASS_0();
		static QAndroidJniObject CLASS_1();
		static QAndroidJniObject CLASS_2();
		static QAndroidJniObject CLASS_3();
		static QAndroidJniObject UNKNOWN();
		
		SmsMessage_MessageClass(QAndroidJniObject obj);
		// Constructors
		SmsMessage_MessageClass() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::telephony

