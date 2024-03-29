#pragma once

#include "./IkeSaProposal.def.hpp"
#include "./IkeSaProposal_Builder.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline IkeSaProposal_Builder::IkeSaProposal_Builder()
		: JObject(
			"android.net.ipsec.ike.IkeSaProposal$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addDhGroup(jint arg0) const
	{
		return callObjectMethod(
			"addDhGroup",
			"(I)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addEncryptionAlgorithm(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"addEncryptionAlgorithm",
			"(II)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addIntegrityAlgorithm(jint arg0) const
	{
		return callObjectMethod(
			"addIntegrityAlgorithm",
			"(I)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::IkeSaProposal_Builder IkeSaProposal_Builder::addPseudorandomFunction(jint arg0) const
	{
		return callObjectMethod(
			"addPseudorandomFunction",
			"(I)Landroid/net/ipsec/ike/IkeSaProposal$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::IkeSaProposal IkeSaProposal_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/IkeSaProposal;"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
