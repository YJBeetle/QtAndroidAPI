#pragma once

#include "../../../../JObject.hpp"
#include "./IkeIdentification.hpp"


namespace android::net::ipsec::ike
{
	class IkeFqdnIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		jstring fqdn();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeFqdnIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeFqdnIdentification(QAndroidJniObject obj);
		
		// Constructors
		IkeFqdnIdentification(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

