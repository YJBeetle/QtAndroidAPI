#pragma once

#include "../../content/Intent.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "./BeginCreateCredentialRequest.def.hpp"
#include "./BeginGetCredentialRequest.def.hpp"
#include "./ClearCredentialStateRequest.def.hpp"
#include "../../../JString.hpp"
#include "./CredentialProviderService.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JString CredentialProviderService::EXTRA_BEGIN_GET_CREDENTIAL_REQUEST()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_BEGIN_GET_CREDENTIAL_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_BEGIN_GET_CREDENTIAL_RESPONSE()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_BEGIN_GET_CREDENTIAL_RESPONSE",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_CREATE_CREDENTIAL_EXCEPTION()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_CREATE_CREDENTIAL_EXCEPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_CREATE_CREDENTIAL_REQUEST()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_CREATE_CREDENTIAL_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_CREATE_CREDENTIAL_RESPONSE()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_CREATE_CREDENTIAL_RESPONSE",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_GET_CREDENTIAL_EXCEPTION()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_GET_CREDENTIAL_EXCEPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_GET_CREDENTIAL_REQUEST()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_GET_CREDENTIAL_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::EXTRA_GET_CREDENTIAL_RESPONSE()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"EXTRA_GET_CREDENTIAL_RESPONSE",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString CredentialProviderService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.credentials.CredentialProviderService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CredentialProviderService::CredentialProviderService()
		: android::app::Service(
			"android.service.credentials.CredentialProviderService",
			"()V"
		) {}
	
	// Methods
	inline void CredentialProviderService::onBeginCreateCredential(android::service::credentials::BeginCreateCredentialRequest arg0, android::os::CancellationSignal arg1, JObject arg2) const
	{
		callMethod<void>(
			"onBeginCreateCredential",
			"(Landroid/service/credentials/BeginCreateCredentialRequest;Landroid/os/CancellationSignal;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CredentialProviderService::onBeginGetCredential(android::service::credentials::BeginGetCredentialRequest arg0, android::os::CancellationSignal arg1, JObject arg2) const
	{
		callMethod<void>(
			"onBeginGetCredential",
			"(Landroid/service/credentials/BeginGetCredentialRequest;Landroid/os/CancellationSignal;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject CredentialProviderService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CredentialProviderService::onClearCredentialState(android::service::credentials::ClearCredentialStateRequest arg0, android::os::CancellationSignal arg1, JObject arg2) const
	{
		callMethod<void>(
			"onClearCredentialState",
			"(Landroid/service/credentials/ClearCredentialStateRequest;Landroid/os/CancellationSignal;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CredentialProviderService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
} // namespace android::service::credentials

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
