#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionConfig;
}

namespace android::adservices::adselection
{
	class ReportImpressionRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportImpressionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportImpressionRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReportImpressionRequest(jlong arg0, android::adservices::adselection::AdSelectionConfig arg1);
		
		// Methods
		android::adservices::adselection::AdSelectionConfig getAdSelectionConfig() const;
		jlong getAdSelectionId() const;
	};
} // namespace android::adservices::adselection

