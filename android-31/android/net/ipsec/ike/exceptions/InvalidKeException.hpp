#pragma once

#include "../../../../../__JniBaseClass.hpp"
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeProtocolException.hpp"


namespace android::net::ipsec::ike::exceptions
{
	class InvalidKeException : public android::net::ipsec::ike::exceptions::IkeProtocolException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidKeException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidKeException(QAndroidJniObject obj);
		
		// Constructors
		InvalidKeException(jint arg0);
		
		// Methods
		jint getDhGroup();
	};
} // namespace android::net::ipsec::ike::exceptions

