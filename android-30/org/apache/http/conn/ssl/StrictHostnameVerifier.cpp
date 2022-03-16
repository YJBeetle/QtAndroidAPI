#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
#include "./StrictHostnameVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	StrictHostnameVerifier::StrictHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.StrictHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	JString StrictHostnameVerifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StrictHostnameVerifier::verify(JString arg0, JArray arg1, JArray arg2) const
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

