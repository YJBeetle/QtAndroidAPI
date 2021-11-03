#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class AttributionSource;
}

namespace android::content
{
	class ContextParams : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContextParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContextParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getAttributionTag();
		android::content::AttributionSource getNextAttributionSource();
	};
} // namespace android::content

