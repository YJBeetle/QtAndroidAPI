#pragma once

#include "../../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionOutcome(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionOutcome(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getAdSelectionId() const;
		android::net::Uri getRenderUri() const;
		jint hashCode() const;
	};
} // namespace android::adservices::adselection

