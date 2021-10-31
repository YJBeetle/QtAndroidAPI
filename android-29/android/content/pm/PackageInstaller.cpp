#include "../IntentSender.hpp"
#include "./PackageInstaller_Session.hpp"
#include "./PackageInstaller_SessionCallback.hpp"
#include "./PackageInstaller_SessionInfo.hpp"
#include "./PackageInstaller_SessionParams.hpp"
#include "./VersionedPackage.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../os/Handler.hpp"
#include "./PackageInstaller.hpp"

namespace android::content::pm
{
	// Fields
	jstring PackageInstaller::ACTION_SESSION_COMMITTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_COMMITTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::ACTION_SESSION_DETAILS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_DETAILS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::ACTION_SESSION_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_OTHER_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_OTHER_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_SESSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_STATUS_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_STORAGE_PATH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STORAGE_PATH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInstaller::STATUS_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_ABORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_ABORTED"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_BLOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_BLOCKED"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_CONFLICT"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_INCOMPATIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INCOMPATIBLE"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INVALID"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_STORAGE"
		);
	}
	jint PackageInstaller::STATUS_PENDING_USER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_PENDING_USER_ACTION"
		);
	}
	jint PackageInstaller::STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_SUCCESS"
		);
	}
	
	PackageInstaller::PackageInstaller(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PackageInstaller::abandonSession(jint arg0)
	{
		__thiz.callMethod<void>(
			"abandonSession",
			"(I)V",
			arg0
		);
	}
	jint PackageInstaller::createSession(android::content::pm::PackageInstaller_SessionParams arg0)
	{
		return __thiz.callMethod<jint>(
			"createSession",
			"(Landroid/content/pm/PackageInstaller$SessionParams;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageInstaller::getActiveStagedSession()
	{
		return __thiz.callObjectMethod(
			"getActiveStagedSession",
			"()Landroid/content/pm/PackageInstaller$SessionInfo;"
		);
	}
	QAndroidJniObject PackageInstaller::getAllSessions()
	{
		return __thiz.callObjectMethod(
			"getAllSessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PackageInstaller::getMySessions()
	{
		return __thiz.callObjectMethod(
			"getMySessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PackageInstaller::getSessionInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSessionInfo",
			"(I)Landroid/content/pm/PackageInstaller$SessionInfo;",
			arg0
		);
	}
	QAndroidJniObject PackageInstaller::getStagedSessions()
	{
		return __thiz.callObjectMethod(
			"getStagedSessions",
			"()Ljava/util/List;"
		);
	}
	void PackageInstaller::installExistingPackage(jstring arg0, jint arg1, android::content::IntentSender arg2)
	{
		__thiz.callMethod<void>(
			"installExistingPackage",
			"(Ljava/lang/String;ILandroid/content/IntentSender;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PackageInstaller::openSession(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openSession",
			"(I)Landroid/content/pm/PackageInstaller$Session;",
			arg0
		);
	}
	void PackageInstaller::registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller::registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::uninstall(android::content::pm::VersionedPackage arg0, android::content::IntentSender arg1)
	{
		__thiz.callMethod<void>(
			"uninstall",
			"(Landroid/content/pm/VersionedPackage;Landroid/content/IntentSender;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::uninstall(jstring arg0, android::content::IntentSender arg1)
	{
		__thiz.callMethod<void>(
			"uninstall",
			"(Ljava/lang/String;Landroid/content/IntentSender;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::unregisterSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller::updateSessionAppIcon(jint arg0, android::graphics::Bitmap arg1)
	{
		__thiz.callMethod<void>(
			"updateSessionAppIcon",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::updateSessionAppLabel(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"updateSessionAppLabel",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

