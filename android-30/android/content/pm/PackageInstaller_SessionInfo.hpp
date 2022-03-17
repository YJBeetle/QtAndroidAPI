#pragma once

#include "../../../JIntArray.hpp"
#include "../Intent.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_SessionInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInstaller_SessionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PackageInstaller_SessionInfo::INVALID_ID()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"INVALID_ID"
		);
	}
	inline jint PackageInstaller_SessionInfo::STAGED_SESSION_ACTIVATION_FAILED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_ACTIVATION_FAILED"
		);
	}
	inline jint PackageInstaller_SessionInfo::STAGED_SESSION_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_NO_ERROR"
		);
	}
	inline jint PackageInstaller_SessionInfo::STAGED_SESSION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_UNKNOWN"
		);
	}
	inline jint PackageInstaller_SessionInfo::STAGED_SESSION_VERIFICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_VERIFICATION_FAILED"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::Intent PackageInstaller_SessionInfo::createDetailsIntent() const
	{
		return callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint PackageInstaller_SessionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::Bitmap PackageInstaller_SessionInfo::getAppIcon() const
	{
		return callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString PackageInstaller_SessionInfo::getAppLabel() const
	{
		return callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString PackageInstaller_SessionInfo::getAppPackageName() const
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JIntArray PackageInstaller_SessionInfo::getChildSessionIds() const
	{
		return callObjectMethod(
			"getChildSessionIds",
			"()[I"
		);
	}
	inline jlong PackageInstaller_SessionInfo::getCreatedMillis() const
	{
		return callMethod<jlong>(
			"getCreatedMillis",
			"()J"
		);
	}
	inline jint PackageInstaller_SessionInfo::getInstallLocation() const
	{
		return callMethod<jint>(
			"getInstallLocation",
			"()I"
		);
	}
	inline jint PackageInstaller_SessionInfo::getInstallReason() const
	{
		return callMethod<jint>(
			"getInstallReason",
			"()I"
		);
	}
	inline JString PackageInstaller_SessionInfo::getInstallerPackageName() const
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PackageInstaller_SessionInfo::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline jint PackageInstaller_SessionInfo::getOriginatingUid() const
	{
		return callMethod<jint>(
			"getOriginatingUid",
			"()I"
		);
	}
	inline android::net::Uri PackageInstaller_SessionInfo::getOriginatingUri() const
	{
		return callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint PackageInstaller_SessionInfo::getParentSessionId() const
	{
		return callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	inline jfloat PackageInstaller_SessionInfo::getProgress() const
	{
		return callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	inline android::net::Uri PackageInstaller_SessionInfo::getReferrerUri() const
	{
		return callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint PackageInstaller_SessionInfo::getSessionId() const
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	inline jlong PackageInstaller_SessionInfo::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	inline jint PackageInstaller_SessionInfo::getStagedSessionErrorCode() const
	{
		return callMethod<jint>(
			"getStagedSessionErrorCode",
			"()I"
		);
	}
	inline JString PackageInstaller_SessionInfo::getStagedSessionErrorMessage() const
	{
		return callObjectMethod(
			"getStagedSessionErrorMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jlong PackageInstaller_SessionInfo::getUpdatedMillis() const
	{
		return callMethod<jlong>(
			"getUpdatedMillis",
			"()J"
		);
	}
	inline android::os::UserHandle PackageInstaller_SessionInfo::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::hasParentSessionId() const
	{
		return callMethod<jboolean>(
			"hasParentSessionId",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isCommitted() const
	{
		return callMethod<jboolean>(
			"isCommitted",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isMultiPackage() const
	{
		return callMethod<jboolean>(
			"isMultiPackage",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isSealed() const
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isStaged() const
	{
		return callMethod<jboolean>(
			"isStaged",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isStagedSessionActive() const
	{
		return callMethod<jboolean>(
			"isStagedSessionActive",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isStagedSessionApplied() const
	{
		return callMethod<jboolean>(
			"isStagedSessionApplied",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isStagedSessionFailed() const
	{
		return callMethod<jboolean>(
			"isStagedSessionFailed",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isStagedSessionReady() const
	{
		return callMethod<jboolean>(
			"isStagedSessionReady",
			"()Z"
		);
	}
	inline void PackageInstaller_SessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

