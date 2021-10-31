#include "./PeerHandle.hpp"
#include "../../../os/Parcel.hpp"
#include "./ParcelablePeerHandle.hpp"

namespace android::net::wifi::aware
{
	// Fields
	QAndroidJniObject ParcelablePeerHandle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ParcelablePeerHandle::ParcelablePeerHandle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelablePeerHandle::ParcelablePeerHandle(android::net::wifi::aware::PeerHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"(Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ParcelablePeerHandle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ParcelablePeerHandle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

