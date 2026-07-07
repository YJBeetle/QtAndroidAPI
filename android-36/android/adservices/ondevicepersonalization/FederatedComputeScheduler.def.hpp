#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeInput;
}
namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeScheduler_Params;
}

namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeScheduler : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FederatedComputeScheduler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FederatedComputeScheduler(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel(android::adservices::ondevicepersonalization::FederatedComputeInput arg0) const;
		void schedule(android::adservices::ondevicepersonalization::FederatedComputeScheduler_Params arg0, android::adservices::ondevicepersonalization::FederatedComputeInput arg1) const;
	};
} // namespace android::adservices::ondevicepersonalization

