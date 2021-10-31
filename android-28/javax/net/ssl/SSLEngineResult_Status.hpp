#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLEngineResult_Status(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SSLEngineResult_Status(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::ssl::SSLEngineResult_Status valueOf(jstring arg0);
		static jarray values();
	};
} // namespace javax::net::ssl

