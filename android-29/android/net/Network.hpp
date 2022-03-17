#pragma once

#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.def.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "../../java/net/Proxy.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "../../java/net/URL.def.hpp"
#include "../../java/net/URLConnection.def.hpp"
#include "../../javax/net/SocketFactory.def.hpp"
#include "./Network.def.hpp"

namespace android::net
{
	// Fields
	inline JObject Network::CREATOR()
	{
		return getStaticObjectField(
			"android.net.Network",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Network Network::fromNetworkHandle(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.net.Network",
			"fromNetworkHandle",
			"(J)Landroid/net/Network;",
			arg0
		);
	}
	inline void Network::bindSocket(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"bindSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void Network::bindSocket(java::net::DatagramSocket arg0) const
	{
		callMethod<void>(
			"bindSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	inline void Network::bindSocket(java::net::Socket arg0) const
	{
		callMethod<void>(
			"bindSocket",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
	inline jint Network::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Network::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray Network::getAllByName(JString arg0) const
	{
		return callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	inline java::net::InetAddress Network::getByName(JString arg0) const
	{
		return callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	inline jlong Network::getNetworkHandle() const
	{
		return callMethod<jlong>(
			"getNetworkHandle",
			"()J"
		);
	}
	inline javax::net::SocketFactory Network::getSocketFactory() const
	{
		return callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/SocketFactory;"
		);
	}
	inline jint Network::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::net::URLConnection Network::openConnection(java::net::URL arg0) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;)Ljava/net/URLConnection;",
			arg0.object()
		);
	}
	inline java::net::URLConnection Network::openConnection(java::net::URL arg0, java::net::Proxy arg1) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString Network::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Network::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

