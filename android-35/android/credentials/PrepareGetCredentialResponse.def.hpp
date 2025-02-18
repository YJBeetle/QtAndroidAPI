#pragma once

#include "../../JObject.hpp"

namespace android::credentials
{
	class PrepareGetCredentialResponse_PendingGetCredentialHandle;
}
class JString;

namespace android::credentials
{
	class PrepareGetCredentialResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrepareGetCredentialResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrepareGetCredentialResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::credentials::PrepareGetCredentialResponse_PendingGetCredentialHandle getPendingGetCredentialHandle() const;
		jboolean hasAuthenticationResults() const;
		jboolean hasCredentialResults(JString arg0) const;
		jboolean hasRemoteResults() const;
	};
} // namespace android::credentials

