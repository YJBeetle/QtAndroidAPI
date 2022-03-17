#pragma once

#include "./ChildSaProposal.def.hpp"
#include "./ChildSaProposal_Builder.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline ChildSaProposal_Builder::ChildSaProposal_Builder()
		: JObject(
			"android.net.ipsec.ike.ChildSaProposal$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::ipsec::ike::ChildSaProposal_Builder ChildSaProposal_Builder::addDhGroup(jint arg0) const
	{
		return callObjectMethod(
			"addDhGroup",
			"(I)Landroid/net/ipsec/ike/ChildSaProposal$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::ChildSaProposal_Builder ChildSaProposal_Builder::addEncryptionAlgorithm(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"addEncryptionAlgorithm",
			"(II)Landroid/net/ipsec/ike/ChildSaProposal$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::ipsec::ike::ChildSaProposal_Builder ChildSaProposal_Builder::addIntegrityAlgorithm(jint arg0) const
	{
		return callObjectMethod(
			"addIntegrityAlgorithm",
			"(I)Landroid/net/ipsec/ike/ChildSaProposal$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::ChildSaProposal ChildSaProposal_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/ChildSaProposal;"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
