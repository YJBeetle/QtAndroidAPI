#pragma once

#include "../../../../../java/io/IOException.def.hpp"

class JString;

namespace android::net::ipsec::ike::exceptions
{
	class IkeTimeoutException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		IkeTimeoutException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		IkeTimeoutException(JString arg0);
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

