#pragma once

#include "./SaProposal.hpp"

class JObject;

namespace android::net::ipsec::ike
{
	class IkeSaProposal : public android::net::ipsec::ike::SaProposal
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSaProposal(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::SaProposal(className, sig, std::forward<Ts>(agv)...) {}
		IkeSaProposal(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getSupportedEncryptionAlgorithms();
		static JObject getSupportedIntegrityAlgorithms();
		static JObject getSupportedPseudorandomFunctions();
		jboolean equals(JObject arg0);
		JObject getPseudorandomFunctions();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

