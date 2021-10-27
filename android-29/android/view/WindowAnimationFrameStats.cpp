#include "../os/Parcel.hpp"
#include "./WindowAnimationFrameStats.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject WindowAnimationFrameStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.WindowAnimationFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WindowAnimationFrameStats::WindowAnimationFrameStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint WindowAnimationFrameStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WindowAnimationFrameStats::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WindowAnimationFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

