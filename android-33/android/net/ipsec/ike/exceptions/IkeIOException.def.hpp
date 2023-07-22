#pragma once

#include "./IkeNonProtocolException.def.hpp"

namespace java::io
{
	class IOException;
}
class JThrowable;

namespace android::net::ipsec::ike::exceptions
{
	class IkeIOException : public android::net::ipsec::ike::exceptions::IkeNonProtocolException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeIOException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		IkeIOException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(obj) {}
		
		// Constructors
		IkeIOException(java::io::IOException arg0);
		
		// Methods
		java::io::IOException getCause() const;
		JThrowable initCause(JThrowable arg0) const;
	};
} // namespace android::net::ipsec::ike::exceptions

