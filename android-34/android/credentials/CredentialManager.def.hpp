#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::credentials
{
	class ClearCredentialStateRequest;
}
namespace android::credentials
{
	class CreateCredentialRequest;
}
namespace android::credentials
{
	class GetCredentialRequest;
}
namespace android::credentials
{
	class PrepareGetCredentialResponse_PendingGetCredentialHandle;
}
namespace android::credentials
{
	class RegisterCredentialDescriptionRequest;
}
namespace android::credentials
{
	class UnregisterCredentialDescriptionRequest;
}
namespace android::os
{
	class CancellationSignal;
}

namespace android::credentials
{
	class CredentialManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void clearCredentialState(android::credentials::ClearCredentialStateRequest arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const;
		void createCredential(android::content::Context arg0, android::credentials::CreateCredentialRequest arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const;
		void getCredential(android::content::Context arg0, android::credentials::GetCredentialRequest arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const;
		void getCredential(android::content::Context arg0, android::credentials::PrepareGetCredentialResponse_PendingGetCredentialHandle arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const;
		jboolean isEnabledCredentialProviderService(android::content::ComponentName arg0) const;
		void prepareGetCredential(android::credentials::GetCredentialRequest arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const;
		void registerCredentialDescription(android::credentials::RegisterCredentialDescriptionRequest arg0) const;
		void unregisterCredentialDescription(android::credentials::UnregisterCredentialDescriptionRequest arg0) const;
	};
} // namespace android::credentials

