#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class SetAppInstallAdvertisersRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetAppInstallAdvertisersRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetAppInstallAdvertisersRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAdvertisers() const;
	};
} // namespace android::adservices::adselection

