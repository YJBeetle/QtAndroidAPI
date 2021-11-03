#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_DocumentPropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_DocumentPropertyConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DocumentPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DocumentPropertyConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_DocumentPropertyConfig_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::app::appsearch::AppSearchSchema_DocumentPropertyConfig build();
		android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder setCardinality(jint arg0);
		android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder setShouldIndexNestedProperties(jboolean arg0);
	};
} // namespace android::app::appsearch

