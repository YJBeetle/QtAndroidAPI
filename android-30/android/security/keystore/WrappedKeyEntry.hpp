#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./WrappedKeyEntry.def.hpp"

namespace android::security::keystore
{
	// Fields
	
	// Constructors
	inline WrappedKeyEntry::WrappedKeyEntry(JByteArray arg0, JString arg1, JString arg2, JObject arg3)
		: JObject(
			"android.security.keystore.WrappedKeyEntry",
			"([BLjava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline JObject WrappedKeyEntry::getAlgorithmParameterSpec() const
	{
		return callObjectMethod(
			"getAlgorithmParameterSpec",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	inline JString WrappedKeyEntry::getTransformation() const
	{
		return callObjectMethod(
			"getTransformation",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray WrappedKeyEntry::getWrappedKeyBytes() const
	{
		return callObjectMethod(
			"getWrappedKeyBytes",
			"()[B"
		);
	}
	inline JString WrappedKeyEntry::getWrappingKeyAlias() const
	{
		return callObjectMethod(
			"getWrappingKeyAlias",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::security::keystore

// Base class headers

