#pragma once

#ifndef ANDROID_APP_APPOPSMANAGER
#define ANDROID_APP_APPOPSMANAGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::app
{
	class AppOpsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_ALLOWED();
		static jint MODE_DEFAULT();
		static jint MODE_ERRORED();
		static jint MODE_FOREGROUND();
		static jint MODE_IGNORED();
		static QAndroidJniObject OPSTR_ADD_VOICEMAIL();
		static QAndroidJniObject OPSTR_ANSWER_PHONE_CALLS();
		static QAndroidJniObject OPSTR_BODY_SENSORS();
		static QAndroidJniObject OPSTR_CALL_PHONE();
		static QAndroidJniObject OPSTR_CAMERA();
		static QAndroidJniObject OPSTR_COARSE_LOCATION();
		static QAndroidJniObject OPSTR_FINE_LOCATION();
		static QAndroidJniObject OPSTR_GET_USAGE_STATS();
		static QAndroidJniObject OPSTR_MOCK_LOCATION();
		static QAndroidJniObject OPSTR_MONITOR_HIGH_POWER_LOCATION();
		static QAndroidJniObject OPSTR_MONITOR_LOCATION();
		static QAndroidJniObject OPSTR_PICTURE_IN_PICTURE();
		static QAndroidJniObject OPSTR_PROCESS_OUTGOING_CALLS();
		static QAndroidJniObject OPSTR_READ_CALENDAR();
		static QAndroidJniObject OPSTR_READ_CALL_LOG();
		static QAndroidJniObject OPSTR_READ_CELL_BROADCASTS();
		static QAndroidJniObject OPSTR_READ_CONTACTS();
		static QAndroidJniObject OPSTR_READ_EXTERNAL_STORAGE();
		static QAndroidJniObject OPSTR_READ_PHONE_NUMBERS();
		static QAndroidJniObject OPSTR_READ_PHONE_STATE();
		static QAndroidJniObject OPSTR_READ_SMS();
		static QAndroidJniObject OPSTR_RECEIVE_MMS();
		static QAndroidJniObject OPSTR_RECEIVE_SMS();
		static QAndroidJniObject OPSTR_RECEIVE_WAP_PUSH();
		static QAndroidJniObject OPSTR_RECORD_AUDIO();
		static QAndroidJniObject OPSTR_SEND_SMS();
		static QAndroidJniObject OPSTR_SYSTEM_ALERT_WINDOW();
		static QAndroidJniObject OPSTR_USE_FINGERPRINT();
		static QAndroidJniObject OPSTR_USE_SIP();
		static QAndroidJniObject OPSTR_WRITE_CALENDAR();
		static QAndroidJniObject OPSTR_WRITE_CALL_LOG();
		static QAndroidJniObject OPSTR_WRITE_CONTACTS();
		static QAndroidJniObject OPSTR_WRITE_EXTERNAL_STORAGE();
		static QAndroidJniObject OPSTR_WRITE_SETTINGS();
		static jint WATCH_FOREGROUND_CHANGES();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject permissionToOp(jstring arg0);
		void startWatchingMode(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		void startWatchingMode(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2);
		void stopWatchingMode(__jni_impl::__JniBaseClass arg0);
		jint unsafeCheckOp(jstring arg0, jint arg1, jstring arg2);
		jint checkOp(jstring arg0, jint arg1, jstring arg2);
		jint unsafeCheckOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint checkOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint unsafeCheckOpRaw(jstring arg0, jint arg1, jstring arg2);
		jint unsafeCheckOpRawNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint noteOp(jstring arg0, jint arg1, jstring arg2);
		jint noteOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		jint noteProxyOp(jstring arg0, jstring arg1);
		jint noteProxyOpNoThrow(jstring arg0, jstring arg1, jint arg2);
		jint noteProxyOpNoThrow(jstring arg0, jstring arg1);
		jint startOp(jstring arg0, jint arg1, jstring arg2);
		jint startOpNoThrow(jstring arg0, jint arg1, jstring arg2);
		void finishOp(jstring arg0, jint arg1, jstring arg2);
		void checkPackage(jint arg0, jstring arg1);
	};
} // namespace __jni_impl::android::app


namespace __jni_impl::android::app
{
	// Fields
	jint AppOpsManager::MODE_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ALLOWED");
	}
	jint AppOpsManager::MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_DEFAULT");
	}
	jint AppOpsManager::MODE_ERRORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ERRORED");
	}
	jint AppOpsManager::MODE_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_FOREGROUND");
	}
	jint AppOpsManager::MODE_IGNORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_IGNORED");
	}
	QAndroidJniObject AppOpsManager::OPSTR_ADD_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ADD_VOICEMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_ANSWER_PHONE_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ANSWER_PHONE_CALLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_BODY_SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_BODY_SENSORS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CALL_PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CAMERA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_COARSE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_COARSE_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_FINE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_FINE_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_GET_USAGE_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_GET_USAGE_STATS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_MOCK_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MOCK_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_MONITOR_HIGH_POWER_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_HIGH_POWER_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_MONITOR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_PICTURE_IN_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PICTURE_IN_PICTURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_PROCESS_OUTGOING_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALENDAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALL_LOG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_CELL_BROADCASTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CELL_BROADCASTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CONTACTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_PHONE_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_NUMBERS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_PHONE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_READ_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_RECEIVE_MMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_MMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_RECEIVE_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_RECEIVE_WAP_PUSH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_WAP_PUSH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_RECORD_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECORD_AUDIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SEND_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_SYSTEM_ALERT_WINDOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_USE_FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_FINGERPRINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_USE_SIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_SIP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_WRITE_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALENDAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_WRITE_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALL_LOG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_WRITE_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CONTACTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_WRITE_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AppOpsManager::OPSTR_WRITE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_SETTINGS",
			"Ljava/lang/String;");
	}
	jint AppOpsManager::WATCH_FOREGROUND_CHANGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AppOpsManager",
			"WATCH_FOREGROUND_CHANGES");
	}
	
	// Constructors
	void AppOpsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.AppOpsManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AppOpsManager::permissionToOp(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.AppOpsManager",
			"permissionToOp",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void AppOpsManager::startWatchingMode(jstring arg0, jstring arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void AppOpsManager::startWatchingMode(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void AppOpsManager::stopWatchingMode(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"stopWatchingMode",
			"(Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0.__jniObject().object());
	}
	jint AppOpsManager::unsafeCheckOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::checkOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"checkOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::unsafeCheckOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::checkOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"checkOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::unsafeCheckOpRaw(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOpRaw",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::unsafeCheckOpRawNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"unsafeCheckOpRawNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::noteOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"noteOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::noteOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"noteOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::noteProxyOp(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"noteProxyOp",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1);
	}
	jint AppOpsManager::noteProxyOpNoThrow(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::noteProxyOpNoThrow(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1);
	}
	jint AppOpsManager::startOp(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"startOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	jint AppOpsManager::startOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"startOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2);
	}
	void AppOpsManager::finishOp(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"finishOp",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void AppOpsManager::checkPackage(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"checkPackage",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class AppOpsManager : public __jni_impl::android::app::AppOpsManager
	{
	public:
		AppOpsManager(QAndroidJniObject obj) { __thiz = obj; }
		AppOpsManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_APPOPSMANAGER

