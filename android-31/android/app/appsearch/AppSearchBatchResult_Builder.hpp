#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchBatchResult;
}
namespace android::app::appsearch
{
	class AppSearchResult;
}
class JObject;
class JString;

namespace android::app::appsearch
{
	class AppSearchBatchResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchBatchResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchBatchResult_Builder(QJniObject obj);
		
		// Constructors
		AppSearchBatchResult_Builder();
		
		// Methods
		android::app::appsearch::AppSearchBatchResult build() const;
		android::app::appsearch::AppSearchBatchResult_Builder setFailure(JObject arg0, jint arg1, JString arg2) const;
		android::app::appsearch::AppSearchBatchResult_Builder setResult(JObject arg0, android::app::appsearch::AppSearchResult arg1) const;
		android::app::appsearch::AppSearchBatchResult_Builder setSuccess(JObject arg0, JObject arg1) const;
	};
} // namespace android::app::appsearch

