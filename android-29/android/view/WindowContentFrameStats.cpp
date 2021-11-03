#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./WindowContentFrameStats.hpp"

namespace android::view
{
	// Fields
	JObject WindowContentFrameStats::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowContentFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WindowContentFrameStats::WindowContentFrameStats(QAndroidJniObject obj) : android::view::FrameStats(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowContentFrameStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong WindowContentFrameStats::getFramePostedTimeNano(jint arg0) const
	{
		return callMethod<jlong>(
			"getFramePostedTimeNano",
			"(I)J",
			arg0
		);
	}
	jlong WindowContentFrameStats::getFrameReadyTimeNano(jint arg0) const
	{
		return callMethod<jlong>(
			"getFrameReadyTimeNano",
			"(I)J",
			arg0
		);
	}
	JString WindowContentFrameStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WindowContentFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

