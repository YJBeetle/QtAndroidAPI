#include "../os/Parcel.hpp"
#include "./WindowAnimationFrameStats.hpp"

namespace android::view
{
	// Fields
	JObject WindowAnimationFrameStats::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowAnimationFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	WindowAnimationFrameStats::WindowAnimationFrameStats(QJniObject obj) : android::view::FrameStats(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowAnimationFrameStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WindowAnimationFrameStats::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WindowAnimationFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

