#include "../os/Parcel.hpp"
#include "./DhcpInfo.hpp"

namespace android::net
{
	// Fields
	jint DhcpInfo::dns1()
	{
		return getField<jint>(
			"dns1"
		);
	}
	jint DhcpInfo::dns2()
	{
		return getField<jint>(
			"dns2"
		);
	}
	jint DhcpInfo::gateway()
	{
		return getField<jint>(
			"gateway"
		);
	}
	jint DhcpInfo::ipAddress()
	{
		return getField<jint>(
			"ipAddress"
		);
	}
	jint DhcpInfo::leaseDuration()
	{
		return getField<jint>(
			"leaseDuration"
		);
	}
	jint DhcpInfo::netmask()
	{
		return getField<jint>(
			"netmask"
		);
	}
	jint DhcpInfo::serverAddress()
	{
		return getField<jint>(
			"serverAddress"
		);
	}
	
	// QJniObject forward
	DhcpInfo::DhcpInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DhcpInfo::DhcpInfo()
		: __JniBaseClass(
			"android.net.DhcpInfo",
			"()V"
		) {}
	
	// Methods
	jint DhcpInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DhcpInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DhcpInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

