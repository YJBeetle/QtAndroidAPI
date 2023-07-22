#pragma once

#include "./Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../../JString.hpp"
#include "./RestrictionsManager.def.hpp"

namespace android::content
{
	// Fields
	inline JString RestrictionsManager::ACTION_PERMISSION_RESPONSE_RECEIVED()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_PERMISSION_RESPONSE_RECEIVED",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::ACTION_REQUEST_LOCAL_APPROVAL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_REQUEST_LOCAL_APPROVAL",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::ACTION_REQUEST_PERMISSION()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_REQUEST_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::EXTRA_REQUEST_BUNDLE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::EXTRA_REQUEST_ID()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::EXTRA_REQUEST_TYPE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::EXTRA_RESPONSE_BUNDLE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_RESPONSE_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::META_DATA_APP_RESTRICTIONS()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"META_DATA_APP_RESTRICTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_APPROVE_LABEL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_APPROVE_LABEL",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_DATA()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_DENY_LABEL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_DENY_LABEL",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_ICON()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_ICON",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_ID()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_MESSAGE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_NEW_REQUEST()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_NEW_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_KEY_TITLE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::REQUEST_TYPE_APPROVAL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_TYPE_APPROVAL",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::RESPONSE_KEY_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::RESPONSE_KEY_MESSAGE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::RESPONSE_KEY_RESPONSE_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_RESPONSE_TIMESTAMP",
			"Ljava/lang/String;"
		);
	}
	inline JString RestrictionsManager::RESPONSE_KEY_RESULT()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline jint RestrictionsManager::RESULT_APPROVED()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_APPROVED"
		);
	}
	inline jint RestrictionsManager::RESULT_DENIED()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_DENIED"
		);
	}
	inline jint RestrictionsManager::RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR"
		);
	}
	inline jint RestrictionsManager::RESULT_ERROR_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_BAD_REQUEST"
		);
	}
	inline jint RestrictionsManager::RESULT_ERROR_INTERNAL()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_INTERNAL"
		);
	}
	inline jint RestrictionsManager::RESULT_ERROR_NETWORK()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_NETWORK"
		);
	}
	inline jint RestrictionsManager::RESULT_NO_RESPONSE()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_NO_RESPONSE"
		);
	}
	inline jint RestrictionsManager::RESULT_UNKNOWN_REQUEST()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_UNKNOWN_REQUEST"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::Bundle RestrictionsManager::convertRestrictionsToBundle(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionsManager",
			"convertRestrictionsToBundle",
			"(Ljava/util/List;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline android::content::Intent RestrictionsManager::createLocalApprovalIntent() const
	{
		return callObjectMethod(
			"createLocalApprovalIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline android::os::Bundle RestrictionsManager::getApplicationRestrictions() const
	{
		return callObjectMethod(
			"getApplicationRestrictions",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject RestrictionsManager::getManifestRestrictions(JString arg0) const
	{
		return callObjectMethod(
			"getManifestRestrictions",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0.object<jstring>()
		);
	}
	inline jboolean RestrictionsManager::hasRestrictionsProvider() const
	{
		return callMethod<jboolean>(
			"hasRestrictionsProvider",
			"()Z"
		);
	}
	inline void RestrictionsManager::notifyPermissionResponse(JString arg0, android::os::PersistableBundle arg1) const
	{
		callMethod<void>(
			"notifyPermissionResponse",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void RestrictionsManager::requestPermission(JString arg0, JString arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"requestPermission",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
