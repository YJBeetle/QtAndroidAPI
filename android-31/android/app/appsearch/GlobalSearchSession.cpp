#include "./ReportSystemUsageRequest.hpp"
#include "./SearchResults.hpp"
#include "./SearchSpec.hpp"
#include "./GlobalSearchSession.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	GlobalSearchSession::GlobalSearchSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void GlobalSearchSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void GlobalSearchSession::reportSystemUsage(android::app::appsearch::ReportSystemUsageRequest arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"reportSystemUsage",
			"(Landroid/app/appsearch/ReportSystemUsageRequest;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::app::appsearch::SearchResults GlobalSearchSession::search(jstring arg0, android::app::appsearch::SearchSpec arg1)
	{
		return callObjectMethod(
			"search",
			"(Ljava/lang/String;Landroid/app/appsearch/SearchSpec;)Landroid/app/appsearch/SearchResults;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app::appsearch

