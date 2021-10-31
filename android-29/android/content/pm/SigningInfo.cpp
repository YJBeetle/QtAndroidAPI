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
	
	// QAndroidJniObject forward
	SigningInfo::SigningInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SigningInfo::SigningInfo()
		: __JniBaseClass(
			"android.content.pm.SigningInfo",
			"()V"
		) {}
	SigningInfo::SigningInfo(android::content::pm::SigningInfo &arg0)
		: __JniBaseClass(
			"android.content.pm.SigningInfo",
			"(Landroid/content/pm/SigningInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint SigningInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jarray SigningInfo::getApkContentsSigners()
	{
		return callObjectMethod(
			"getApkContentsSigners",
			"()[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	jarray SigningInfo::getSigningCertificateHistory()
	{
		return callObjectMethod(
			"getSigningCertificateHistory",
			"()[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	jboolean SigningInfo::hasMultipleSigners()
	{
		return callMethod<jboolean>(
			"hasMultipleSigners",
			"()Z"
		);
	}
	jboolean SigningInfo::hasPastSigningCertificates()
	{
		return callMethod<jboolean>(
			"hasPastSigningCertificates",
			"()Z"
		);
	}
	void SigningInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

