#pragma once

#include "../../../../JObject.hpp"
#include "./SaProposal.hpp"


namespace android::net::ipsec::ike
{
	class ChildSaProposal : public android::net::ipsec::ike::SaProposal
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChildSaProposal(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::SaProposal(className, sig, std::forward<Ts>(agv)...) {}
		ChildSaProposal(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getSupportedEncryptionAlgorithms();
		static JObject getSupportedIntegrityAlgorithms();
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

