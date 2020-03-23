#pragma once

#ifndef ANDROID_APP_ROLE_ROLEMANAGER
#define ANDROID_APP_ROLE_ROLEMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::app::role
{
	class RoleManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ROLE_ASSISTANT();
		static QAndroidJniObject ROLE_BROWSER();
		static QAndroidJniObject ROLE_CALL_REDIRECTION();
		static QAndroidJniObject ROLE_CALL_SCREENING();
		static QAndroidJniObject ROLE_DIALER();
		static QAndroidJniObject ROLE_EMERGENCY();
		static QAndroidJniObject ROLE_HOME();
		static QAndroidJniObject ROLE_SMS();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createRequestRoleIntent(jstring arg0);
		jboolean isRoleAvailable(jstring arg0);
		jboolean isRoleHeld(jstring arg0);
	};
} // namespace __jni_impl::android::app::role

#include "../../content/Intent.hpp"

namespace __jni_impl::android::app::role
{
	// Fields
	QAndroidJniObject RoleManager::ROLE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_ASSISTANT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_BROWSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_BROWSER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_CALL_REDIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_REDIRECTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_CALL_SCREENING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_SCREENING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_DIALER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_DIALER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_EMERGENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_EMERGENCY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_HOME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RoleManager::ROLE_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_SMS",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void RoleManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.role.RoleManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RoleManager::createRequestRoleIntent(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createRequestRoleIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0);
	}
	jboolean RoleManager::isRoleAvailable(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRoleAvailable",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean RoleManager::isRoleHeld(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRoleHeld",
			"(Ljava/lang/String;)Z",
			arg0);
	}
} // namespace __jni_impl::android::app::role

namespace android::app::role
{
	class RoleManager : public __jni_impl::android::app::role::RoleManager
	{
	public:
		RoleManager(QAndroidJniObject obj) { __thiz = obj; }
		RoleManager()
		{
			__constructor();
		}
	};
} // namespace android::app::role

#endif // ANDROID_APP_ROLE_ROLEMANAGER

