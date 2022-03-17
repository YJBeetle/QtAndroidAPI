#pragma once

#include "../../../../JObject.hpp"
#include "./IkeSaProposal.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject IkeSaProposal::getSupportedEncryptionAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedEncryptionAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	inline JObject IkeSaProposal::getSupportedIntegrityAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedIntegrityAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	inline JObject IkeSaProposal::getSupportedPseudorandomFunctions()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedPseudorandomFunctions",
			"()Ljava/util/Set;"
		);
	}
	inline jboolean IkeSaProposal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject IkeSaProposal::getPseudorandomFunctions() const
	{
		return callObjectMethod(
			"getPseudorandomFunctions",
			"()Ljava/util/List;"
		);
	}
	inline jint IkeSaProposal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./SaProposal.hpp"

