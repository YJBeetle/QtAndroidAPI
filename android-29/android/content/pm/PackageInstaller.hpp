#pragma once

#include "../IntentSender.def.hpp"
#include "./PackageInstaller_Session.def.hpp"
#include "./PackageInstaller_SessionCallback.def.hpp"
#include "./PackageInstaller_SessionInfo.def.hpp"
#include "./PackageInstaller_SessionParams.def.hpp"
#include "./VersionedPackage.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JString PackageInstaller::ACTION_SESSION_COMMITTED()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_COMMITTED",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::ACTION_SESSION_DETAILS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_DETAILS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::ACTION_SESSION_UPDATED()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_UPDATED",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_OTHER_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_OTHER_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_SESSION()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_SESSION_ID()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_STATUS()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_STATUS_MESSAGE()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString PackageInstaller::EXTRA_STORAGE_PATH()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STORAGE_PATH",
			"Ljava/lang/String;"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE_ABORTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_ABORTED"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE_BLOCKED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_BLOCKED"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE_CONFLICT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_CONFLICT"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE_INCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INCOMPATIBLE"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE_INVALID()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INVALID"
		);
	}
	inline jint PackageInstaller::STATUS_FAILURE_STORAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_STORAGE"
		);
	}
	inline jint PackageInstaller::STATUS_PENDING_USER_ACTION()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_PENDING_USER_ACTION"
		);
	}
	inline jint PackageInstaller::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline void PackageInstaller::abandonSession(jint arg0) const
	{
		callMethod<void>(
			"abandonSession",
			"(I)V",
			arg0
		);
	}
	inline jint PackageInstaller::createSession(android::content::pm::PackageInstaller_SessionParams arg0) const
	{
		return callMethod<jint>(
			"createSession",
			"(Landroid/content/pm/PackageInstaller$SessionParams;)I",
			arg0.object()
		);
	}
	inline android::content::pm::PackageInstaller_SessionInfo PackageInstaller::getActiveStagedSession() const
	{
		return callObjectMethod(
			"getActiveStagedSession",
			"()Landroid/content/pm/PackageInstaller$SessionInfo;"
		);
	}
	inline JObject PackageInstaller::getAllSessions() const
	{
		return callObjectMethod(
			"getAllSessions",
			"()Ljava/util/List;"
		);
	}
	inline JObject PackageInstaller::getMySessions() const
	{
		return callObjectMethod(
			"getMySessions",
			"()Ljava/util/List;"
		);
	}
	inline android::content::pm::PackageInstaller_SessionInfo PackageInstaller::getSessionInfo(jint arg0) const
	{
		return callObjectMethod(
			"getSessionInfo",
			"(I)Landroid/content/pm/PackageInstaller$SessionInfo;",
			arg0
		);
	}
	inline JObject PackageInstaller::getStagedSessions() const
	{
		return callObjectMethod(
			"getStagedSessions",
			"()Ljava/util/List;"
		);
	}
	inline void PackageInstaller::installExistingPackage(JString arg0, jint arg1, android::content::IntentSender arg2) const
	{
		callMethod<void>(
			"installExistingPackage",
			"(Ljava/lang/String;ILandroid/content/IntentSender;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline android::content::pm::PackageInstaller_Session PackageInstaller::openSession(jint arg0) const
	{
		return callObjectMethod(
			"openSession",
			"(I)Landroid/content/pm/PackageInstaller$Session;",
			arg0
		);
	}
	inline void PackageInstaller::registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0) const
	{
		callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.object()
		);
	}
	inline void PackageInstaller::registerSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void PackageInstaller::uninstall(android::content::pm::VersionedPackage arg0, android::content::IntentSender arg1) const
	{
		callMethod<void>(
			"uninstall",
			"(Landroid/content/pm/VersionedPackage;Landroid/content/IntentSender;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void PackageInstaller::uninstall(JString arg0, android::content::IntentSender arg1) const
	{
		callMethod<void>(
			"uninstall",
			"(Ljava/lang/String;Landroid/content/IntentSender;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void PackageInstaller::unregisterSessionCallback(android::content::pm::PackageInstaller_SessionCallback arg0) const
	{
		callMethod<void>(
			"unregisterSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.object()
		);
	}
	inline void PackageInstaller::updateSessionAppIcon(jint arg0, android::graphics::Bitmap arg1) const
	{
		callMethod<void>(
			"updateSessionAppIcon",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.object()
		);
	}
	inline void PackageInstaller::updateSessionAppLabel(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"updateSessionAppLabel",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
