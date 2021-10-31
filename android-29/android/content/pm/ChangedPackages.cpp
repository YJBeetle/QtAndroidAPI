#include "../../os/Parcel.hpp"
#include "./ChangedPackages.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject ChangedPackages::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ChangedPackages",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ChangedPackages::ChangedPackages(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ChangedPackages::ChangedPackages(jint arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.content.pm.ChangedPackages",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint ChangedPackages::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ChangedPackages::getPackageNames()
	{
		return callObjectMethod(
			"getPackageNames",
			"()Ljava/util/List;"
		);
	}
	jint ChangedPackages::getSequenceNumber()
	{
		return callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	void ChangedPackages::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

