#include "../nio/charset/Charset.hpp"
#include "../util/BitSet.hpp"
#include "./URLEncoder.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URLEncoder::URLEncoder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring URLEncoder::encode(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring URLEncoder::encode(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring URLEncoder::encode(jstring arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
} // namespace java::net

