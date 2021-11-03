#pragma once

#include "./IkeIdentification.hpp"

class JByteArray;
class JObject;

namespace android::net::ipsec::ike
{
	class IkeKeyIdIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		JByteArray keyId();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeKeyIdIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeKeyIdIdentification(QJniObject obj);
		
		// Constructors
		IkeKeyIdIdentification(JByteArray arg0);
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

