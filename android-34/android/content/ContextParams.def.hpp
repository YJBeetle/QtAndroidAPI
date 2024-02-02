#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class AttributionSource;
}
class JString;

namespace android::content
{
	class ContextParams : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContextParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContextParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getAttributionTag() const;
		android::content::AttributionSource getNextAttributionSource() const;
	};
} // namespace android::content

