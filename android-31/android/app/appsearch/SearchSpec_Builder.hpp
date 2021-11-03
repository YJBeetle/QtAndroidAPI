#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app::appsearch
{
	class SearchSpec;
}
class JString;

namespace android::app::appsearch
{
	class SearchSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSpec_Builder(QJniObject obj);
		
		// Constructors
		SearchSpec_Builder();
		
		// Methods
		android::app::appsearch::SearchSpec_Builder addFilterNamespaces(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterNamespaces(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterPackageNames(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterPackageNames(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterSchemas(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterSchemas(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addProjection(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec build() const;
		android::app::appsearch::SearchSpec_Builder setMaxSnippetSize(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setOrder(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setRankingStrategy(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setResultCountPerPage(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setResultGrouping(jint arg0, jint arg1) const;
		android::app::appsearch::SearchSpec_Builder setSnippetCount(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setSnippetCountPerProperty(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setTermMatch(jint arg0) const;
	};
} // namespace android::app::appsearch

