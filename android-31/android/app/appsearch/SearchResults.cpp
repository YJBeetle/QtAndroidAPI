#include "./SearchResults.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SearchResults::SearchResults(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void SearchResults::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SearchResults::getNextPage(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"getNextPage",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app::appsearch

