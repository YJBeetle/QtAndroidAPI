#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace javax::net::ssl
{
	class SSLEngineResult_HandshakeStatus : public java::lang::Enum
	{
	public:
		// Fields
		static javax::net::ssl::SSLEngineResult_HandshakeStatus FINISHED();
		static javax::net::ssl::SSLEngineResult_HandshakeStatus NEED_TASK();
		static javax::net::ssl::SSLEngineResult_HandshakeStatus NEED_UNWRAP();
		static javax::net::ssl::SSLEngineResult_HandshakeStatus NEED_UNWRAP_AGAIN();
		static javax::net::ssl::SSLEngineResult_HandshakeStatus NEED_WRAP();
		static javax::net::ssl::SSLEngineResult_HandshakeStatus NOT_HANDSHAKING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngineResult_HandshakeStatus(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult_HandshakeStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::ssl::SSLEngineResult_HandshakeStatus valueOf(JString arg0);
		static JArray values();
	};
} // namespace javax::net::ssl

