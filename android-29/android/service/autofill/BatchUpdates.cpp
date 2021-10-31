#include "../../os/Parcel.hpp"
#include "./BatchUpdates_Builder.hpp"
#include "./BatchUpdates.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass BatchUpdates::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.BatchUpdates",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	BatchUpdates::BatchUpdates(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint BatchUpdates::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring BatchUpdates::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BatchUpdates::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

