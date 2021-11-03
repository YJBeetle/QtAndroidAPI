#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class FileDescriptor;
}
class JObject;
class JString;
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Proxy;
}
namespace java::net
{
	class Socket;
}
namespace java::net
{
	class URL;
}
namespace java::net
{
	class URLConnection;
}
namespace javax::net
{
	class SocketFactory;
}

namespace android::net
{
	class Network : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Network(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Network(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Network fromNetworkHandle(jlong arg0);
		void bindSocket(java::io::FileDescriptor arg0);
		void bindSocket(java::net::DatagramSocket arg0);
		void bindSocket(java::net::Socket arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		JArray getAllByName(JString arg0);
		java::net::InetAddress getByName(JString arg0);
		jlong getNetworkHandle();
		javax::net::SocketFactory getSocketFactory();
		jint hashCode();
		java::net::URLConnection openConnection(java::net::URL arg0);
		java::net::URLConnection openConnection(java::net::URL arg0, java::net::Proxy arg1);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

