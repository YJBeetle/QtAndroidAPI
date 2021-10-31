#include "./SSLPeerUnverifiedException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLPeerUnverifiedException::SSLPeerUnverifiedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLPeerUnverifiedException::SSLPeerUnverifiedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPeerUnverifiedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::net::ssl

