#include "./ChildSaProposal.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	ChildSaProposal::ChildSaProposal(QJniObject obj) : android::net::ipsec::ike::SaProposal(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass ChildSaProposal::getSupportedEncryptionAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.ChildSaProposal",
			"getSupportedEncryptionAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass ChildSaProposal::getSupportedIntegrityAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.ChildSaProposal",
			"getSupportedIntegrityAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	jboolean ChildSaProposal::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ChildSaProposal::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

