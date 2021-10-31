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
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLEngineResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult(QJniObject obj);
		
		// Constructors
		SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3);
		SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4);
		
		// Methods
		jint bytesConsumed();
		jint bytesProduced();
		javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus();
		javax::net::ssl::SSLEngineResult_Status getStatus();
		jlong sequenceNumber();
		jstring toString();
	};
} // namespace javax::net::ssl

