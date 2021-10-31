#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./IkeIdentification.hpp"


namespace android::net::ipsec::ike
{
	class IkeKeyIdIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		jbyteArray keyId();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeKeyIdIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeKeyIdIdentification(QJniObject obj);
		
		// Constructors
		IkeKeyIdIdentification(jbyteArray arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

