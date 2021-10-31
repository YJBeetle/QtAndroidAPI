#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class AppSearchManager_SearchContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchManager_SearchContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager_SearchContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDatabaseName();
	};
} // namespace android::app::appsearch

