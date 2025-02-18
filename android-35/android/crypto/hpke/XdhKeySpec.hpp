#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./XdhKeySpec.def.hpp"

namespace android::crypto::hpke
{
	// Fields
	
	// Constructors
	inline XdhKeySpec::XdhKeySpec(JByteArray arg0)
		: java::security::spec::EncodedKeySpec(
			"android.crypto.hpke.XdhKeySpec",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean XdhKeySpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString XdhKeySpec::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray XdhKeySpec::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		);
	}
	inline jint XdhKeySpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::crypto::hpke

// Base class headers
#include "../../../java/security/spec/EncodedKeySpec.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::crypto::hpke;
#endif
