#include "../../content/Intent.hpp"
#include "../../../JString.hpp"
#include "./RoleManager.hpp"

namespace android::app::role
{
	// Fields
	JString RoleManager::ROLE_ASSISTANT()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_ASSISTANT",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_BROWSER()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_BROWSER",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_CALL_REDIRECTION()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_REDIRECTION",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_CALL_SCREENING()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_SCREENING",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_DIALER()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_DIALER",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_EMERGENCY()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_EMERGENCY",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_HOME()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_HOME",
			"Ljava/lang/String;"
		);
	}
	JString RoleManager::ROLE_SMS()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_SMS",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	RoleManager::RoleManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent RoleManager::createRequestRoleIntent(JString arg0)
	{
		return callObjectMethod(
			"createRequestRoleIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	jboolean RoleManager::isRoleAvailable(JString arg0)
	{
		return callMethod<jboolean>(
			"isRoleAvailable",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean RoleManager::isRoleHeld(JString arg0)
	{
		return callMethod<jboolean>(
			"isRoleHeld",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::role

