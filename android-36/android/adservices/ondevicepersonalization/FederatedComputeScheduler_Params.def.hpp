#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class TrainingInterval;
}

namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeScheduler_Params : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FederatedComputeScheduler_Params(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FederatedComputeScheduler_Params(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FederatedComputeScheduler_Params(android::adservices::ondevicepersonalization::TrainingInterval arg0);
		
		// Methods
		android::adservices::ondevicepersonalization::TrainingInterval getTrainingInterval() const;
	};
} // namespace android::adservices::ondevicepersonalization

