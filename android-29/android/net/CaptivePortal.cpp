#include "../os/Parcel.hpp"
#include "./CaptivePortal.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject CaptivePortal::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.CaptivePortal",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CaptivePortal::CaptivePortal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CaptivePortal::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CaptivePortal::ignoreNetwork()
	{
		__thiz.callMethod<void>(
			"ignoreNetwork",
			"()V"
		);
	}
	void CaptivePortal::reportCaptivePortalDismissed()
	{
		__thiz.callMethod<void>(
			"reportCaptivePortalDismissed",
			"()V"
		);
	}
	void CaptivePortal::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

