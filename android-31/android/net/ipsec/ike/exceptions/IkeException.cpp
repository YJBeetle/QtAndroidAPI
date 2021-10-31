#include "./IkeException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QJniObject forward
	IkeException::IkeException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::ipsec::ike::exceptions

