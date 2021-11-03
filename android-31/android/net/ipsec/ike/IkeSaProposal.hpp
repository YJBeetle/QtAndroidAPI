#pragma once

#include "../../../../JObject.hpp"
#include "./SaProposal.hpp"


namespace android::net::ipsec::ike
{
	class IkeSaProposal : public android::net::ipsec::ike::SaProposal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSaProposal(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::SaProposal(className, sig, std::forward<Ts>(agv)...) {}
		IkeSaProposal(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getSupportedEncryptionAlgorithms();
		static JObject getSupportedIntegrityAlgorithms();
		static JObject getSupportedPseudorandomFunctions();
		jboolean equals(jobject arg0);
		JObject getPseudorandomFunctions();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

