#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext;
}

namespace android::app::appsearch
{
	class AppSearchManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void createGlobalSearchSession(__JniBaseClass arg0, __JniBaseClass arg1);
		void createSearchSession(android::app::appsearch::AppSearchManager_SearchContext arg0, __JniBaseClass arg1, __JniBaseClass arg2);
	};
} // namespace android::app::appsearch

