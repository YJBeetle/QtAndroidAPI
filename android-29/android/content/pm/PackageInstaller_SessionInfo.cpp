#include "../Intent.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/UserHandle.hpp"
#include "./PackageInstaller_SessionInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject PackageInstaller_SessionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInstaller_SessionInfo::INVALID_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"INVALID_ID"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_ACTIVATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_ACTIVATION_FAILED"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_NO_ERROR"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_UNKNOWN"
		);
	}
	jint PackageInstaller_SessionInfo::STAGED_SESSION_VERIFICATION_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionInfo",
			"STAGED_SESSION_VERIFICATION_FAILED"
		);
	}
	
	PackageInstaller_SessionInfo::PackageInstaller_SessionInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PackageInstaller_SessionInfo::createDetailsIntent()
	{
		return __thiz.callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint PackageInstaller_SessionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getAppIcon()
	{
		return __thiz.callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring PackageInstaller_SessionInfo::getAppLabel()
	{
		return __thiz.callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PackageInstaller_SessionInfo::getAppPackageName()
	{
		return __thiz.callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray PackageInstaller_SessionInfo::getChildSessionIds()
	{
		return __thiz.callObjectMethod(
			"getChildSessionIds",
			"()[I"
		).object<jintArray>();
	}
	jint PackageInstaller_SessionInfo::getInstallLocation()
	{
		return __thiz.callMethod<jint>(
			"getInstallLocation",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getInstallReason()
	{
		return __thiz.callMethod<jint>(
			"getInstallReason",
			"()I"
		);
	}
	jstring PackageInstaller_SessionInfo::getInstallerPackageName()
	{
		return __thiz.callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInstaller_SessionInfo::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getOriginatingUid()
	{
		return __thiz.callMethod<jint>(
			"getOriginatingUid",
			"()I"
		);
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getOriginatingUri()
	{
		return __thiz.callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;"
		);
	}
	jint PackageInstaller_SessionInfo::getParentSessionId()
	{
		return __thiz.callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	jfloat PackageInstaller_SessionInfo::getProgress()
	{
		return __thiz.callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getReferrerUri()
	{
		return __thiz.callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;"
		);
	}
	jint PackageInstaller_SessionInfo::getSessionId()
	{
		return __thiz.callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	jlong PackageInstaller_SessionInfo::getSize()
	{
		return __thiz.callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jint PackageInstaller_SessionInfo::getStagedSessionErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getStagedSessionErrorCode",
			"()I"
		);
	}
	jstring PackageInstaller_SessionInfo::getStagedSessionErrorMessage()
	{
		return __thiz.callObjectMethod(
			"getStagedSessionErrorMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong PackageInstaller_SessionInfo::getUpdatedMillis()
	{
		return __thiz.callMethod<jlong>(
			"getUpdatedMillis",
			"()J"
		);
	}
	QAndroidJniObject PackageInstaller_SessionInfo::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	jboolean PackageInstaller_SessionInfo::isActive()
	{
		return __thiz.callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isCommitted()
	{
		return __thiz.callMethod<jboolean>(
			"isCommitted",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isMultiPackage()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiPackage",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isSealed()
	{
		return __thiz.callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStaged()
	{
		return __thiz.callMethod<jboolean>(
			"isStaged",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionApplied()
	{
		return __thiz.callMethod<jboolean>(
			"isStagedSessionApplied",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionFailed()
	{
		return __thiz.callMethod<jboolean>(
			"isStagedSessionFailed",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isStagedSessionReady()
	{
		return __thiz.callMethod<jboolean>(
			"isStagedSessionReady",
			"()Z"
		);
	}
	void PackageInstaller_SessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

