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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContextParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContextParams_Builder(QJniObject obj);
		
		// Constructors
		ContextParams_Builder();
		ContextParams_Builder(android::content::ContextParams arg0);
		
		// Methods
		android::content::ContextParams build();
		android::content::ContextParams_Builder setAttributionTag(JString arg0);
		android::content::ContextParams_Builder setNextAttributionSource(android::content::AttributionSource arg0);
	};
} // namespace android::content

