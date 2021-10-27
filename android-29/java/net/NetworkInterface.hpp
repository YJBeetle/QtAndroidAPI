#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}

namespace java::net
{
	class NetworkInterface : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkInterface(QAndroidJniObject obj);
		// Constructors
		NetworkInterface() = default;
		
		// Methods
		static QAndroidJniObject getByIndex(jint arg0);
		static QAndroidJniObject getByInetAddress(java::net::InetAddress arg0);
		static QAndroidJniObject getByName(jstring arg0);
		static QAndroidJniObject getByName(const QString &arg0);
		static QAndroidJniObject getNetworkInterfaces();
		static QAndroidJniObject networkInterfaces();
		jboolean equals(jobject arg0);
		jstring getDisplayName();
		jbyteArray getHardwareAddress();
		jint getIndex();
		QAndroidJniObject getInetAddresses();
		QAndroidJniObject getInterfaceAddresses();
		jint getMTU();
		jstring getName();
		QAndroidJniObject getParent();
		QAndroidJniObject getSubInterfaces();
		jint hashCode();
		QAndroidJniObject inetAddresses();
		jboolean isLoopback();
		jboolean isPointToPoint();
		jboolean isUp();
		jboolean isVirtual();
		QAndroidJniObject subInterfaces();
		jboolean supportsMulticast();
		jstring toString();
	};
} // namespace java::net

