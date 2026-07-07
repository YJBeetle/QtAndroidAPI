#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class PerBuyerConfiguration;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}

namespace android::adservices::adselection
{
	class PerBuyerConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PerBuyerConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PerBuyerConfiguration_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PerBuyerConfiguration_Builder();
		
		// Methods
		android::adservices::adselection::PerBuyerConfiguration build() const;
		android::adservices::adselection::PerBuyerConfiguration_Builder setBuyer(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::adselection::PerBuyerConfiguration_Builder setTargetInputSizeBytes(jint arg0) const;
	};
} // namespace android::adservices::adselection

