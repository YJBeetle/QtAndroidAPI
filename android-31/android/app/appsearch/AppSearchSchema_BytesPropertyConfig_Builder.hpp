#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BytesPropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_BytesPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BytesPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BytesPropertyConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_BytesPropertyConfig_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_BytesPropertyConfig build();
		android::app::appsearch::AppSearchSchema_BytesPropertyConfig_Builder setCardinality(jint arg0);
	};
} // namespace android::app::appsearch

