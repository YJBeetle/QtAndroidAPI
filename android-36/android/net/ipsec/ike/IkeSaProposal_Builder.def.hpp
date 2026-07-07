#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class IkeSaProposal;
}

namespace android::net::ipsec::ike
{
	class IkeSaProposal_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSaProposal_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSaProposal_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IkeSaProposal_Builder();
		
		// Methods
		android::net::ipsec::ike::IkeSaProposal_Builder addDhGroup(jint arg0) const;
		android::net::ipsec::ike::IkeSaProposal_Builder addEncryptionAlgorithm(jint arg0, jint arg1) const;
		android::net::ipsec::ike::IkeSaProposal_Builder addIntegrityAlgorithm(jint arg0) const;
		android::net::ipsec::ike::IkeSaProposal_Builder addPseudorandomFunction(jint arg0) const;
		android::net::ipsec::ike::IkeSaProposal build() const;
	};
} // namespace android::net::ipsec::ike

