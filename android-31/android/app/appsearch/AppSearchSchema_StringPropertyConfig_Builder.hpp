#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_StringPropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_StringPropertyConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_StringPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_StringPropertyConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_StringPropertyConfig_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_StringPropertyConfig build();
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setCardinality(jint arg0);
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setIndexingType(jint arg0);
		android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder setTokenizerType(jint arg0);
	};
} // namespace android::app::appsearch

