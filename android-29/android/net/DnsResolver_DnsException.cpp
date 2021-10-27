#include "./DnsResolver_DnsException.hpp"

namespace android::net
{
	// Fields
	jint DnsResolver_DnsException::code()
	{
		return __thiz.getField<jint>(
			"code"
		);
	}
	
	DnsResolver_DnsException::DnsResolver_DnsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::net

