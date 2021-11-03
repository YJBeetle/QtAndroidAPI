#include "./SearchSpec.hpp"
#include "./SearchSpec_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SearchSpec_Builder::SearchSpec_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SearchSpec_Builder::SearchSpec_Builder()
		: JObject(
			"android.app.appsearch.SearchSpec$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterNamespaces(jarray arg0)
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterNamespaces(JObject arg0)
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPackageNames(jarray arg0)
	{
		return callObjectMethod(
			"addFilterPackageNames",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPackageNames(JObject arg0)
	{
		return callObjectMethod(
			"addFilterPackageNames",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterSchemas(jarray arg0)
	{
		return callObjectMethod(
			"addFilterSchemas",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterSchemas(JObject arg0)
	{
		return callObjectMethod(
			"addFilterSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addProjection(jstring arg0, JObject arg1)
	{
		return callObjectMethod(
			"addProjection",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::app::appsearch::SearchSpec SearchSpec_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchSpec;"
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setMaxSnippetSize(jint arg0)
	{
		return callObjectMethod(
			"setMaxSnippetSize",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setOrder(jint arg0)
	{
		return callObjectMethod(
			"setOrder",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setRankingStrategy(jint arg0)
	{
		return callObjectMethod(
			"setRankingStrategy",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setResultCountPerPage(jint arg0)
	{
		return callObjectMethod(
			"setResultCountPerPage",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setResultGrouping(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setResultGrouping",
			"(II)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0,
			arg1
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSnippetCount(jint arg0)
	{
		return callObjectMethod(
			"setSnippetCount",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSnippetCountPerProperty(jint arg0)
	{
		return callObjectMethod(
			"setSnippetCountPerProperty",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setTermMatch(jint arg0)
	{
		return callObjectMethod(
			"setTermMatch",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

