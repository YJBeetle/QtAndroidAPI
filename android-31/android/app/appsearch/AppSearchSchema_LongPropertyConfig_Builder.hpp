#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_LongPropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_LongPropertyConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_LongPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_LongPropertyConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_LongPropertyConfig_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_LongPropertyConfig build();
		android::app::appsearch::AppSearchSchema_LongPropertyConfig_Builder setCardinality(jint arg0);
	};
} // namespace android::app::appsearch

