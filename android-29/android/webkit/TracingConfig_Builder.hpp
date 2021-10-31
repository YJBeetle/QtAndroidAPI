#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class TracingConfig;
}

namespace android::webkit
{
	class TracingConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TracingConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TracingConfig_Builder(QJniObject obj);
		
		// Constructors
		TracingConfig_Builder();
		
		// Methods
		android::webkit::TracingConfig_Builder addCategories(jintArray arg0);
		android::webkit::TracingConfig_Builder addCategories(jarray arg0);
		android::webkit::TracingConfig_Builder addCategories(__JniBaseClass arg0);
		android::webkit::TracingConfig build();
		android::webkit::TracingConfig_Builder setTracingMode(jint arg0);
	};
} // namespace android::webkit

