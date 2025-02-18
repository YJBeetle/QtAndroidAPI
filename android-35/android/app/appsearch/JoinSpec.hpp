#pragma once

#include "./SearchSpec.def.hpp"
#include "../../os/Parcel.def.hpp"
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
	inline JObject JoinSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.JoinSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint JoinSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
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
	inline void JoinSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
