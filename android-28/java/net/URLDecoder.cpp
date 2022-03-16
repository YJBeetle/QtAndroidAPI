#include "../../JString.hpp"
#include "../nio/charset/Charset.hpp"
#include "./URLDecoder.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	URLDecoder::URLDecoder()
		: JObject(
			"java.net.URLDecoder",
			"()V"
		) {}
	
	// Methods
	JString URLDecoder::decode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString URLDecoder::decode(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString URLDecoder::decode(JString arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::net

