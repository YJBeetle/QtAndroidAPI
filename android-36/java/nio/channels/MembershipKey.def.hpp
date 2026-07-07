#pragma once

#include "../../../JObject.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class NetworkInterface;
}

namespace java::nio::channels
{
	class MembershipKey : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MembershipKey(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MembershipKey(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::nio::channels::MembershipKey block(java::net::InetAddress arg0) const;
		JObject channel() const;
		void drop() const;
		java::net::InetAddress group() const;
		jboolean isValid() const;
		java::net::NetworkInterface networkInterface() const;
		java::net::InetAddress sourceAddress() const;
		java::nio::channels::MembershipKey unblock(java::net::InetAddress arg0) const;
	};
} // namespace java::nio::channels

