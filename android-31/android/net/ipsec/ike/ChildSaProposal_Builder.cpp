#include "./ChildSaProposal.hpp"
#include "./ChildSaProposal_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	ChildSaProposal_Builder::ChildSaProposal_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ChildSaProposal_Builder::ChildSaProposal_Builder()
		: JObject(
			"android.net.ipsec.ike.ChildSaProposal$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::ipsec::ike::ChildSaProposal_Builder ChildSaProposal_Builder::addDhGroup(jint arg0)
	{
		return callObjectMethod(
			"addDhGroup",
			"(I)Landroid/net/ipsec/ike/ChildSaProposal$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::ChildSaProposal_Builder ChildSaProposal_Builder::addEncryptionAlgorithm(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"addEncryptionAlgorithm",
			"(II)Landroid/net/ipsec/ike/ChildSaProposal$Builder;",
			arg0,
			arg1
		);
	}
	android::net::ipsec::ike::ChildSaProposal_Builder ChildSaProposal_Builder::addIntegrityAlgorithm(jint arg0)
	{
		return callObjectMethod(
			"addIntegrityAlgorithm",
			"(I)Landroid/net/ipsec/ike/ChildSaProposal$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::ChildSaProposal ChildSaProposal_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/ChildSaProposal;"
		);
	}
} // namespace android::net::ipsec::ike

