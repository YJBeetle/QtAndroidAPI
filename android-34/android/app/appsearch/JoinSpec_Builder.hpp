#pragma once

#include "./JoinSpec.def.hpp"
#include "./SearchSpec.def.hpp"
#include "../../../JString.hpp"
#include "./JoinSpec_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline JoinSpec_Builder::JoinSpec_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.JoinSpec$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::JoinSpec JoinSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/JoinSpec;"
		);
	}
	inline android::app::appsearch::JoinSpec_Builder JoinSpec_Builder::setAggregationScoringStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setAggregationScoringStrategy",
			"(I)Landroid/app/appsearch/JoinSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::JoinSpec_Builder JoinSpec_Builder::setMaxJoinedResultCount(jint arg0) const
	{
		return callObjectMethod(
			"setMaxJoinedResultCount",
			"(I)Landroid/app/appsearch/JoinSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::JoinSpec_Builder JoinSpec_Builder::setNestedSearch(JString arg0, android::app::appsearch::SearchSpec arg1) const
	{
		return callObjectMethod(
			"setNestedSearch",
			"(Ljava/lang/String;Landroid/app/appsearch/SearchSpec;)Landroid/app/appsearch/JoinSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
