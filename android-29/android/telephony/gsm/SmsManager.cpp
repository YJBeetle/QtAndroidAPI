#include "../../app/PendingIntent.hpp"
#include "../../../java/util/ArrayList.hpp"
#include "./SmsManager.hpp"

namespace android::telephony::gsm
{
	// Fields
	jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_NO_SERVICE"
		);
	}
	jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_NULL_PDU"
		);
	}
	jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_RADIO_OFF"
		);
	}
	jint SmsManager::STATUS_ON_SIM_FREE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_FREE"
		);
	}
	jint SmsManager::STATUS_ON_SIM_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_READ"
		);
	}
	jint SmsManager::STATUS_ON_SIM_SENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_SENT"
		);
	}
	jint SmsManager::STATUS_ON_SIM_UNREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_UNREAD"
		);
	}
	jint SmsManager::STATUS_ON_SIM_UNSENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_UNSENT"
		);
	}
	
	SmsManager::SmsManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SmsManager::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsManager",
			"getDefault",
			"()Landroid/telephony/gsm/SmsManager;"
		);
	}
	QAndroidJniObject SmsManager::divideMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	void SmsManager::sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5)
	{
		__thiz.callMethod<void>(
			"sendDataMessage",
			"(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void SmsManager::sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4)
	{
		__thiz.callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void SmsManager::sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
} // namespace android::telephony::gsm

