#include "./AppSearchManager_SearchContext.hpp"
#include "./AppSearchManager.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchManager::AppSearchManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void AppSearchManager::createGlobalSearchSession(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"createGlobalSearchSession",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AppSearchManager::createSearchSession(android::app::appsearch::AppSearchManager_SearchContext arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"createSearchSession",
			"(Landroid/app/appsearch/AppSearchManager$SearchContext;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app::appsearch

