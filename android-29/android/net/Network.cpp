#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Proxy.hpp"
#include "../../java/net/Socket.hpp"
#include "../../java/net/URL.hpp"
#include "../../java/net/URLConnection.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "./Network.hpp"

namespace android::net
{
	// Fields
	JObject Network::CREATOR()
	{
		return getStaticObjectField(
			"android.net.Network",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Network::Network(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Network Network::fromNetworkHandle(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.net.Network",
			"fromNetworkHandle",
			"(J)Landroid/net/Network;",
			arg0
		);
	}
	void Network::bindSocket(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"bindSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void Network::bindSocket(java::net::DatagramSocket arg0) const
	{
		callMethod<void>(
			"bindSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.object()
		);
	}
	void Network::bindSocket(java::net::Socket arg0) const
	{
		callMethod<void>(
			"bindSocket",
			"(Ljava/net/Socket;)V",
			arg0.object()
		);
	}
	jint Network::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Network::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray Network::getAllByName(JString arg0) const
	{
		return callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	java::net::InetAddress Network::getByName(JString arg0) const
	{
		return callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	jlong Network::getNetworkHandle() const
	{
		return callMethod<jlong>(
			"getNetworkHandle",
			"()J"
		);
	}
	javax::net::SocketFactory Network::getSocketFactory() const
	{
		return callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/SocketFactory;"
		);
	}
	jint Network::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::net::URLConnection Network::openConnection(java::net::URL arg0) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;)Ljava/net/URLConnection;",
			arg0.object()
		);
	}
	java::net::URLConnection Network::openConnection(java::net::URL arg0, java::net::Proxy arg1) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	JString Network::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Network::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

