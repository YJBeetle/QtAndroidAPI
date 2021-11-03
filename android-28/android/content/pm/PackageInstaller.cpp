#include "../IntentSender.hpp"
#include "./PackageInstaller_Session.hpp"
#include "./PackageInstaller_SessionCallback.hpp"
#include "./PackageInstaller_SessionInfo.hpp"
#include "./PackageInstaller_SessionParams.hpp"
#include "./VersionedPackage.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller.hpp"

namespace android::content::pm
{
	// Fields
	JString PackageInstaller::ACTION_SESSION_COMMITTED()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_COMMITTED",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::ACTION_SESSION_DETAILS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_DETAILS",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_OTHER_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_OTHER_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_SESSION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_SESSION_ID()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION_ID",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_STATUS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_STATUS_MESSAGE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	JString PackageInstaller::EXTRA_STORAGE_PATH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STORAGE_PATH",
			"Ljava/lang/String;"
		);
	}
	jint PackageInstaller::STATUS_FAILURE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_ABORTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_ABORTED"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_BLOCKED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_BLOCKED"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_CONFLICT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_CONFLICT"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_INCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INCOMPATIBLE"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_INVALID()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INVALID"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_STORAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_STORAGE"
		);
	}
	jint PackageInstaller::STATUS_PENDING_USER_ACTION()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_PENDING_USER_ACTION"
		);
	}
	jint PackageInstaller::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	PackageInstaller::PackageInstaller(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PackageInstaller::abandonSession(jint arg0)
	{
		callMethod<void>(
			"abandonSession",
			"(I)V",
			arg0
		);
	}
	jint PackageInstaller::createSession(android::content::pm::PackageInstaller_SessionParams arg0)
	{
		return callMethod<jint>(
			"createSession",
			"(Landroid/content/pm/PackageInstaller$SessionParams;)I",
			arg0.object()
		);
	}
	JObject PackageInstaller::getAllSessions()
	{
		return callObjectMethod(
			"getAllSessions",
			"()Ljava/util/List;"
		);
	}
	JObject PackageInstaller::getMySessions()
	{
		return callObjectMethod(
			"getMySessions",
			"()Ljava/util/List;"
		);
	}
	android::content::pm::PackageInstaller_SessionInfo PackageInstaller::getSessionInfo(jint arg0)
	{
		return callObjectMethod(
			"getSessionInfo",
			"(I)Landroid/content/pm/PackageInstaller$SessionInfo;",
			arg0
		);
	}
	android::content::pm::PackageInstaller_Session PackageInstaller::openSession(jint arg0)
	{
		return callObjectMethod(
			"openSession",
			"(I)Landroid/content/pm/PackageInstaller$Session;",
			arg0
		);
	}
	void PackageInstaller::registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.object()
		);
	}
	void PackageInstaller::registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void PackageInstaller::uninstall(android::content::pm::VersionedPackage arg0, android::content::IntentSender arg1)
	{
		callMethod<void>(
			"uninstall",
			"(Landroid/content/pm/VersionedPackage;Landroid/content/IntentSender;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void PackageInstaller::uninstall(JString arg0, android::content::IntentSender arg1)
	{
		callMethod<void>(
			"uninstall",
			"(Ljava/lang/String;Landroid/content/IntentSender;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void PackageInstaller::unregisterSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		callMethod<void>(
			"unregisterSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.object()
		);
	}
	void PackageInstaller::updateSessionAppIcon(jint arg0, android::graphics::Bitmap arg1)
	{
		callMethod<void>(
			"updateSessionAppIcon",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.object()
		);
	}
	void PackageInstaller::updateSessionAppLabel(jint arg0, JString arg1)
	{
		callMethod<void>(
			"updateSessionAppLabel",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::content::pm

