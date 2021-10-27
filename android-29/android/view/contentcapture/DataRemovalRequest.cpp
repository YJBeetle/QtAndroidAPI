#include "../../os/Parcel.hpp"
#include "./DataRemovalRequest_Builder.hpp"
#include "./DataRemovalRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	QAndroidJniObject DataRemovalRequest::CREATOR()
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
	
	DataRemovalRequest::DataRemovalRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DataRemovalRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject DataRemovalRequest::getLocusIdRequests()
	{
		return __thiz.callObjectMethod(
			"getLocusIdRequests",
			"()Ljava/util/List;"
		);
	}
	jstring DataRemovalRequest::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DataRemovalRequest::isForEverything()
	{
		return __thiz.callMethod<jboolean>(
			"isForEverything",
			"()Z"
		);
	}
	void DataRemovalRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

