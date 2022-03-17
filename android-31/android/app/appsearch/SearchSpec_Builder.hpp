#pragma once

#include "../../../JArray.hpp"
#include "./SearchSpec.def.hpp"
#include "../../../JString.hpp"
#include "./SearchSpec_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchSpec_Builder::SearchSpec_Builder()
		: JObject(
			"android.app.appsearch.SearchSpec$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterNamespaces(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterNamespaces(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPackageNames(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterPackageNames",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPackageNames(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterPackageNames",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterSchemas(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterSchemas(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addProjection(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addProjection",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec SearchSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchSpec;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setMaxSnippetSize(jint arg0) const
	{
		return callObjectMethod(
			"setMaxSnippetSize",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setOrder(jint arg0) const
	{
		return callObjectMethod(
			"setOrder",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setRankingStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setRankingStrategy",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setResultCountPerPage(jint arg0) const
	{
		return callObjectMethod(
			"setResultCountPerPage",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setResultGrouping(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setResultGrouping",
			"(II)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0,
			arg1
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSnippetCount(jint arg0) const
	{
		return callObjectMethod(
			"setSnippetCount",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSnippetCountPerProperty(jint arg0) const
	{
		return callObjectMethod(
			"setSnippetCountPerProperty",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setTermMatch(jint arg0) const
	{
		return callObjectMethod(
			"setTermMatch",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

