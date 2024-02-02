#pragma once

#include "./SearchSpec.def.hpp"
#include "../../../JString.hpp"
#include "./JoinSpec.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint JoinSpec::AGGREGATION_SCORING_AVG_RANKING_SIGNAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.JoinSpec",
			"AGGREGATION_SCORING_AVG_RANKING_SIGNAL"
		);
	}
	inline jint JoinSpec::AGGREGATION_SCORING_MAX_RANKING_SIGNAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.JoinSpec",
			"AGGREGATION_SCORING_MAX_RANKING_SIGNAL"
		);
	}
	inline jint JoinSpec::AGGREGATION_SCORING_MIN_RANKING_SIGNAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.JoinSpec",
			"AGGREGATION_SCORING_MIN_RANKING_SIGNAL"
		);
	}
	inline jint JoinSpec::AGGREGATION_SCORING_OUTER_RESULT_RANKING_SIGNAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.JoinSpec",
			"AGGREGATION_SCORING_OUTER_RESULT_RANKING_SIGNAL"
		);
	}
	inline jint JoinSpec::AGGREGATION_SCORING_RESULT_COUNT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.JoinSpec",
			"AGGREGATION_SCORING_RESULT_COUNT"
		);
	}
	inline jint JoinSpec::AGGREGATION_SCORING_SUM_RANKING_SIGNAL()
	{
		return getStaticField<jint>(
			"android.app.appsearch.JoinSpec",
			"AGGREGATION_SCORING_SUM_RANKING_SIGNAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint JoinSpec::getAggregationScoringStrategy() const
	{
		return callMethod<jint>(
			"getAggregationScoringStrategy",
			"()I"
		);
	}
	inline JString JoinSpec::getChildPropertyExpression() const
	{
		return callObjectMethod(
			"getChildPropertyExpression",
			"()Ljava/lang/String;"
		);
	}
	inline jint JoinSpec::getMaxJoinedResultCount() const
	{
		return callMethod<jint>(
			"getMaxJoinedResultCount",
			"()I"
		);
	}
	inline JString JoinSpec::getNestedQuery() const
	{
		return callObjectMethod(
			"getNestedQuery",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::appsearch::SearchSpec JoinSpec::getNestedSearchSpec() const
	{
		return callObjectMethod(
			"getNestedSearchSpec",
			"()Landroid/app/appsearch/SearchSpec;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
