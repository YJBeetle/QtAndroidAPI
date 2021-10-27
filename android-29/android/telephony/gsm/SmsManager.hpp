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
		
		SmsManager(QAndroidJniObject obj);
		// Constructors
		SmsManager() = default;
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject divideMessage(jstring arg0);
		QAndroidJniObject divideMessage(const QString &arg0);
		void sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5);
		void sendDataMessage(const QString &arg0, const QString &arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4);
		void sendMultipartTextMessage(const QString &arg0, const QString &arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4);
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
		void sendTextMessage(const QString &arg0, const QString &arg1, const QString &arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
	};
} // namespace android::telephony::gsm

