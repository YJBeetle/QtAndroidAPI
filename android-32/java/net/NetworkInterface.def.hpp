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
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkInterface(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::net::NetworkInterface getByIndex(jint arg0);
		static java::net::NetworkInterface getByInetAddress(java::net::InetAddress arg0);
		static java::net::NetworkInterface getByName(JString arg0);
		static JObject getNetworkInterfaces();
		static JObject networkInterfaces();
		jboolean equals(JObject arg0) const;
		JString getDisplayName() const;
		JByteArray getHardwareAddress() const;
		jint getIndex() const;
		JObject getInetAddresses() const;
		JObject getInterfaceAddresses() const;
		jint getMTU() const;
		JString getName() const;
		java::net::NetworkInterface getParent() const;
		JObject getSubInterfaces() const;
		jint hashCode() const;
		JObject inetAddresses() const;
		jboolean isLoopback() const;
		jboolean isPointToPoint() const;
		jboolean isUp() const;
		jboolean isVirtual() const;
		JObject subInterfaces() const;
		jboolean supportsMulticast() const;
		JString toString() const;
	};
} // namespace java::net

