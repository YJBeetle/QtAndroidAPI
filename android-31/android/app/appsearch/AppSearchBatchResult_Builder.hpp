#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class AppSearchBatchResult;
}
namespace android::app::appsearch
{
	class AppSearchResult;
}

namespace android::app::appsearch
{
	class AppSearchBatchResult_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchBatchResult_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBatchResult_Builder(QJniObject obj);
		
		// Constructors
		AppSearchBatchResult_Builder();
		
		// Methods
		android::app::appsearch::AppSearchBatchResult build();
		android::app::appsearch::AppSearchBatchResult_Builder setFailure(jobject arg0, jint arg1, jstring arg2);
		android::app::appsearch::AppSearchBatchResult_Builder setResult(jobject arg0, android::app::appsearch::AppSearchResult arg1);
		android::app::appsearch::AppSearchBatchResult_Builder setSuccess(jobject arg0, jobject arg1);
	};
} // namespace android::app::appsearch

