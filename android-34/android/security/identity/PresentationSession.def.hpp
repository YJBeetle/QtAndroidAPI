#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::security::identity
{
	class CredentialDataRequest;
}
namespace android::security::identity
{
	class CredentialDataResult;
}
class JString;
namespace java::security
{
	class KeyPair;
}

namespace android::security::identity
{
	class PresentationSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PresentationSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PresentationSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::security::identity::CredentialDataResult getCredentialData(JString arg0, android::security::identity::CredentialDataRequest arg1) const;
		java::security::KeyPair getEphemeralKeyPair() const;
		void setReaderEphemeralPublicKey(JObject arg0) const;
		void setSessionTranscript(JByteArray arg0) const;
	};
} // namespace android::security::identity

