#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class JoinSpec;
}
namespace android::app::appsearch
{
	class SearchSpec;
}
class JString;

namespace android::app::appsearch
{
	class JoinSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JoinSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JoinSpec_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JoinSpec_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::JoinSpec build() const;
		android::app::appsearch::JoinSpec_Builder setAggregationScoringStrategy(jint arg0) const;
		android::app::appsearch::JoinSpec_Builder setMaxJoinedResultCount(jint arg0) const;
		android::app::appsearch::JoinSpec_Builder setNestedSearch(JString arg0, android::app::appsearch::SearchSpec arg1) const;
	};
} // namespace android::app::appsearch

