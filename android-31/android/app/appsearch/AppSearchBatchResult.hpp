#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class AppSearchBatchResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchBatchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBatchResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAll();
		JObject getFailures();
		JObject getSuccesses();
		jboolean isSuccess();
		jstring toString();
	};
} // namespace android::app::appsearch

