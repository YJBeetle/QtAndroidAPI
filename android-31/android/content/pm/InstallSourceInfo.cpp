#include "./SigningInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./InstallSourceInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject InstallSourceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.InstallSourceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	InstallSourceInfo::InstallSourceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InstallSourceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString InstallSourceInfo::getInitiatingPackageName()
	{
		return callObjectMethod(
			"getInitiatingPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::SigningInfo InstallSourceInfo::getInitiatingPackageSigningInfo()
	{
		return callObjectMethod(
			"getInitiatingPackageSigningInfo",
			"()Landroid/content/pm/SigningInfo;"
		);
	}
	JString InstallSourceInfo::getInstallingPackageName()
	{
		return callObjectMethod(
			"getInstallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString InstallSourceInfo::getOriginatingPackageName()
	{
		return callObjectMethod(
			"getOriginatingPackageName",
			"()Ljava/lang/String;"
		);
	}
	void InstallSourceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

