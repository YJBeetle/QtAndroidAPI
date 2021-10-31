#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class AppSearchBatchResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchBatchResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBatchResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getAll();
		__JniBaseClass getFailures();
		__JniBaseClass getSuccesses();
		jboolean isSuccess();
		jstring toString();
	};
} // namespace android::app::appsearch

