#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdTechIdentifier;
}
class JObject;
class JString;

namespace android::adservices::adselection
{
	class UpdateAdCounterHistogramRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UpdateAdCounterHistogramRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UpdateAdCounterHistogramRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getAdEventType() const;
		jlong getAdSelectionId() const;
		android::adservices::common::AdTechIdentifier getCallerAdTech() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::adservices::adselection

