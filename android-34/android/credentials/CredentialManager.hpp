#pragma once

#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "./ClearCredentialStateRequest.def.hpp"
#include "./CreateCredentialRequest.def.hpp"
#include "./GetCredentialRequest.def.hpp"
#include "./PrepareGetCredentialResponse_PendingGetCredentialHandle.def.hpp"
#include "./RegisterCredentialDescriptionRequest.def.hpp"
#include "./UnregisterCredentialDescriptionRequest.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "./CredentialManager.def.hpp"

namespace android::credentials
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void CredentialManager::clearCredentialState(android::credentials::ClearCredentialStateRequest arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"clearCredentialState",
			"(Landroid/credentials/ClearCredentialStateRequest;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void CredentialManager::createCredential(android::content::Context arg0, android::credentials::CreateCredentialRequest arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"createCredential",
			"(Landroid/content/Context;Landroid/credentials/CreateCredentialRequest;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void CredentialManager::getCredential(android::content::Context arg0, android::credentials::GetCredentialRequest arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"getCredential",
			"(Landroid/content/Context;Landroid/credentials/GetCredentialRequest;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void CredentialManager::getCredential(android::content::Context arg0, android::credentials::PrepareGetCredentialResponse_PendingGetCredentialHandle arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"getCredential",
			"(Landroid/content/Context;Landroid/credentials/PrepareGetCredentialResponse$PendingGetCredentialHandle;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline jboolean CredentialManager::isEnabledCredentialProviderService(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isEnabledCredentialProviderService",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	inline void CredentialManager::prepareGetCredential(android::credentials::GetCredentialRequest arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"prepareGetCredential",
			"(Landroid/credentials/GetCredentialRequest;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void CredentialManager::registerCredentialDescription(android::credentials::RegisterCredentialDescriptionRequest arg0) const
	{
		callMethod<void>(
			"registerCredentialDescription",
			"(Landroid/credentials/RegisterCredentialDescriptionRequest;)V",
			arg0.object()
		);
	}
	inline void CredentialManager::unregisterCredentialDescription(android::credentials::UnregisterCredentialDescriptionRequest arg0) const
	{
		callMethod<void>(
			"unregisterCredentialDescription",
			"(Landroid/credentials/UnregisterCredentialDescriptionRequest;)V",
			arg0.object()
		);
	}
} // namespace android::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::credentials;
#endif
