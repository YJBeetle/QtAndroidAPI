#include "./IkeInternalException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QAndroidJniObject forward
	IkeInternalException::IkeInternalException(QAndroidJniObject obj) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(obj) {}
	
	// Constructors
	IkeInternalException::IkeInternalException(jthrowable arg0)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeInternalException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	IkeInternalException::IkeInternalException(jstring arg0, jthrowable arg1)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeInternalException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::net::ipsec::ike::exceptions

