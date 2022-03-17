#pragma once

#include "./IkeIdentification.def.hpp"

class JObject;
class JString;

namespace android::net::ipsec::ike
{
	class IkeFqdnIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		JString fqdn();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeFqdnIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeFqdnIdentification(QAndroidJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
		
		// Constructors
		IkeFqdnIdentification(JString arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike

