#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionOutcome;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::adselection
{
	class AdSelectionOutcome_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionOutcome_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionOutcome_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdSelectionOutcome_Builder();
		
		// Methods
		android::adservices::adselection::AdSelectionOutcome build() const;
		android::adservices::adselection::AdSelectionOutcome_Builder setAdSelectionId(jlong arg0) const;
		android::adservices::adselection::AdSelectionOutcome_Builder setRenderUri(android::net::Uri arg0) const;
	};
} // namespace android::adservices::adselection

