#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EncryptedTopic.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	inline EncryptedTopic::EncryptedTopic(JByteArray arg0, JString arg1, JByteArray arg2)
		: JObject(
			"android.adservices.topics.EncryptedTopic",
			"([BLjava/lang/String;[B)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean EncryptedTopic::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray EncryptedTopic::getEncapsulatedKey() const
	{
		return callObjectMethod(
			"getEncapsulatedKey",
			"()[B"
		);
	}
	inline JByteArray EncryptedTopic::getEncryptedTopic() const
	{
		return callObjectMethod(
			"getEncryptedTopic",
			"()[B"
		);
	}
	inline JString EncryptedTopic::getKeyIdentifier() const
	{
		return callObjectMethod(
			"getKeyIdentifier",
			"()Ljava/lang/String;"
		);
	}
	inline jint EncryptedTopic::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString EncryptedTopic::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif
