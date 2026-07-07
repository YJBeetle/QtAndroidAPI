#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class SellerConfiguration;
}

namespace android::adservices::adselection
{
	class SellerConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SellerConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SellerConfiguration_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SellerConfiguration_Builder();
		
		// Methods
		android::adservices::adselection::SellerConfiguration build() const;
		android::adservices::adselection::SellerConfiguration_Builder setMaximumPayloadSizeBytes(jint arg0) const;
		android::adservices::adselection::SellerConfiguration_Builder setPerBuyerConfigurations(JObject arg0) const;
	};
} // namespace android::adservices::adselection

