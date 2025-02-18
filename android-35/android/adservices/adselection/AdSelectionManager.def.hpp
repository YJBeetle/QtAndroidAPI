#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionConfig;
}
namespace android::adservices::adselection
{
	class AdSelectionFromOutcomesConfig;
}
namespace android::adservices::adselection
{
	class GetAdSelectionDataRequest;
}
namespace android::adservices::adselection
{
	class PersistAdSelectionResultRequest;
}
namespace android::adservices::adselection
{
	class ReportEventRequest;
}
namespace android::adservices::adselection
{
	class ReportImpressionRequest;
}
namespace android::adservices::adselection
{
	class SetAppInstallAdvertisersRequest;
}
namespace android::adservices::adselection
{
	class TestAdSelectionManager;
}
namespace android::adservices::adselection
{
	class UpdateAdCounterHistogramRequest;
}
namespace android::content
{
	class Context;
}

namespace android::adservices::adselection
{
	class AdSelectionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::adselection::AdSelectionManager get(android::content::Context arg0);
		void getAdSelectionData(android::adservices::adselection::GetAdSelectionDataRequest arg0, JObject arg1, JObject arg2) const;
		android::adservices::adselection::TestAdSelectionManager getTestAdSelectionManager() const;
		void persistAdSelectionResult(android::adservices::adselection::PersistAdSelectionResultRequest arg0, JObject arg1, JObject arg2) const;
		void reportEvent(android::adservices::adselection::ReportEventRequest arg0, JObject arg1, JObject arg2) const;
		void reportImpression(android::adservices::adselection::ReportImpressionRequest arg0, JObject arg1, JObject arg2) const;
		void selectAds(android::adservices::adselection::AdSelectionConfig arg0, JObject arg1, JObject arg2) const;
		void selectAds(android::adservices::adselection::AdSelectionFromOutcomesConfig arg0, JObject arg1, JObject arg2) const;
		void setAppInstallAdvertisers(android::adservices::adselection::SetAppInstallAdvertisersRequest arg0, JObject arg1, JObject arg2) const;
		void updateAdCounterHistogram(android::adservices::adselection::UpdateAdCounterHistogramRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::adservices::adselection

