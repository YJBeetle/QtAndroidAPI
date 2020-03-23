#pragma once

#ifndef ANDROID_APP_UIMODEMANAGER
#define ANDROID_APP_UIMODEMANAGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::app
{
	class UiModeManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_ENTER_CAR_MODE();
		static QAndroidJniObject ACTION_ENTER_DESK_MODE();
		static QAndroidJniObject ACTION_EXIT_CAR_MODE();
		static QAndroidJniObject ACTION_EXIT_DESK_MODE();
		static jint DISABLE_CAR_MODE_GO_HOME();
		static jint ENABLE_CAR_MODE_ALLOW_SLEEP();
		static jint ENABLE_CAR_MODE_GO_CAR_HOME();
		static jint MODE_NIGHT_AUTO();
		static jint MODE_NIGHT_NO();
		static jint MODE_NIGHT_YES();
		
		// Constructors
		void __constructor();
		
		// Methods
		void enableCarMode(jint arg0);
		void disableCarMode(jint arg0);
		jint getCurrentModeType();
		void setNightMode(jint arg0);
		jint getNightMode();
	};
} // namespace __jni_impl::android::app


namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject UiModeManager::ACTION_ENTER_CAR_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_ENTER_CAR_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject UiModeManager::ACTION_ENTER_DESK_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_ENTER_DESK_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject UiModeManager::ACTION_EXIT_CAR_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_EXIT_CAR_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject UiModeManager::ACTION_EXIT_DESK_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.UiModeManager",
			"ACTION_EXIT_DESK_MODE",
			"Ljava/lang/String;");
	}
	jint UiModeManager::DISABLE_CAR_MODE_GO_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiModeManager",
			"DISABLE_CAR_MODE_GO_HOME");
	}
	jint UiModeManager::ENABLE_CAR_MODE_ALLOW_SLEEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiModeManager",
			"ENABLE_CAR_MODE_ALLOW_SLEEP");
	}
	jint UiModeManager::ENABLE_CAR_MODE_GO_CAR_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiModeManager",
			"ENABLE_CAR_MODE_GO_CAR_HOME");
	}
	jint UiModeManager::MODE_NIGHT_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_AUTO");
	}
	jint UiModeManager::MODE_NIGHT_NO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_NO");
	}
	jint UiModeManager::MODE_NIGHT_YES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.UiModeManager",
			"MODE_NIGHT_YES");
	}
	
	// Constructors
	void UiModeManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.UiModeManager",
			"(V)V");
	}
	
	// Methods
	void UiModeManager::enableCarMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"enableCarMode",
			"(I)V",
			arg0);
	}
	void UiModeManager::disableCarMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"disableCarMode",
			"(I)V",
			arg0);
	}
	jint UiModeManager::getCurrentModeType()
	{
		return __thiz.callMethod<jint>(
			"getCurrentModeType",
			"()I");
	}
	void UiModeManager::setNightMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNightMode",
			"(I)V",
			arg0);
	}
	jint UiModeManager::getNightMode()
	{
		return __thiz.callMethod<jint>(
			"getNightMode",
			"()I");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class UiModeManager : public __jni_impl::android::app::UiModeManager
	{
	public:
		UiModeManager(QAndroidJniObject obj) { __thiz = obj; }
		UiModeManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_UIMODEMANAGER

