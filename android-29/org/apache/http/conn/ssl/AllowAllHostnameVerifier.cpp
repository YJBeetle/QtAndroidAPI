#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
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
	JString AllowAllHostnameVerifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AllowAllHostnameVerifier::verify(JString arg0, JArray arg1, JArray arg2) const
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

