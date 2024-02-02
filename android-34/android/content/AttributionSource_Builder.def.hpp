#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class AttributionSource;
}
class JString;

namespace android::content
{
	class AttributionSource_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AttributionSource_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributionSource_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AttributionSource_Builder(android::content::AttributionSource arg0);
		AttributionSource_Builder(jint arg0);
		
		// Methods
		android::content::AttributionSource build() const;
		android::content::AttributionSource_Builder setAttributionTag(JString arg0) const;
		android::content::AttributionSource_Builder setNext(android::content::AttributionSource arg0) const;
		android::content::AttributionSource_Builder setPackageName(JString arg0) const;
		android::content::AttributionSource_Builder setPid(jint arg0) const;
	};
} // namespace android::content

