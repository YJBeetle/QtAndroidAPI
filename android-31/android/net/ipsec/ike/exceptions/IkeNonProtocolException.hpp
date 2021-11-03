#pragma once

#include "./IkeException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	class IkeNonProtocolException : public android::net::ipsec::ike::exceptions::IkeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeNonProtocolException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeException(className, sig, std::forward<Ts>(agv)...) {}
		IkeNonProtocolException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

