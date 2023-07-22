#pragma once

#include "../../JByteArray.hpp"
#include "./Base64_Decoder.def.hpp"
#include "./Base64_Encoder.def.hpp"
#include "./Base64.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::Base64_Decoder Base64::getDecoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	inline java::util::Base64_Encoder Base64::getEncoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	inline java::util::Base64_Decoder Base64::getMimeDecoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getMimeDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	inline java::util::Base64_Encoder Base64::getMimeEncoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getMimeEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	inline java::util::Base64_Encoder Base64::getMimeEncoder(jint arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getMimeEncoder",
			"(I[B)Ljava/util/Base64$Encoder;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline java::util::Base64_Decoder Base64::getUrlDecoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getUrlDecoder",
			"()Ljava/util/Base64$Decoder;"
		);
	}
	inline java::util::Base64_Encoder Base64::getUrlEncoder()
	{
		return callStaticObjectMethod(
			"java.util.Base64",
			"getUrlEncoder",
			"()Ljava/util/Base64$Encoder;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
