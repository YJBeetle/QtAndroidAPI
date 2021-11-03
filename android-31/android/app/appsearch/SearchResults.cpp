#include "./SearchResults.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SearchResults::SearchResults(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void SearchResults::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SearchResults::getNextPage(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"getNextPage",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app::appsearch

