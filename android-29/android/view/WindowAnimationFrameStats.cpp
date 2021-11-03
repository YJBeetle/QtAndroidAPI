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
	JString WindowAnimationFrameStats::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

