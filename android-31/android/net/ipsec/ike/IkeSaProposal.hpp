#pragma once

#include "../../../../__JniBaseClass.hpp"
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
		static __JniBaseClass getSupportedEncryptionAlgorithms();
		static __JniBaseClass getSupportedIntegrityAlgorithms();
		static __JniBaseClass getSupportedPseudorandomFunctions();
		jboolean equals(jobject arg0);
		__JniBaseClass getPseudorandomFunctions();
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

