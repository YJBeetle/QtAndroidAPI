#include "./Base64_Decoder.hpp"
#include "./Base64_Encoder.hpp"
#include "./Base64.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Base64::Base64(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Base64_Decoder Base64::getDecoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	java::util::Base64_Encoder Base64::getEncoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	java::util::Base64_Decoder Base64::getMimeDecoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getMimeDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	java::util::Base64_Encoder Base64::getMimeEncoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getMimeEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	java::util::Base64_Encoder Base64::getMimeEncoder(jint arg0, jbyteArray arg1)
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getMimeEncoder",
			"(I[B)Ljava/util/Base64$Encoder;",
			arg0,
			arg1
		);
	}
	java::util::Base64_Decoder Base64::getUrlDecoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getUrlDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	java::util::Base64_Encoder Base64::getUrlEncoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getUrlEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
} // namespace java::util

