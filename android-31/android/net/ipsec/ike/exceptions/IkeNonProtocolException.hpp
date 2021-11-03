#pragma once

#include "./IkeException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	class IkeNonProtocolException : public android::net::ipsec::ike::exceptions::IkeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeNonProtocolException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeException(className, sig, std::forward<Ts>(agv)...) {}
		IkeNonProtocolException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

