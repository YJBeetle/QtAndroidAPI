#pragma once

#include "../../content/Intent.def.hpp"
#include "../../../JString.hpp"
#include "./RoleManager.def.hpp"

namespace android::app::role
{
	// Fields
	inline JString RoleManager::ROLE_ASSISTANT()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_ASSISTANT",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_BROWSER()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_BROWSER",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_CALL_REDIRECTION()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_REDIRECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_CALL_SCREENING()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_CALL_SCREENING",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_DIALER()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_DIALER",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_EMERGENCY()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_EMERGENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_HOME()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_HOME",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_NOTES()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_NOTES",
			"Ljava/lang/String;"
		);
	}
	inline JString RoleManager::ROLE_SMS()
	{
		return getStaticObjectField(
			"android.app.role.RoleManager",
			"ROLE_SMS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::Intent RoleManager::createRequestRoleIntent(JString arg0) const
	{
		return callObjectMethod(
			"createRequestRoleIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	inline jboolean RoleManager::isRoleAvailable(JString arg0) const
	{
		return callMethod<jboolean>(
			"isRoleAvailable",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean RoleManager::isRoleHeld(JString arg0) const
	{
		return callMethod<jboolean>(
			"isRoleHeld",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::role

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::role;
#endif
