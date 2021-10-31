#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext;
}

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchManager_SearchContext_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager_SearchContext_Builder(QAndroidJniObject obj);
		
		// Constructors
		AppSearchManager_SearchContext_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchManager_SearchContext build();
	};
} // namespace android::app::appsearch

