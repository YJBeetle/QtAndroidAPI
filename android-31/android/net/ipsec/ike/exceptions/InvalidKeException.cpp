#include "./InvalidKeException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QJniObject forward
	InvalidKeException::InvalidKeException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeProtocolException(obj) {}
	
	// Constructors
	InvalidKeException::InvalidKeException(jint arg0)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidKeException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint InvalidKeException::getDhGroup()
	{
		return callMethod<jint>(
			"getDhGroup",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

