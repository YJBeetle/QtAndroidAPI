#include "../os/Parcel.hpp"
#include "./CaptivePortal.hpp"

namespace android::net
{
	// Fields
	JObject CaptivePortal::CREATOR()
	{
		return getStaticObjectField(
			"android.net.CaptivePortal",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CaptivePortal::CaptivePortal(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CaptivePortal::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CaptivePortal::ignoreNetwork()
	{
		callMethod<void>(
			"ignoreNetwork",
			"()V"
		);
	}
	void CaptivePortal::reportCaptivePortalDismissed()
	{
		callMethod<void>(
			"reportCaptivePortalDismissed",
			"()V"
		);
	}
	void CaptivePortal::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

