#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class FileDescriptor;
}
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
	class Network : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Network(QAndroidJniObject obj);
		// Constructors
		Network() = default;
		
		// Methods
		static QAndroidJniObject fromNetworkHandle(jlong arg0);
		void bindSocket(java::io::FileDescriptor arg0);
		void bindSocket(java::net::DatagramSocket arg0);
		void bindSocket(java::net::Socket arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getAllByName(jstring arg0);
		QAndroidJniObject getByName(jstring arg0);
		jlong getNetworkHandle();
		QAndroidJniObject getSocketFactory();
		jint hashCode();
		QAndroidJniObject openConnection(java::net::URL arg0);
		QAndroidJniObject openConnection(java::net::URL arg0, java::net::Proxy arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

