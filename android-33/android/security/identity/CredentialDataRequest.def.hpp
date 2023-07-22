#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::security::identity
{
	class CredentialDataRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialDataRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialDataRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getDeviceSignedEntriesToRequest() const;
		JObject getIssuerSignedEntriesToRequest() const;
		JByteArray getReaderSignature() const;
		JByteArray getRequestMessage() const;
		jboolean isAllowUsingExhaustedKeys() const;
		jboolean isAllowUsingExpiredKeys() const;
		jboolean isIncrementUseCount() const;
	};
} // namespace android::security::identity

