#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchSpec;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appsearch
{
	class JoinSpec : public JObject
	{
	public:
		// Fields
		static jint AGGREGATION_SCORING_AVG_RANKING_SIGNAL();
		static jint AGGREGATION_SCORING_MAX_RANKING_SIGNAL();
		static jint AGGREGATION_SCORING_MIN_RANKING_SIGNAL();
		static jint AGGREGATION_SCORING_OUTER_RESULT_RANKING_SIGNAL();
		static jint AGGREGATION_SCORING_RESULT_COUNT();
		static jint AGGREGATION_SCORING_SUM_RANKING_SIGNAL();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit JoinSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JoinSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getAggregationScoringStrategy() const;
		JString getChildPropertyExpression() const;
		jint getMaxJoinedResultCount() const;
		JString getNestedQuery() const;
		android::app::appsearch::SearchSpec getNestedSearchSpec() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

