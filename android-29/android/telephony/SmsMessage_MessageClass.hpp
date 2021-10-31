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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsMessage_MessageClass(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SmsMessage_MessageClass(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::telephony

