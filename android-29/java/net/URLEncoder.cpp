#include "../../JString.hpp"
#include "../nio/charset/Charset.hpp"
#include "../util/BitSet.hpp"
#include "./URLEncoder.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URLEncoder::URLEncoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString URLEncoder::encode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString URLEncoder::encode(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString URLEncoder::encode(JString arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::net

