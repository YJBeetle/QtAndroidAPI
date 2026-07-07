#pragma once

#include "../../app/Service.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	class EventUrlProvider;
}
namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeScheduler;
}
namespace android::adservices::ondevicepersonalization
{
	class LogReader;
}
namespace android::adservices::ondevicepersonalization
{
	class ModelManager;
}
namespace android::adservices::ondevicepersonalization
{
	class RequestToken;
}
namespace android::adservices::ondevicepersonalization
{
	class UserData;
}
namespace android::content
{
	class Intent;
}

namespace android::adservices::ondevicepersonalization
{
	class IsolatedService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IsolatedService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		IsolatedService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		IsolatedService();
		
		// Methods
		android::adservices::ondevicepersonalization::EventUrlProvider getEventUrlProvider(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		android::adservices::ondevicepersonalization::FederatedComputeScheduler getFederatedComputeScheduler(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		JObject getLocalData(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		android::adservices::ondevicepersonalization::LogReader getLogReader(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		android::adservices::ondevicepersonalization::ModelManager getModelManager(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		JObject getRemoteData(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		android::adservices::ondevicepersonalization::UserData getUserData(android::adservices::ondevicepersonalization::RequestToken arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		void onCreate() const;
		JObject onRequest(android::adservices::ondevicepersonalization::RequestToken arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

