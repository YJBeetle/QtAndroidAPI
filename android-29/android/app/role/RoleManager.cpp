#include "../../content/Intent.hpp"
#include "./RoleManager.hpp"

namespace android::app::role
{
	// Fields
	jstring RoleManager::ROLE_ASSISTANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_ASSISTANT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_BROWSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_BROWSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_CALL_REDIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_REDIRECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_CALL_SCREENING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_SCREENING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_DIALER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_DIALER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_EMERGENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_EMERGENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RoleManager::ROLE_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	RoleManager::RoleManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent RoleManager::createRequestRoleIntent(jstring arg0)
	{
		return callObjectMethod(
			"createRequestRoleIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	jboolean RoleManager::isRoleAvailable(jstring arg0)
	{
		return callMethod<jboolean>(
			"isRoleAvailable",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean RoleManager::isRoleHeld(jstring arg0)
	{
		return callMethod<jboolean>(
			"isRoleHeld",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace android::app::role

