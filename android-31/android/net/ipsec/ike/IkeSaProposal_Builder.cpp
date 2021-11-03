#include "./IkeSaProposal.hpp"
#include "./IkeSaProposal_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSaProposal_Builder::IkeSaProposal_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IkeSaProposal_Builder::IkeSaProposal_Builder()
		: JObject(
			"android.net.ipsec.ike.IkeSaProposal$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addDhGroup(jint arg0)
	{
		return callObjectMethod(
			"addDhGroup",
			"(I)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addEncryptionAlgorithm(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"addEncryptionAlgorithm",
			"(II)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0,
			arg1
		);
	}
	android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addIntegrityAlgorithm(jint arg0)
	{
		return callObjectMethod(
			"addIntegrityAlgorithm",
			"(I)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addPseudorandomFunction(jint arg0)
	{
		return callObjectMethod(
			"addPseudorandomFunction",
			"(I)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::IkeSaProposal IkeSaProposal_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/IkeSaProposal;"
		);
	}
} // namespace android::net::ipsec::ike

