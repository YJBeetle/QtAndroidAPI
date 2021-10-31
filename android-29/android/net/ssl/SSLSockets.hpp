#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::net::ssl
{
	class SSLSocket;
}

namespace android::net::ssl
{
	class SSLSockets : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLSockets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SSLSockets(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isSupportedSocket(javax::net::ssl::SSLSocket arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLSocket arg0, jboolean arg1);
	};
} // namespace android::net::ssl

