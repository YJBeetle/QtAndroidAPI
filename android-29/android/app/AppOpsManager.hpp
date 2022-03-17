#pragma once

#include "../../JString.hpp"
#include "./AppOpsManager.def.hpp"

namespace android::app
{
	// Fields
	inline jint AppOpsManager::MODE_ALLOWED()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ALLOWED"
		);
	}
	inline jint AppOpsManager::MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_DEFAULT"
		);
	}
	inline jint AppOpsManager::MODE_ERRORED()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ERRORED"
		);
	}
	inline jint AppOpsManager::MODE_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_FOREGROUND"
		);
	}
	inline jint AppOpsManager::MODE_IGNORED()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_IGNORED"
		);
	}
	inline JString AppOpsManager::OPSTR_ADD_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ADD_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_ANSWER_PHONE_CALLS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ANSWER_PHONE_CALLS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_BODY_SENSORS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_BODY_SENSORS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_CALL_PHONE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CALL_PHONE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_CAMERA()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CAMERA",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_COARSE_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_COARSE_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_FINE_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_FINE_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_GET_USAGE_STATS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_GET_USAGE_STATS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_MOCK_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MOCK_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_MONITOR_HIGH_POWER_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_HIGH_POWER_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_MONITOR_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_LOCATION",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_PICTURE_IN_PICTURE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PICTURE_IN_PICTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_PROCESS_OUTGOING_CALLS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_CALENDAR()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALENDAR",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_CALL_LOG()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALL_LOG",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_CELL_BROADCASTS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CELL_BROADCASTS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_CONTACTS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CONTACTS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_EXTERNAL_STORAGE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_PHONE_NUMBERS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_NUMBERS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_PHONE_STATE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_READ_SMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_SMS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_RECEIVE_MMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_MMS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_RECEIVE_SMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_SMS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_RECEIVE_WAP_PUSH()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_WAP_PUSH",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_RECORD_AUDIO()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECORD_AUDIO",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_SEND_SMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SEND_SMS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_SYSTEM_ALERT_WINDOW()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_USE_FINGERPRINT()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_FINGERPRINT",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_USE_SIP()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_SIP",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_WRITE_CALENDAR()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALENDAR",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_WRITE_CALL_LOG()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALL_LOG",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_WRITE_CONTACTS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CONTACTS",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_WRITE_EXTERNAL_STORAGE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString AppOpsManager::OPSTR_WRITE_SETTINGS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline jint AppOpsManager::WATCH_FOREGROUND_CHANGES()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"WATCH_FOREGROUND_CHANGES"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString AppOpsManager::permissionToOp(JString arg0)
	{
		return callStaticObjectMethod(
			"android.app.AppOpsManager",
			"permissionToOp",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jint AppOpsManager::checkOp(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"checkOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::checkOpNoThrow(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"checkOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline void AppOpsManager::checkPackage(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"checkPackage",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void AppOpsManager::finishOp(JString arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"finishOp",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::noteOp(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"noteOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::noteOpNoThrow(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"noteOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::noteProxyOp(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"noteProxyOp",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint AppOpsManager::noteProxyOpNoThrow(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint AppOpsManager::noteProxyOpNoThrow(JString arg0, JString arg1, jint arg2) const
	{
		return callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint AppOpsManager::startOp(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"startOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::startOpNoThrow(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"startOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline void AppOpsManager::startWatchingMode(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void AppOpsManager::startWatchingMode(JString arg0, JString arg1, jint arg2, JObject arg3) const
	{
		callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		);
	}
	inline void AppOpsManager::stopWatchingMode(JObject arg0) const
	{
		callMethod<void>(
			"stopWatchingMode",
			"(Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0.object()
		);
	}
	inline jint AppOpsManager::unsafeCheckOp(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"unsafeCheckOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::unsafeCheckOpNoThrow(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"unsafeCheckOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::unsafeCheckOpRaw(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"unsafeCheckOpRaw",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint AppOpsManager::unsafeCheckOpRawNoThrow(JString arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"unsafeCheckOpRawNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
