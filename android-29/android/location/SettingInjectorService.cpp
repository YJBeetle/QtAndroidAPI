#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "./SettingInjectorService.hpp"

namespace android::location
{
	// Fields
	jstring SettingInjectorService::ACTION_INJECTED_SETTING_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_INJECTED_SETTING_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingInjectorService::ACTION_SERVICE_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ACTION_SERVICE_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingInjectorService::ATTRIBUTES_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"ATTRIBUTES_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingInjectorService::META_DATA_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.SettingInjectorService",
			"META_DATA_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	SettingInjectorService::SettingInjectorService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SettingInjectorService::SettingInjectorService(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.SettingInjectorService",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void SettingInjectorService::refreshSettings(android::content::Context arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.location.SettingInjectorService",
			"refreshSettings",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SettingInjectorService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void SettingInjectorService::onStart(android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint SettingInjectorService::onStartCommand(android::content::Intent arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"onStartCommand",
			"(Landroid/content/Intent;II)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::location

