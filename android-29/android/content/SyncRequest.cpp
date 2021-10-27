#include "../os/Parcel.hpp"
#include "./SyncRequest.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject SyncRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SyncRequest::SyncRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SyncRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

