#include "../../JThrowable.hpp"
#include "./DnsResolver_DnsException.hpp"

namespace android::net
{
	// Fields
	jint DnsResolver_DnsException::code()
	{
		return getField<jint>(
			"code"
		);
	}
	
	// QJniObject forward
	DnsResolver_DnsException::DnsResolver_DnsException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net

