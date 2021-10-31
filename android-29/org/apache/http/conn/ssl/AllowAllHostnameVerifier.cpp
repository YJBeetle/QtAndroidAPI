#include "./AllowAllHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	AllowAllHostnameVerifier::AllowAllHostnameVerifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AllowAllHostnameVerifier::AllowAllHostnameVerifier()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.AllowAllHostnameVerifier",
			"()V"
		);
	}
	
	// Methods
	jstring AllowAllHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AllowAllHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
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

