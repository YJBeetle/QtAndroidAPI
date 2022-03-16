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
	
	// Constructors
	
	// Methods
} // namespace android::net

