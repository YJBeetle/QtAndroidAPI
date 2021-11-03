#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class AppSearchBatchResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchBatchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBatchResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAll();
		JObject getFailures();
		JObject getSuccesses();
		jboolean isSuccess();
		JString toString();
	};
} // namespace android::app::appsearch

