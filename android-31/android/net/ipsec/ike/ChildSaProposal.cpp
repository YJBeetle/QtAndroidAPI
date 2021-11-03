#include "../../../../JObject.hpp"
#include "./ChildSaProposal.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	ChildSaProposal::ChildSaProposal(QAndroidJniObject obj) : android::net::ipsec::ike::SaProposal(obj) {}
	
	// Constructors
	
	// Methods
	JObject ChildSaProposal::getSupportedEncryptionAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.ChildSaProposal",
			"getSupportedEncryptionAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	JObject ChildSaProposal::getSupportedIntegrityAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.ipsec.ike.ChildSaProposal",
			"getSupportedIntegrityAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	jboolean ChildSaProposal::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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

