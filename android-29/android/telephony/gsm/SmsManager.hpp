#pragma once

#ifndef ANDROID_TELEPHONY_GSM_SMSMANAGER
#define ANDROID_TELEPHONY_GSM_SMSMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::telephony::gsm
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3, __jni_impl::android::app::PendingIntent arg4);
		QAndroidJniObject divideMessage(jstring arg0);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, __jni_impl::java::util::ArrayList arg2, __jni_impl::java::util::ArrayList arg3, __jni_impl::java::util::ArrayList arg4);
		void sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, __jni_impl::android::app::PendingIntent arg4, __jni_impl::android::app::PendingIntent arg5);
	};
} // namespace __jni_impl::android::telephony::gsm

#include "../../app/PendingIntent.hpp"
#include "../../../java/util/ArrayList.hpp"

namespace __jni_impl::android::telephony::gsm
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
	
	// Constructors
	void SmsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SmsManager::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsManager",
			"getDefault",
			"()Landroid/telephony/gsm/SmsManager;"
		);
	}
	void SmsManager::sendTextMessage(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3, __jni_impl::android::app::PendingIntent arg4)
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
	QAndroidJniObject SmsManager::divideMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	void SmsManager::sendMultipartTextMessage(jstring arg0, jstring arg1, __jni_impl::java::util::ArrayList arg2, __jni_impl::java::util::ArrayList arg3, __jni_impl::java::util::ArrayList arg4)
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
	void SmsManager::sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, __jni_impl::android::app::PendingIntent arg4, __jni_impl::android::app::PendingIntent arg5)
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
} // namespace __jni_impl::android::telephony::gsm

namespace android::telephony::gsm
{
	class SmsManager : public __jni_impl::android::telephony::gsm::SmsManager
	{
	public:
		SmsManager(QAndroidJniObject obj) { __thiz = obj; }
		SmsManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony::gsm

#endif // ANDROID_TELEPHONY_GSM_SMSMANAGER

