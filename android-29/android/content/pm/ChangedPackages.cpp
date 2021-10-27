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
	
	ChangedPackages::ChangedPackages(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChangedPackages::ChangedPackages(jint &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ChangedPackages",
			"(ILjava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint ChangedPackages::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ChangedPackages::getPackageNames()
	{
		return __thiz.callObjectMethod(
			"getPackageNames",
			"()Ljava/util/List;"
		);
	}
	jint ChangedPackages::getSequenceNumber()
	{
		return __thiz.callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	void ChangedPackages::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

