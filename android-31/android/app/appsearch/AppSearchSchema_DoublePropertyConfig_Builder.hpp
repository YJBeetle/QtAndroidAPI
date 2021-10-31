#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_DoublePropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_DoublePropertyConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DoublePropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DoublePropertyConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_DoublePropertyConfig_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_DoublePropertyConfig build();
		android::app::appsearch::AppSearchSchema_DoublePropertyConfig_Builder setCardinality(jint arg0);
	};
} // namespace android::app::appsearch

