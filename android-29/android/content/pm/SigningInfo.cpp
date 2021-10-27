#include "../../os/Parcel.hpp"
#include "./SigningInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject SigningInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.SigningInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SigningInfo::SigningInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SigningInfo::SigningInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.SigningInfo",
			"()V"
		);
	}
	SigningInfo::SigningInfo(android::content::pm::SigningInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.SigningInfo",
			"(Landroid/content/pm/SigningInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint SigningInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jarray SigningInfo::getApkContentsSigners()
	{
		return __thiz.callObjectMethod(
			"getApkContentsSigners",
			"()[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	jarray SigningInfo::getSigningCertificateHistory()
	{
		return __thiz.callObjectMethod(
			"getSigningCertificateHistory",
			"()[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	jboolean SigningInfo::hasMultipleSigners()
	{
		return __thiz.callMethod<jboolean>(
			"hasMultipleSigners",
			"()Z"
		);
	}
	jboolean SigningInfo::hasPastSigningCertificates()
	{
		return __thiz.callMethod<jboolean>(
			"hasPastSigningCertificates",
			"()Z"
		);
	}
	void SigningInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

