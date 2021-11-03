#include "../../os/Parcel.hpp"
#include "./ChangedPackages.hpp"

namespace android::content::pm
{
	// Fields
	JObject ChangedPackages::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ChangedPackages",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ChangedPackages::ChangedPackages(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ChangedPackages::ChangedPackages(jint arg0, JObject arg1)
		: JObject(
			"android.content.pm.ChangedPackages",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint ChangedPackages::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject ChangedPackages::getPackageNames() const
	{
		return callObjectMethod(
			"getPackageNames",
			"()Ljava/util/List;"
		);
	}
	jint ChangedPackages::getSequenceNumber() const
	{
		return callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	void ChangedPackages::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

