#pragma once

#include "../../../JObject.hpp"

class JString;
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
	class SSLEngineResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngineResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3);
		SSLEngineResult(javax::net::ssl::SSLEngineResult_Status arg0, javax::net::ssl::SSLEngineResult_HandshakeStatus arg1, jint arg2, jint arg3, jlong arg4);
		
		// Methods
		jint bytesConsumed() const;
		jint bytesProduced() const;
		javax::net::ssl::SSLEngineResult_HandshakeStatus getHandshakeStatus() const;
		javax::net::ssl::SSLEngineResult_Status getStatus() const;
		jlong sequenceNumber() const;
		JString toString() const;
	};
} // namespace javax::net::ssl

