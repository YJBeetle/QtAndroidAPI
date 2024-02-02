#pragma once

#include "../../../JArray.hpp"
#include "./SearchSuggestionSpec.def.hpp"
#include "../../../JString.hpp"
#include "./SearchSuggestionSpec_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchSuggestionSpec_Builder::SearchSuggestionSpec_Builder(jint arg0)
		: JObject(
			"android.app.appsearch.SearchSuggestionSpec$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::addFilterDocumentIds(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"addFilterDocumentIds",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::addFilterDocumentIds(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addFilterDocumentIds",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::addFilterNamespaces(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::addFilterNamespaces(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::addFilterSchemas(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::addFilterSchemas(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec SearchSuggestionSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchSuggestionSpec;"
		);
	}
	inline android::app::appsearch::SearchSuggestionSpec_Builder SearchSuggestionSpec_Builder::setRankingStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setRankingStrategy",
			"(I)Landroid/app/appsearch/SearchSuggestionSpec$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
