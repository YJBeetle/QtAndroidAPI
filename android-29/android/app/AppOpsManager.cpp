#include "./AppOpsManager.hpp"

namespace android::app
{
	// Fields
	jint AppOpsManager::MODE_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ALLOWED"
		);
	}
	jint AppOpsManager::MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_DEFAULT"
		);
	}
	jint AppOpsManager::MODE_ERRORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ERRORED"
		);
	}
	jint AppOpsManager::MODE_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_FOREGROUND"
		);
	}
	jint AppOpsManager::MODE_IGNORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_IGNORED"
		);
	}
	jstring AppOpsManager::OPSTR_ADD_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ADD_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_ANSWER_PHONE_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ANSWER_PHONE_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_BODY_SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_BODY_SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_COARSE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_COARSE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_FINE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_FINE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_GET_USAGE_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_GET_USAGE_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_MOCK_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MOCK_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_MONITOR_HIGH_POWER_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_HIGH_POWER_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_MONITOR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_PICTURE_IN_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PICTURE_IN_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_PROCESS_OUTGOING_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CELL_BROADCASTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CELL_BROADCASTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_PHONE_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_NUMBERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_PHONE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECEIVE_MMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_MMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECEIVE_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECEIVE_WAP_PUSH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_WAP_PUSH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECORD_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECORD_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_SYSTEM_ALERT_WINDOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_USE_FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_USE_SIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppOpsManager::WATCH_FOREGROUND_CHANGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"WATCH_FOREGROUND_CHANGES"
		);
	}
	
	AppOpsManager::AppOpsManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring AppOpsManager::permissionToOp(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.AppOpsManager",
			"permissionToOp",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AppOpsManager::checkOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"checkOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::checkOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"checkOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AppOpsManager::checkPackage(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"checkPackage",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AppOpsManager::finishOp(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"finishOp",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::noteOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"noteOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::noteOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"noteOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::noteProxyOp(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"noteProxyOp",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint AppOpsManager::noteProxyOpNoThrow(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint AppOpsManager::noteProxyOpNoThrow(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::startOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"startOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::startOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"startOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AppOpsManager::startWatchingMode(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AppOpsManager::startWatchingMode(jstring arg0, jstring arg1, jint arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AppOpsManager::stopWatchingMode(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"stopWatchingMode",
			"(Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jint AppOpsManager::unsafeCheckOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::unsafeCheckOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::unsafeCheckOpRaw(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOpRaw",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::unsafeCheckOpRawNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOpRawNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::app

