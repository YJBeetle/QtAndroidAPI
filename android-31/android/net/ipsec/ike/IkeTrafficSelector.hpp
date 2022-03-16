#pragma once

#include "../../../../JObject.hpp"

class JObject;
namespace java::net
{
	class InetAddress;
}

namespace android::net::ipsec::ike
{
	class IkeTrafficSelector : public JObject
	{
	public:
		// Fields
		jint endPort();
		java::net::InetAddress endingAddress();
		jint startPort();
		java::net::InetAddress startingAddress();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeTrafficSelector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeTrafficSelector(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		IkeTrafficSelector(jint arg0, jint arg1, java::net::InetAddress arg2, java::net::InetAddress arg3);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

