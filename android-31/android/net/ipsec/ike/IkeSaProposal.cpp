#include "../../../../JObject.hpp"
#include "./IkeSaProposal.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject IkeSaProposal::getSupportedEncryptionAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedEncryptionAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	JObject IkeSaProposal::getSupportedIntegrityAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedIntegrityAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	JObject IkeSaProposal::getSupportedPseudorandomFunctions()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedPseudorandomFunctions",
			"()Ljava/util/Set;"
		);
	}
	jboolean IkeSaProposal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject IkeSaProposal::getPseudorandomFunctions() const
	{
		return callObjectMethod(
			"getPseudorandomFunctions",
			"()Ljava/util/List;"
		);
	}
	jint IkeSaProposal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

