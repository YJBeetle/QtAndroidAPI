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
		
		SSLSockets(QAndroidJniObject obj);
		// Constructors
		SSLSockets() = default;
		
		// Methods
		static jboolean isSupportedSocket(javax::net::ssl::SSLSocket arg0);
		static void setUseSessionTickets(javax::net::ssl::SSLSocket arg0, jboolean arg1);
	};
} // namespace android::net::ssl

