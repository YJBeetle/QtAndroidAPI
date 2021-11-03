#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "./SigningInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject SigningInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.SigningInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SigningInfo::SigningInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SigningInfo::SigningInfo()
		: JObject(
			"android.content.pm.SigningInfo",
			"()V"
		) {}
	SigningInfo::SigningInfo(android::content::pm::SigningInfo &arg0)
		: JObject(
			"android.content.pm.SigningInfo",
			"(Landroid/content/pm/SigningInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint SigningInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JArray SigningInfo::getApkContentsSigners() const
	{
		return callObjectMethod(
			"getApkContentsSigners",
			"()[Landroid/content/pm/Signature;"
		);
	}
	JArray SigningInfo::getSigningCertificateHistory() const
	{
		return callObjectMethod(
			"getSigningCertificateHistory",
			"()[Landroid/content/pm/Signature;"
		);
	}
	jboolean SigningInfo::hasMultipleSigners() const
	{
		return callMethod<jboolean>(
			"hasMultipleSigners",
			"()Z"
		);
	}
	jboolean SigningInfo::hasPastSigningCertificates() const
	{
		return callMethod<jboolean>(
			"hasPastSigningCertificates",
			"()Z"
		);
	}
	void SigningInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

