#include "./StrictHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	StrictHostnameVerifier::StrictHostnameVerifier(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StrictHostnameVerifier::StrictHostnameVerifier()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.StrictHostnameVerifier",
			"()V"
		);
	}
	
	// Methods
	jstring StrictHostnameVerifier::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StrictHostnameVerifier::verify(jstring arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StrictHostnameVerifier::verify(const QString &arg0, jarray arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace org::apache::http::conn::ssl

