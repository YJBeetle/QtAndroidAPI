#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObjectArray;
class JArray;
class JArray;
class JArray;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInterface(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::NetworkInterface getByIndex(jint arg0);
		static java::net::NetworkInterface getByInetAddress(java::net::InetAddress arg0);
		static java::net::NetworkInterface getByName(JString arg0);
		static JObject getNetworkInterfaces();
		static JObject networkInterfaces();
		jboolean equals(JObject arg0);
		JString getDisplayName();
		JByteArray getHardwareAddress();
		jint getIndex();
		JObject getInetAddresses();
		JObject getInterfaceAddresses();
		jint getMTU();
		JString getName();
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
		JString toString();
	};
} // namespace java::net

