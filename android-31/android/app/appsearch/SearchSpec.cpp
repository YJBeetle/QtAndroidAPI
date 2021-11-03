#include "../../../JString.hpp"
#include "./SearchSpec.hpp"

namespace android::app::appsearch
{
	// Fields
	jint SearchSpec::GROUPING_TYPE_PER_NAMESPACE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"GROUPING_TYPE_PER_NAMESPACE"
		);
	}
	jint SearchSpec::GROUPING_TYPE_PER_PACKAGE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"GROUPING_TYPE_PER_PACKAGE"
		);
	}
	jint SearchSpec::ORDER_ASCENDING()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"ORDER_ASCENDING"
		);
	}
	jint SearchSpec::ORDER_DESCENDING()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"ORDER_DESCENDING"
		);
	}
	JString SearchSpec::PROJECTION_SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.SearchSpec",
			"PROJECTION_SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_CREATION_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_CREATION_TIMESTAMP"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_DOCUMENT_SCORE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_DOCUMENT_SCORE"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_NONE"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_RELEVANCE_SCORE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_RELEVANCE_SCORE"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_SYSTEM_USAGE_COUNT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_SYSTEM_USAGE_COUNT"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_SYSTEM_USAGE_LAST_USED_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_SYSTEM_USAGE_LAST_USED_TIMESTAMP"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_USAGE_COUNT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_USAGE_COUNT"
		);
	}
	jint SearchSpec::RANKING_STRATEGY_USAGE_LAST_USED_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_USAGE_LAST_USED_TIMESTAMP"
		);
	}
	jint SearchSpec::TERM_MATCH_EXACT_ONLY()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"TERM_MATCH_EXACT_ONLY"
		);
	}
	jint SearchSpec::TERM_MATCH_PREFIX()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"TERM_MATCH_PREFIX"
		);
	}
	
	// QAndroidJniObject forward
	SearchSpec::SearchSpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SearchSpec::getFilterNamespaces() const
	{
		return callObjectMethod(
			"getFilterNamespaces",
			"()Ljava/util/List;"
		);
	}
	JObject SearchSpec::getFilterPackageNames() const
	{
		return callObjectMethod(
			"getFilterPackageNames",
			"()Ljava/util/List;"
		);
	}
	JObject SearchSpec::getFilterSchemas() const
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/List;"
		);
	}
	jint SearchSpec::getMaxSnippetSize() const
	{
		return callMethod<jint>(
			"getMaxSnippetSize",
			"()I"
		);
	}
	jint SearchSpec::getOrder() const
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	JObject SearchSpec::getProjections() const
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
	jint SearchSpec::getRankingStrategy() const
	{
		return callMethod<jint>(
			"getRankingStrategy",
			"()I"
		);
	}
	jint SearchSpec::getResultCountPerPage() const
	{
		return callMethod<jint>(
			"getResultCountPerPage",
			"()I"
		);
	}
	jint SearchSpec::getResultGroupingLimit() const
	{
		return callMethod<jint>(
			"getResultGroupingLimit",
			"()I"
		);
	}
	jint SearchSpec::getResultGroupingTypeFlags() const
	{
		return callMethod<jint>(
			"getResultGroupingTypeFlags",
			"()I"
		);
	}
	jint SearchSpec::getSnippetCount() const
	{
		return callMethod<jint>(
			"getSnippetCount",
			"()I"
		);
	}
	jint SearchSpec::getSnippetCountPerProperty() const
	{
		return callMethod<jint>(
			"getSnippetCountPerProperty",
			"()I"
		);
	}
	jint SearchSpec::getTermMatch() const
	{
		return callMethod<jint>(
			"getTermMatch",
			"()I"
		);
	}
} // namespace android::app::appsearch

