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
	
	// Constructors
	
	// Methods
	jint CaptivePortal::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CaptivePortal::ignoreNetwork() const
	{
		callMethod<void>(
			"ignoreNetwork",
			"()V"
		);
	}
	void CaptivePortal::reportCaptivePortalDismissed() const
	{
		callMethod<void>(
			"reportCaptivePortalDismissed",
			"()V"
		);
	}
	void CaptivePortal::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

