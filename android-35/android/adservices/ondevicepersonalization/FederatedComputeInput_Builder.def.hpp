#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeInput;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class FederatedComputeInput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FederatedComputeInput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FederatedComputeInput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FederatedComputeInput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::FederatedComputeInput build() const;
		android::adservices::ondevicepersonalization::FederatedComputeInput_Builder setPopulationName(JString arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

