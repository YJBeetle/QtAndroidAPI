#include "../../../JIntArray.hpp"
#include "../Intent.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_SessionInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageInstaller_SessionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInstaller_SessionInfo::INVALID_ID()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"INVALID_ID"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_ACTIVATION_FAILED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_ACTIVATION_FAILED"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_CONFLICT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_CONFLICT"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_NO_ERROR"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_UNKNOWN"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_VERIFICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_VERIFICATION_FAILED"
		);
	}
	
	// QAndroidJniObject forward
	PackageInstaller_SessionInfo::PackageInstaller_SessionInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent PackageInstaller_SessionInfo::createDetailsIntent()
	{
		return callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint PackageInstaller_SessionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Bitmap PackageInstaller_SessionInfo::getAppIcon()
	{
		return callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	JString PackageInstaller_SessionInfo::getAppLabel()
	{
		return callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString PackageInstaller_SessionInfo::getAppPackageName()
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		);
	}
	JIntArray PackageInstaller_SessionInfo::getChildSessionIds()
	{
		return callObjectMethod(
			"getChildSessionIds",
			"()[I"
		);
	}
	jlong PackageInstaller_SessionInfo::getCreatedMillis()
	{
		return callMethod<jlong>(
			"getCreatedMillis",
			"()J"
		);
	}
	jint PackageInstaller_SessionInfo::getInstallLocation()
	{
		return callMethod<jint>(
			"getInstallLocation",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getInstallReason()
	{
		return callMethod<jint>(
			"getInstallReason",
			"()I"
		);
	}
	JString PackageInstaller_SessionInfo::getInstallerAttributionTag()
	{
		return callObjectMethod(
			"getInstallerAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	JString PackageInstaller_SessionInfo::getInstallerPackageName()
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint PackageInstaller_SessionInfo::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getOriginatingUid()
	{
		return callMethod<jint>(
			"getOriginatingUid",
			"()I"
		);
	}
	android::net::Uri PackageInstaller_SessionInfo::getOriginatingUri()
	{
		return callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;"
		);
	}
	jint PackageInstaller_SessionInfo::getParentSessionId()
	{
		return callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	jfloat PackageInstaller_SessionInfo::getProgress()
	{
		return callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	android::net::Uri PackageInstaller_SessionInfo::getReferrerUri()
	{
		return callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;"
		);
	}
	jint PackageInstaller_SessionInfo::getRequireUserAction()
	{
		return callMethod<jint>(
			"getRequireUserAction",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getSessionId()
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	jlong PackageInstaller_SessionInfo::getSize()
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jint PackageInstaller_SessionInfo::getStagedSessionErrorCode()
	{
		return callMethod<jint>(
			"getStagedSessionErrorCode",
			"()I"
		);
	}
	JString PackageInstaller_SessionInfo::getStagedSessionErrorMessage()
	{
		return callObjectMethod(
			"getStagedSessionErrorMessage",
			"()Ljava/lang/String;"
		);
	}
	jlong PackageInstaller_SessionInfo::getUpdatedMillis()
	{
		return callMethod<jlong>(
			"getUpdatedMillis",
			"()J"
		);
	}
	android::os::UserHandle PackageInstaller_SessionInfo::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	jboolean PackageInstaller_SessionInfo::hasParentSessionId()
	{
		return callMethod<jboolean>(
			"hasParentSessionId",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isActive()
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isCommitted()
	{
		return callMethod<jboolean>(
			"isCommitted",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isMultiPackage()
	{
		return callMethod<jboolean>(
			"isMultiPackage",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isSealed()
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStaged()
	{
		return callMethod<jboolean>(
			"isStaged",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionActive()
	{
		return callMethod<jboolean>(
			"isStagedSessionActive",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionApplied()
	{
		return callMethod<jboolean>(
			"isStagedSessionApplied",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionFailed()
	{
		return callMethod<jboolean>(
			"isStagedSessionFailed",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionReady()
	{
		return callMethod<jboolean>(
			"isStagedSessionReady",
			"()Z"
		);
	}
	void PackageInstaller_SessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

