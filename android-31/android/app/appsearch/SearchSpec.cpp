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
	jstring SearchSpec::PROJECTION_SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.SearchSpec",
			"PROJECTION_SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
		).object<jstring>();
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
	
	// QJniObject forward
	SearchSpec::SearchSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SearchSpec::getFilterNamespaces()
	{
		return callObjectMethod(
			"getFilterNamespaces",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SearchSpec::getFilterPackageNames()
	{
		return callObjectMethod(
			"getFilterPackageNames",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SearchSpec::getFilterSchemas()
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/List;"
		);
	}
	jint SearchSpec::getMaxSnippetSize()
	{
		return callMethod<jint>(
			"getMaxSnippetSize",
			"()I"
		);
	}
	jint SearchSpec::getOrder()
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	__JniBaseClass SearchSpec::getProjections()
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
	jint SearchSpec::getRankingStrategy()
	{
		return callMethod<jint>(
			"getRankingStrategy",
			"()I"
		);
	}
	jint SearchSpec::getResultCountPerPage()
	{
		return callMethod<jint>(
			"getResultCountPerPage",
			"()I"
		);
	}
	jint SearchSpec::getResultGroupingLimit()
	{
		return callMethod<jint>(
			"getResultGroupingLimit",
			"()I"
		);
	}
	jint SearchSpec::getResultGroupingTypeFlags()
	{
		return callMethod<jint>(
			"getResultGroupingTypeFlags",
			"()I"
		);
	}
	jint SearchSpec::getSnippetCount()
	{
		return callMethod<jint>(
			"getSnippetCount",
			"()I"
		);
	}
	jint SearchSpec::getSnippetCountPerProperty()
	{
		return callMethod<jint>(
			"getSnippetCountPerProperty",
			"()I"
		);
	}
	jint SearchSpec::getTermMatch()
	{
		return callMethod<jint>(
			"getTermMatch",
			"()I"
		);
	}
} // namespace android::app::appsearch

