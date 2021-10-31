#include "./AllowAllHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	AllowAllHostnameVerifier::AllowAllHostnameVerifier(QAndroidJniObject obj) : org::apache::http::conn::ssl::AbstractVerifier(obj) {}
	
	// Constructors
	AllowAllHostnameVerifier::AllowAllHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.AllowAllHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	jstring AllowAllHostnameVerifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AllowAllHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
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

