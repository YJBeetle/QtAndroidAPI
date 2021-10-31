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
	
	// QAndroidJniObject forward
	DnsResolver_DnsException::DnsResolver_DnsException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net

