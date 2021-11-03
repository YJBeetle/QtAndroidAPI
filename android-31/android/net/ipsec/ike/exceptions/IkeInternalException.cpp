#include "../../../../../JString.hpp"
#include "../../../../../JThrowable.hpp"
#include "./IkeInternalException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QJniObject forward
	IkeInternalException::IkeInternalException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(obj) {}
	
	// Constructors
	IkeInternalException::IkeInternalException(JThrowable arg0)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeInternalException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	IkeInternalException::IkeInternalException(JString arg0, JThrowable arg1)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeInternalException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net::ipsec::ike::exceptions

