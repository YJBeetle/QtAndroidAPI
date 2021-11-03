#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class KeyPair;
}

namespace android::security
{
	class AttestedKeyPair : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AttestedKeyPair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttestedKeyPair(QJniObject obj);
		
		// Constructors
		AttestedKeyPair(java::security::KeyPair arg0, JObject arg1);
		
		// Methods
		JObject getAttestationRecord() const;
		java::security::KeyPair getKeyPair() const;
	};
} // namespace android::security

