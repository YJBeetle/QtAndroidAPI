#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus;
}
namespace javax::net::ssl
{
	class SSLEngineResult_Status;
}

namespace javax::net::ssl
{
	class SSLEngineResult : public __JniBaseClass
	{
	public:
		// Fields
		
		SSLEngineResult(QAndroidJniObject obj);
		// Constructors
		SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3);
		SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4);
		SSLEngineResult() = default;
		
		// Methods
		jint bytesConsumed();
		jint bytesProduced();
		QAndroidJniObject getHandshakeStatus();
		QAndroidJniObject getStatus();
		jlong sequenceNumber();
		jstring toString();
	};
} // namespace javax::net::ssl

