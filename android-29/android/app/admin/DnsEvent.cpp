#include "../../os/Parcel.hpp"
#include "./DnsEvent.hpp"

namespace android::app::admin
{
	// Fields
	QAndroidJniObject DnsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DnsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DnsEvent::DnsEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DnsEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DnsEvent::getHostname()
	{
		return __thiz.callObjectMethod(
			"getHostname",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DnsEvent::getInetAddresses()
	{
		return __thiz.callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/List;"
		);
	}
	jint DnsEvent::getTotalResolvedAddressCount()
	{
		return __thiz.callMethod<jint>(
			"getTotalResolvedAddressCount",
			"()I"
		);
	}
	jstring DnsEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DnsEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::admin

