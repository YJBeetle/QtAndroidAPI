#include "../os/Parcel.hpp"
#include "../../JString.hpp"
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
	
	// QAndroidJniObject forward
	WindowAnimationFrameStats::WindowAnimationFrameStats(QAndroidJniObject obj) : android::view::FrameStats(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowAnimationFrameStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString WindowAnimationFrameStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WindowAnimationFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

