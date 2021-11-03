#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeNonProtocolException.hpp"

namespace android::net
{
	class Network;
}

namespace android::net::ipsec::ike::exceptions
{
	class IkeNetworkLostException : public android::net::ipsec::ike::exceptions::IkeNonProtocolException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeNetworkLostException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		IkeNetworkLostException(QJniObject obj);
		
		// Constructors
		IkeNetworkLostException(android::net::Network arg0);
		
		// Methods
		android::net::Network getNetwork();
	};
} // namespace android::net::ipsec::ike::exceptions

