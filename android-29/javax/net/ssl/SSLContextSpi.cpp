#include "../../../java/security/SecureRandom.hpp"
#include "./SSLEngine.hpp"
#include "./SSLParameters.hpp"
#include "./SSLServerSocketFactory.hpp"
#include "./SSLSocket.hpp"
#include "./SSLSocketFactory.hpp"
#include "./SSLContextSpi.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLContextSpi::SSLContextSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLContextSpi::SSLContextSpi()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLContextSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace javax::net::ssl

