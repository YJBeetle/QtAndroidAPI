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
	
	// Constructors
	
	// Methods
	jint InstallSourceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString InstallSourceInfo::getInitiatingPackageName() const
	{
		return callObjectMethod(
			"getInitiatingPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::SigningInfo InstallSourceInfo::getInitiatingPackageSigningInfo() const
	{
		return callObjectMethod(
			"getInitiatingPackageSigningInfo",
			"()Landroid/content/pm/SigningInfo;"
		);
	}
	JString InstallSourceInfo::getInstallingPackageName() const
	{
		return callObjectMethod(
			"getInstallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString InstallSourceInfo::getOriginatingPackageName() const
	{
		return callObjectMethod(
			"getOriginatingPackageName",
			"()Ljava/lang/String;"
		);
	}
	void InstallSourceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

