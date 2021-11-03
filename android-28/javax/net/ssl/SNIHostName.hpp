#pragma once

#include "../../../JObject.hpp"
#include "./SNIServerName.hpp"

namespace javax::net::ssl
{
	class SNIMatcher;
}

namespace javax::net::ssl
{
	class SNIHostName : public javax::net::ssl::SNIServerName
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SNIHostName(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SNIServerName(className, sig, std::forward<Ts>(agv)...) {}
		SNIHostName(QJniObject obj);
		
		// Constructors
		SNIHostName(jbyteArray arg0);
		SNIHostName(jstring arg0);
		
		// Methods
		static javax::net::ssl::SNIMatcher createSNIMatcher(jstring arg0);
		jboolean equals(jobject arg0);
		jstring getAsciiName();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::net::ssl

