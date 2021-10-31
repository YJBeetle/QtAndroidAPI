#include "../../os/Parcel.hpp"
#include "./DataRemovalRequest_Builder.hpp"
#include "./DataRemovalRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	__JniBaseClass DataRemovalRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.contentcapture.DataRemovalRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DataRemovalRequest::FLAG_IS_PREFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.contentcapture.DataRemovalRequest",
			"FLAG_IS_PREFIX"
		);
	}
	
	// QAndroidJniObject forward
	DataRemovalRequest::DataRemovalRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint DataRemovalRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass DataRemovalRequest::getLocusIdRequests()
	{
		return callObjectMethod(
			"getLocusIdRequests",
			"()Ljava/util/List;"
		);
	}
	jstring DataRemovalRequest::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DataRemovalRequest::isForEverything()
	{
		return callMethod<jboolean>(
			"isForEverything",
			"()Z"
		);
	}
	void DataRemovalRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

