#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::net
{
	class Proxy_Type;
}
namespace java::net
{
	class SocketAddress;
}

namespace java::net
{
	class Proxy : public JObject
	{
	public:
		// Fields
		static java::net::Proxy NO_PROXY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QAndroidJniObject obj);
		
		// Constructors
		Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1);
		
		// Methods
		java::net::SocketAddress address() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		java::net::Proxy_Type type() const;
	};
} // namespace java::net

