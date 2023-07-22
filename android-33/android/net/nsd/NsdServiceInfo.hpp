#pragma once

#include "../Network.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./NsdServiceInfo.def.hpp"

namespace android::net::nsd
{
	// Fields
	inline JObject NsdServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.nsd.NsdServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline NsdServiceInfo::NsdServiceInfo()
		: JObject(
			"android.net.nsd.NsdServiceInfo",
			"()V"
		) {}
	
	// Methods
	inline jint NsdServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject NsdServiceInfo::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Map;"
		);
	}
	inline java::net::InetAddress NsdServiceInfo::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/net/InetAddress;"
		);
	}
	inline android::net::Network NsdServiceInfo::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline jint NsdServiceInfo::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString NsdServiceInfo::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline JString NsdServiceInfo::getServiceType() const
	{
		return callObjectMethod(
			"getServiceType",
			"()Ljava/lang/String;"
		);
	}
	inline void NsdServiceInfo::removeAttribute(JString arg0) const
	{
		callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void NsdServiceInfo::setAttribute(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void NsdServiceInfo::setHost(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"setHost",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	inline void NsdServiceInfo::setNetwork(android::net::Network arg0) const
	{
		callMethod<void>(
			"setNetwork",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	inline void NsdServiceInfo::setPort(jint arg0) const
	{
		callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	inline void NsdServiceInfo::setServiceName(JString arg0) const
	{
		callMethod<void>(
			"setServiceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void NsdServiceInfo::setServiceType(JString arg0) const
	{
		callMethod<void>(
			"setServiceType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString NsdServiceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NsdServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::nsd;
#endif
