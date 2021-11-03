#pragma once

#include "../../JObject.hpp"

namespace java::net
{
	class InetAddress;
}

namespace java::net
{
	class NetworkInterface : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInterface(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::NetworkInterface getByIndex(jint arg0);
		static java::net::NetworkInterface getByInetAddress(java::net::InetAddress arg0);
		static java::net::NetworkInterface getByName(jstring arg0);
		static JObject getNetworkInterfaces();
		static JObject networkInterfaces();
		jboolean equals(jobject arg0);
		jstring getDisplayName();
		jbyteArray getHardwareAddress();
		jint getIndex();
		JObject getInetAddresses();
		JObject getInterfaceAddresses();
		jint getMTU();
		jstring getName();
		java::net::NetworkInterface getParent();
		JObject getSubInterfaces();
		jint hashCode();
		JObject inetAddresses();
		jboolean isLoopback();
		jboolean isPointToPoint();
		jboolean isUp();
		jboolean isVirtual();
		JObject subInterfaces();
		jboolean supportsMulticast();
		jstring toString();
	};
} // namespace java::net

