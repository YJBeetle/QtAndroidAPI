#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class AttributionSource;
}
namespace android::content
{
	class ContextParams;
}
class JString;

namespace android::content
{
	class ContextParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContextParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContextParams_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContextParams_Builder();
		ContextParams_Builder(android::content::ContextParams arg0);
		
		// Methods
		android::content::ContextParams build() const;
		android::content::ContextParams_Builder setAttributionTag(JString arg0) const;
		android::content::ContextParams_Builder setNextAttributionSource(android::content::AttributionSource arg0) const;
	};
} // namespace android::content

