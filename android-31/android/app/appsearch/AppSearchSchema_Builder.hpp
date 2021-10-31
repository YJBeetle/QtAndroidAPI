#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema;
}
namespace android::app::appsearch
{
	class AppSearchSchema_PropertyConfig;
}

namespace android::app::appsearch
{
	class AppSearchSchema_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchSchema_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchSchema_Builder addProperty(android::app::appsearch::AppSearchSchema_PropertyConfig arg0);
		android::app::appsearch::AppSearchSchema build();
	};
} // namespace android::app::appsearch

