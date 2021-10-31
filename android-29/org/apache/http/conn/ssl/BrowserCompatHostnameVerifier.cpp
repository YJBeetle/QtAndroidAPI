#include "./BrowserCompatHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.BrowserCompatHostnameVerifier",
			"()V"
		);
	}
	
	// Methods
	jstring BrowserCompatHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BrowserCompatHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace org::apache::http::conn::ssl

