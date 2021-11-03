#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class ChildSaProposal;
}

namespace android::net::ipsec::ike
{
	class ChildSaProposal_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChildSaProposal_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChildSaProposal_Builder(QAndroidJniObject obj);
		
		// Constructors
		ChildSaProposal_Builder();
		
		// Methods
		android::net::ipsec::ike::ChildSaProposal_Builder addDhGroup(jint arg0);
		android::net::ipsec::ike::ChildSaProposal_Builder addEncryptionAlgorithm(jint arg0, jint arg1);
		android::net::ipsec::ike::ChildSaProposal_Builder addIntegrityAlgorithm(jint arg0);
		android::net::ipsec::ike::ChildSaProposal build();
	};
} // namespace android::net::ipsec::ike

