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
	
	// QAndroidJniObject forward
	SSLContextSpi::SSLContextSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SSLContextSpi::SSLContextSpi()
		: __JniBaseClass(
			"javax.net.ssl.SSLContextSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::net::ssl

