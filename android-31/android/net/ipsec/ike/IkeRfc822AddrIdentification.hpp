#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./IkeIdentification.hpp"


namespace android::net::ipsec::ike
{
	class IkeRfc822AddrIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		jstring rfc822Name();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeRfc822AddrIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeRfc822AddrIdentification(QJniObject obj);
		
		// Constructors
		IkeRfc822AddrIdentification(jstring arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

