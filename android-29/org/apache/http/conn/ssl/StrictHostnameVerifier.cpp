#include "./StrictHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	StrictHostnameVerifier::StrictHostnameVerifier(QAndroidJniObject obj) : org::apache::http::conn::ssl::AbstractVerifier(obj) {}
	
	// Constructors
	StrictHostnameVerifier::StrictHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.StrictHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	jstring StrictHostnameVerifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StrictHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
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

