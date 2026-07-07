#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdTechIdentifier;
}
namespace android::net
{
	class Uri;
}
class JObject;

namespace android::adservices::adselection
{
	class AdSelectionOutcome : public JObject
	{
	public:
		// Fields
		static android::adservices::adselection::AdSelectionOutcome NO_OUTCOME();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionOutcome(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionOutcome(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getAdSelectionId() const;
		JObject getComponentAdUris() const;
		android::net::Uri getRenderUri() const;
		android::adservices::common::AdTechIdentifier getWinningSeller() const;
		jboolean hasOutcome() const;
		jint hashCode() const;
	};
} // namespace android::adservices::adselection

