#include "../os/Parcel.hpp"
#include "./DhcpInfo.hpp"

namespace android::net
{
	// Fields
	jint DhcpInfo::dns1()
	{
		return __thiz.getField<jint>(
			"dns1"
		);
	}
	jint DhcpInfo::dns2()
	{
		return __thiz.getField<jint>(
			"dns2"
		);
	}
	jint DhcpInfo::gateway()
	{
		return __thiz.getField<jint>(
			"gateway"
		);
	}
	jint DhcpInfo::ipAddress()
	{
		return __thiz.getField<jint>(
			"ipAddress"
		);
	}
	jint DhcpInfo::leaseDuration()
	{
		return __thiz.getField<jint>(
			"leaseDuration"
		);
	}
	jint DhcpInfo::netmask()
	{
		return __thiz.getField<jint>(
			"netmask"
		);
	}
	jint DhcpInfo::serverAddress()
	{
		return __thiz.getField<jint>(
			"serverAddress"
		);
	}
	
	DhcpInfo::DhcpInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DhcpInfo::DhcpInfo()
	{
		__thiz = QAndroidJniObject(
			"android.net.DhcpInfo",
			"()V"
		);
	}
	
	// Methods
	jint DhcpInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DhcpInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DhcpInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

