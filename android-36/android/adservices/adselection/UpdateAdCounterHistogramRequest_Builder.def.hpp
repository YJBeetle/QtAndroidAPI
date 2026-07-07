#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class UpdateAdCounterHistogramRequest;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}

namespace android::adservices::adselection
{
	class UpdateAdCounterHistogramRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UpdateAdCounterHistogramRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UpdateAdCounterHistogramRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UpdateAdCounterHistogramRequest_Builder(jlong arg0, jint arg1, android::adservices::common::AdTechIdentifier arg2);
		
		// Methods
		android::adservices::adselection::UpdateAdCounterHistogramRequest build() const;
		android::adservices::adselection::UpdateAdCounterHistogramRequest_Builder setAdEventType(jint arg0) const;
		android::adservices::adselection::UpdateAdCounterHistogramRequest_Builder setAdSelectionId(jlong arg0) const;
		android::adservices::adselection::UpdateAdCounterHistogramRequest_Builder setCallerAdTech(android::adservices::common::AdTechIdentifier arg0) const;
	};
} // namespace android::adservices::adselection

