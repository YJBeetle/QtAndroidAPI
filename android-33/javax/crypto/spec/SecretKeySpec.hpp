#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SecretKeySpec.def.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// Constructors
	inline SecretKeySpec::SecretKeySpec(JByteArray arg0, JString arg1)
		: JObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BLjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		) {}
	inline SecretKeySpec::SecretKeySpec(JByteArray arg0, jint arg1, jint arg2, JString arg3)
		: JObject(
			"javax.crypto.spec.SecretKeySpec",
			"([BIILjava/lang/String;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline jboolean SecretKeySpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SecretKeySpec::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray SecretKeySpec::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JString SecretKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	inline jint SecretKeySpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace javax::crypto::spec

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto::spec;
#endif
