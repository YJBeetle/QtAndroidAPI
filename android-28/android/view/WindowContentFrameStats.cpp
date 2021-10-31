#include "../os/Parcel.hpp"
#include "./WindowContentFrameStats.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass WindowContentFrameStats::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowContentFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	WindowContentFrameStats::WindowContentFrameStats(QJniObject obj) : android::view::FrameStats(obj) {}
	
	// Constructors
	
	// Methods
	jint WindowContentFrameStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong WindowContentFrameStats::getFramePostedTimeNano(jint arg0)
	{
		return callMethod<jlong>(
			"getFramePostedTimeNano",
			"(I)J",
			arg0
		);
	}
	jlong WindowContentFrameStats::getFrameReadyTimeNano(jint arg0)
	{
		return callMethod<jlong>(
			"getFrameReadyTimeNano",
			"(I)J",
			arg0
		);
	}
	jstring WindowContentFrameStats::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WindowContentFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

