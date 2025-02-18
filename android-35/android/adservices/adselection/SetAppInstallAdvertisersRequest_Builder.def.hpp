#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class SetAppInstallAdvertisersRequest;
}

namespace android::adservices::adselection
{
	class SetAppInstallAdvertisersRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetAppInstallAdvertisersRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetAppInstallAdvertisersRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SetAppInstallAdvertisersRequest_Builder();
		
		// Methods
		android::adservices::adselection::SetAppInstallAdvertisersRequest build() const;
		android::adservices::adselection::SetAppInstallAdvertisersRequest_Builder setAdvertisers(JObject arg0) const;
	};
} // namespace android::adservices::adselection

