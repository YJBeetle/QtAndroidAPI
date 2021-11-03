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
		
		// Methods
		JObject getAttestationRecord();
		java::security::KeyPair getKeyPair();
	};
} // namespace android::security

