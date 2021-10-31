#include "./IkeSaProposal.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSaProposal::IkeSaProposal(QAndroidJniObject obj) : android::net::ipsec::ike::SaProposal(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass IkeSaProposal::getSupportedEncryptionAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedEncryptionAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass IkeSaProposal::getSupportedIntegrityAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedIntegrityAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass IkeSaProposal::getSupportedPseudorandomFunctions()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.IkeSaProposal",
			"getSupportedPseudorandomFunctions",
			"()Ljava/util/Set;"
		);
	}
	jboolean IkeSaProposal::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass IkeSaProposal::getPseudorandomFunctions()
	{
		return callObjectMethod(
			"getPseudorandomFunctions",
			"()Ljava/util/List;"
		);
	}
	jint IkeSaProposal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike
