#pragma once

#include "../../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::service::credentials
{
	class BeginCreateCredentialRequest;
}
namespace android::service::credentials
{
	class BeginGetCredentialRequest;
}
namespace android::service::credentials
{
	class ClearCredentialStateRequest;
}
class JString;

namespace android::service::credentials
{
	class CredentialProviderService : public android::app::Service
	{
	public:
		// Fields
		static JString EXTRA_BEGIN_GET_CREDENTIAL_REQUEST();
		static JString EXTRA_BEGIN_GET_CREDENTIAL_RESPONSE();
		static JString EXTRA_CREATE_CREDENTIAL_EXCEPTION();
		static JString EXTRA_CREATE_CREDENTIAL_REQUEST();
		static JString EXTRA_CREATE_CREDENTIAL_RESPONSE();
		static JString EXTRA_GET_CREDENTIAL_EXCEPTION();
		static JString EXTRA_GET_CREDENTIAL_REQUEST();
		static JString EXTRA_GET_CREDENTIAL_RESPONSE();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CredentialProviderService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		CredentialProviderService();
		
		// Methods
		void onBeginCreateCredential(android::service::credentials::BeginCreateCredentialRequest arg0, android::os::CancellationSignal arg1, JObject arg2) const;
		void onBeginGetCredential(android::service::credentials::BeginGetCredentialRequest arg0, android::os::CancellationSignal arg1, JObject arg2) const;
		JObject onBind(android::content::Intent arg0) const;
		void onClearCredentialState(android::service::credentials::ClearCredentialStateRequest arg0, android::os::CancellationSignal arg1, JObject arg2) const;
		void onCreate() const;
	};
} // namespace android::service::credentials

