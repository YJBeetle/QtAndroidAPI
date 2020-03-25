#pragma once

#ifndef ANDROID_CONTENT_RESTRICTIONSMANAGER
#define ANDROID_CONTENT_RESTRICTIONSMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::content
{
	class RestrictionsManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_PERMISSION_RESPONSE_RECEIVED();
		static QAndroidJniObject ACTION_REQUEST_LOCAL_APPROVAL();
		static QAndroidJniObject ACTION_REQUEST_PERMISSION();
		static QAndroidJniObject EXTRA_PACKAGE_NAME();
		static QAndroidJniObject EXTRA_REQUEST_BUNDLE();
		static QAndroidJniObject EXTRA_REQUEST_ID();
		static QAndroidJniObject EXTRA_REQUEST_TYPE();
		static QAndroidJniObject EXTRA_RESPONSE_BUNDLE();
		static QAndroidJniObject META_DATA_APP_RESTRICTIONS();
		static QAndroidJniObject REQUEST_KEY_APPROVE_LABEL();
		static QAndroidJniObject REQUEST_KEY_DATA();
		static QAndroidJniObject REQUEST_KEY_DENY_LABEL();
		static QAndroidJniObject REQUEST_KEY_ICON();
		static QAndroidJniObject REQUEST_KEY_ID();
		static QAndroidJniObject REQUEST_KEY_MESSAGE();
		static QAndroidJniObject REQUEST_KEY_NEW_REQUEST();
		static QAndroidJniObject REQUEST_KEY_TITLE();
		static QAndroidJniObject REQUEST_TYPE_APPROVAL();
		static QAndroidJniObject RESPONSE_KEY_ERROR_CODE();
		static QAndroidJniObject RESPONSE_KEY_MESSAGE();
		static QAndroidJniObject RESPONSE_KEY_RESPONSE_TIMESTAMP();
		static QAndroidJniObject RESPONSE_KEY_RESULT();
		static jint RESULT_APPROVED();
		static jint RESULT_DENIED();
		static jint RESULT_ERROR();
		static jint RESULT_ERROR_BAD_REQUEST();
		static jint RESULT_ERROR_INTERNAL();
		static jint RESULT_ERROR_NETWORK();
		static jint RESULT_NO_RESPONSE();
		static jint RESULT_UNKNOWN_REQUEST();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getApplicationRestrictions();
		void requestPermission(jstring arg0, jstring arg1, __jni_impl::android::os::PersistableBundle arg2);
		jboolean hasRestrictionsProvider();
		QAndroidJniObject createLocalApprovalIntent();
		void notifyPermissionResponse(jstring arg0, __jni_impl::android::os::PersistableBundle arg1);
		QAndroidJniObject getManifestRestrictions(jstring arg0);
		static QAndroidJniObject convertRestrictionsToBundle(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::content

#include "../os/Bundle.hpp"
#include "../os/PersistableBundle.hpp"
#include "Intent.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject RestrictionsManager::ACTION_PERMISSION_RESPONSE_RECEIVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_PERMISSION_RESPONSE_RECEIVED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::ACTION_REQUEST_LOCAL_APPROVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_REQUEST_LOCAL_APPROVAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::ACTION_REQUEST_PERMISSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"ACTION_REQUEST_PERMISSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::EXTRA_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::EXTRA_REQUEST_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_BUNDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::EXTRA_REQUEST_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::EXTRA_REQUEST_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_REQUEST_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::EXTRA_RESPONSE_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"EXTRA_RESPONSE_BUNDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::META_DATA_APP_RESTRICTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"META_DATA_APP_RESTRICTIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_APPROVE_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_APPROVE_LABEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_DENY_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_DENY_LABEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_ICON",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_NEW_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_NEW_REQUEST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_KEY_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_KEY_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::REQUEST_TYPE_APPROVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"REQUEST_TYPE_APPROVAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::RESPONSE_KEY_ERROR_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_ERROR_CODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::RESPONSE_KEY_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::RESPONSE_KEY_RESPONSE_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_RESPONSE_TIMESTAMP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RestrictionsManager::RESPONSE_KEY_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.RestrictionsManager",
			"RESPONSE_KEY_RESULT",
			"Ljava/lang/String;");
	}
	jint RestrictionsManager::RESULT_APPROVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_APPROVED");
	}
	jint RestrictionsManager::RESULT_DENIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_DENIED");
	}
	jint RestrictionsManager::RESULT_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR");
	}
	jint RestrictionsManager::RESULT_ERROR_BAD_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_BAD_REQUEST");
	}
	jint RestrictionsManager::RESULT_ERROR_INTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_INTERNAL");
	}
	jint RestrictionsManager::RESULT_ERROR_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_ERROR_NETWORK");
	}
	jint RestrictionsManager::RESULT_NO_RESPONSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_NO_RESPONSE");
	}
	jint RestrictionsManager::RESULT_UNKNOWN_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.RestrictionsManager",
			"RESULT_UNKNOWN_REQUEST");
	}
	
	// Constructors
	void RestrictionsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.RestrictionsManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RestrictionsManager::getApplicationRestrictions()
	{
		return __thiz.callObjectMethod(
			"getApplicationRestrictions",
			"()Landroid/os/Bundle;");
	}
	void RestrictionsManager::requestPermission(jstring arg0, jstring arg1, __jni_impl::android::os::PersistableBundle arg2)
	{
		__thiz.callMethod<void>(
			"requestPermission",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jboolean RestrictionsManager::hasRestrictionsProvider()
	{
		return __thiz.callMethod<jboolean>(
			"hasRestrictionsProvider",
			"()Z");
	}
	QAndroidJniObject RestrictionsManager::createLocalApprovalIntent()
	{
		return __thiz.callObjectMethod(
			"createLocalApprovalIntent",
			"()Landroid/content/Intent;");
	}
	void RestrictionsManager::notifyPermissionResponse(jstring arg0, __jni_impl::android::os::PersistableBundle arg1)
	{
		__thiz.callMethod<void>(
			"notifyPermissionResponse",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject RestrictionsManager::getManifestRestrictions(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getManifestRestrictions",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0);
	}
	QAndroidJniObject RestrictionsManager::convertRestrictionsToBundle(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.RestrictionsManager",
			"convertRestrictionsToBundle",
			"(Ljava/util/List;)Landroid/os/Bundle;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class RestrictionsManager : public __jni_impl::android::content::RestrictionsManager
	{
	public:
		RestrictionsManager(QAndroidJniObject obj) { __thiz = obj; }
		RestrictionsManager()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_RESTRICTIONSMANAGER

