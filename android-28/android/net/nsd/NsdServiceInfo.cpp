#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./NsdServiceInfo.hpp"

namespace android::net::nsd
{
	// Fields
	JObject NsdServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.nsd.NsdServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	NsdServiceInfo::NsdServiceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NsdServiceInfo::NsdServiceInfo()
		: JObject(
			"android.net.nsd.NsdServiceInfo",
			"()V"
		) {}
	
	// Methods
	jint NsdServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject NsdServiceInfo::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Map;"
		);
	}
	java::net::InetAddress NsdServiceInfo::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/net/InetAddress;"
		);
	}
	jint NsdServiceInfo::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString NsdServiceInfo::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	JString NsdServiceInfo::getServiceType() const
	{
		return callObjectMethod(
			"getServiceType",
			"()Ljava/lang/String;"
		);
	}
	void NsdServiceInfo::removeAttribute(JString arg0) const
	{
		callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NsdServiceInfo::setAttribute(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void NsdServiceInfo::setHost(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"setHost",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void NsdServiceInfo::setPort(jint arg0) const
	{
		callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	void NsdServiceInfo::setServiceName(JString arg0) const
	{
		callMethod<void>(
			"setServiceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NsdServiceInfo::setServiceType(JString arg0) const
	{
		callMethod<void>(
			"setServiceType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString NsdServiceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NsdServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::nsd

