#pragma once

#include "../../../JByteArray.hpp"
#include "../../app/PendingIntent.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/ArrayList.def.hpp"
#include "./SmsManager.def.hpp"

namespace android::telephony::gsm
{
	// Fields
	inline jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	inline jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_NO_SERVICE"
		);
	}
	inline jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_NULL_PDU"
		);
	}
	inline jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_RADIO_OFF"
		);
	}
	inline jint SmsManager::STATUS_ON_SIM_FREE()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_FREE"
		);
	}
	inline jint SmsManager::STATUS_ON_SIM_READ()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_READ"
		);
	}
	inline jint SmsManager::STATUS_ON_SIM_SENT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_SENT"
		);
	}
	inline jint SmsManager::STATUS_ON_SIM_UNREAD()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_UNREAD"
		);
	}
	inline jint SmsManager::STATUS_ON_SIM_UNSENT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_UNSENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::gsm::SmsManager SmsManager::getDefault()
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsManager",
			"getDefault",
			"()Landroid/telephony/gsm/SmsManager;"
		);
	}
	inline java::util::ArrayList SmsManager::divideMessage(JString arg0) const
	{
		return callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline void SmsManager::sendDataMessage(JString arg0, JString arg1, jshort arg2, JByteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5) const
	{
		callMethod<void>(
			"sendDataMessage",
			"(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jbyteArray>(),
			arg4.object(),
			arg5.object()
		);
	}
	inline void SmsManager::sendMultipartTextMessage(JString arg0, JString arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4) const
	{
		callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void SmsManager::sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const
	{
		callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::telephony::gsm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::gsm;
#endif
