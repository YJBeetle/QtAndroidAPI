#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::net
{
	class Inet4Address;
}
namespace java::net
{
	class InetAddress;
}

namespace java::net
{
	class InterfaceAddress : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InterfaceAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InterfaceAddress(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::net::InetAddress getAddress() const;
		java::net::InetAddress getBroadcast() const;
		jshort getNetworkPrefixLength() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::net

