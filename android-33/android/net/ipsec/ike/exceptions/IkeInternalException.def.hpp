#pragma once

#include "./IkeNonProtocolException.def.hpp"

class JString;
class JThrowable;

namespace android::net::ipsec::ike::exceptions
{
	class IkeInternalException : public android::net::ipsec::ike::exceptions::IkeNonProtocolException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeInternalException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		IkeInternalException(QAndroidJniObject obj) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(obj) {}
		
		// Constructors
		IkeInternalException(JThrowable arg0);
		IkeInternalException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

