#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
#include "./BrowserCompatHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.BrowserCompatHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	JString BrowserCompatHostnameVerifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void BrowserCompatHostnameVerifier::verify(JString arg0, JArray arg1, JArray arg2) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jarray>()
		);
	}
} // namespace org::apache::http::conn::ssl

