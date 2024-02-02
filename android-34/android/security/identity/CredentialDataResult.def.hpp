#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::security::identity
{
	class CredentialDataResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialDataResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialDataResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getDeviceMac() const;
		JByteArray getDeviceNameSpaces() const;
		JByteArray getDeviceSignature() const;
		JObject getDeviceSignedEntries() const;
		JObject getIssuerSignedEntries() const;
		JByteArray getStaticAuthenticationData() const;
	};
} // namespace android::security::identity

