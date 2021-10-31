#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BooleanPropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_BooleanPropertyConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BooleanPropertyConfig_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BooleanPropertyConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_BooleanPropertyConfig_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_BooleanPropertyConfig build();
		android::app::appsearch::AppSearchSchema_BooleanPropertyConfig_Builder setCardinality(jint arg0);
	};
} // namespace android::app::appsearch

