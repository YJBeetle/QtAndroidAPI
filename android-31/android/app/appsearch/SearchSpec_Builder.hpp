#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class SearchSpec;
}

namespace android::app::appsearch
{
	class SearchSpec_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchSpec_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchSpec_Builder(QAndroidJniObject obj);
		
		// Constructors
		SearchSpec_Builder();
		
		// Methods
		android::app::appsearch::SearchSpec_Builder addFilterNamespaces(jarray arg0);
		android::app::appsearch::SearchSpec_Builder addFilterNamespaces(__JniBaseClass arg0);
		android::app::appsearch::SearchSpec_Builder addFilterPackageNames(jarray arg0);
		android::app::appsearch::SearchSpec_Builder addFilterPackageNames(__JniBaseClass arg0);
		android::app::appsearch::SearchSpec_Builder addFilterSchemas(jarray arg0);
		android::app::appsearch::SearchSpec_Builder addFilterSchemas(__JniBaseClass arg0);
		android::app::appsearch::SearchSpec_Builder addProjection(jstring arg0, __JniBaseClass arg1);
		android::app::appsearch::SearchSpec build();
		android::app::appsearch::SearchSpec_Builder setMaxSnippetSize(jint arg0);
		android::app::appsearch::SearchSpec_Builder setOrder(jint arg0);
		android::app::appsearch::SearchSpec_Builder setRankingStrategy(jint arg0);
		android::app::appsearch::SearchSpec_Builder setResultCountPerPage(jint arg0);
		android::app::appsearch::SearchSpec_Builder setResultGrouping(jint arg0, jint arg1);
		android::app::appsearch::SearchSpec_Builder setSnippetCount(jint arg0);
		android::app::appsearch::SearchSpec_Builder setSnippetCountPerProperty(jint arg0);
		android::app::appsearch::SearchSpec_Builder setTermMatch(jint arg0);
	};
} // namespace android::app::appsearch

