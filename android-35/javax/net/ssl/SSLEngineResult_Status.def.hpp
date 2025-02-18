#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace javax::net::ssl
{
	class SSLEngineResult_Status : public java::lang::Enum
	{
	public:
		// Fields
		static javax::net::ssl::SSLEngineResult_Status BUFFER_OVERFLOW();
		static javax::net::ssl::SSLEngineResult_Status BUFFER_UNDERFLOW();
		static javax::net::ssl::SSLEngineResult_Status CLOSED();
		static javax::net::ssl::SSLEngineResult_Status OK();
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLEngineResult_Status(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult_Status(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static javax::net::ssl::SSLEngineResult_Status valueOf(JString arg0);
		static JArray values();
	};
} // namespace javax::net::ssl

