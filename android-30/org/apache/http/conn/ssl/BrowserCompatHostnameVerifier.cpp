#include "./BrowserCompatHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// QJniObject forward
	BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier(QJniObject obj) : org::apache::http::conn::ssl::AbstractVerifier(obj) {}
	
	// Constructors
	BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.BrowserCompatHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	jstring BrowserCompatHostnameVerifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BrowserCompatHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace org::apache::http::conn::ssl

