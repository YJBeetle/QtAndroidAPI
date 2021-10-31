#include "./Bundle.hpp"
#include "./Handler.hpp"
#include "./Parcel.hpp"
#include "./ResultReceiver.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject ResultReceiver::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.ResultReceiver",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ResultReceiver::ResultReceiver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResultReceiver::ResultReceiver(android::os::Handler arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ResultReceiver",
			"(Landroid/os/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ResultReceiver::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResultReceiver::send(jint arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"send",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ResultReceiver::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

