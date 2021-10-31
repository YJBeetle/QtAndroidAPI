#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace java::util
{
	class ArrayList;
}

namespace android::telephony::gsm
{
	class SmsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint RESULT_ERROR_GENERIC_FAILURE();
		static jint RESULT_ERROR_NO_SERVICE();
		static jint RESULT_ERROR_NULL_PDU();
		static jint RESULT_ERROR_RADIO_OFF();
		static jint STATUS_ON_SIM_FREE();
		static jint STATUS_ON_SIM_READ();
		static jint STATUS_ON_SIM_SENT();
		static jint STATUS_ON_SIM_UNREAD();
		static jint STATUS_ON_SIM_UNSENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::gsm::SmsManager getDefault();
		java::util::ArrayList divideMessage(jstring arg0);
		void sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4);
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
	};
} // namespace android::telephony::gsm

