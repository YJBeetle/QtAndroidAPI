#include "./Intent.hpp"
#include "../os/Bundle.hpp"
#include "../os/PersistableBundle.hpp"
#include "./RestrictionsManager.hpp"

namespace android::content
{
	// Fields
	jstring RestrictionsManager::ACTION_PERMISSION_RESPONSE_RECEIVED()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_PERMISSION_RESPONSE_RECEIVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::ACTION_REQUEST_LOCAL_APPROVAL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_REQUEST_LOCAL_APPROVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::ACTION_REQUEST_PERMISSION()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_REQUEST_PERMISSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::EXTRA_REQUEST_BUNDLE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::EXTRA_REQUEST_ID()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::EXTRA_REQUEST_TYPE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::EXTRA_RESPONSE_BUNDLE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_RESPONSE_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::META_DATA_APP_RESTRICTIONS()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"META_DATA_APP_RESTRICTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_APPROVE_LABEL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_APPROVE_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_DATA()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_DENY_LABEL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_DENY_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_ICON()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_ID()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_MESSAGE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_NEW_REQUEST()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_NEW_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_KEY_TITLE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::REQUEST_TYPE_APPROVAL()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_TYPE_APPROVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::RESPONSE_KEY_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_ERROR_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::RESPONSE_KEY_MESSAGE()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::RESPONSE_KEY_RESPONSE_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_RESPONSE_TIMESTAMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RestrictionsManager::RESPONSE_KEY_RESULT()
	{
		return getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint RestrictionsManager::RESULT_APPROVED()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_APPROVED"
		);
	}
	jint RestrictionsManager::RESULT_DENIED()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_DENIED"
		);
	}
	jint RestrictionsManager::RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR"
		);
	}
	jint RestrictionsManager::RESULT_ERROR_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_BAD_REQUEST"
		);
	}
	jint RestrictionsManager::RESULT_ERROR_INTERNAL()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_INTERNAL"
		);
	}
	jint RestrictionsManager::RESULT_ERROR_NETWORK()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_NETWORK"
		);
	}
	jint RestrictionsManager::RESULT_NO_RESPONSE()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_NO_RESPONSE"
		);
	}
	jint RestrictionsManager::RESULT_UNKNOWN_REQUEST()
	{
		return getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_UNKNOWN_REQUEST"
		);
	}
	
	// QAndroidJniObject forward
	RestrictionsManager::RestrictionsManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::os::Bundle RestrictionsManager::convertRestrictionsToBundle(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"android.content.RestrictionsManager",
			"convertRestrictionsToBundle",
			"(Ljava/util/List;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	android::content::Intent RestrictionsManager::createLocalApprovalIntent()
	{
		return callObjectMethod(
			"createLocalApprovalIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::os::Bundle RestrictionsManager::getApplicationRestrictions()
	{
		return callObjectMethod(
			"getApplicationRestrictions",
			"()Landroid/os/Bundle;"
		);
	}
	__JniBaseClass RestrictionsManager::getManifestRestrictions(jstring arg0)
	{
		return callObjectMethod(
			"getManifestRestrictions",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	jboolean RestrictionsManager::hasRestrictionsProvider()
	{
		return callMethod<jboolean>(
			"hasRestrictionsProvider",
			"()Z"
		);
	}
	void RestrictionsManager::notifyPermissionResponse(jstring arg0, android::os::PersistableBundle arg1)
	{
		callMethod<void>(
			"notifyPermissionResponse",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.object()
		);
	}
	void RestrictionsManager::requestPermission(jstring arg0, jstring arg1, android::os::PersistableBundle arg2)
	{
		callMethod<void>(
			"requestPermission",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::content
