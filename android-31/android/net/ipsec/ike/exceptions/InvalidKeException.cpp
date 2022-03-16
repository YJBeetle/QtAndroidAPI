#include "./InvalidKeException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// Constructors
	InvalidKeException::InvalidKeException(jint arg0)
		: android::net::ipsec::ike::exceptions::IkeProtocolException(
			"android.net.ipsec.ike.exceptions.InvalidKeException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint InvalidKeException::getDhGroup() const
	{
		return callMethod<jint>(
			"getDhGroup",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

