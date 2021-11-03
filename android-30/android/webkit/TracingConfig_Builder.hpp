#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class TracingConfig;
}

namespace android::webkit
{
	class TracingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TracingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TracingConfig_Builder(QJniObject obj);
		
		// Constructors
		TracingConfig_Builder();
		
		// Methods
		android::webkit::TracingConfig_Builder addCategories(jintArray arg0);
		android::webkit::TracingConfig_Builder addCategories(jarray arg0);
		android::webkit::TracingConfig_Builder addCategories(JObject arg0);
		android::webkit::TracingConfig build();
		android::webkit::TracingConfig_Builder setTracingMode(jint arg0);
	};
} // namespace android::webkit

