#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GetByDocumentIdRequest;
}
namespace android::app::appsearch
{
	class PutDocumentsRequest;
}
namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest;
}
namespace android::app::appsearch
{
	class ReportUsageRequest;
}
namespace android::app::appsearch
{
	class SearchResults;
}
namespace android::app::appsearch
{
	class SearchSpec;
}
namespace android::app::appsearch
{
	class SearchSuggestionSpec;
}
namespace android::app::appsearch
{
	class SetSchemaRequest;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void getByDocumentId(android::app::appsearch::GetByDocumentIdRequest arg0, JObject arg1, JObject arg2) const;
		void getNamespaces(JObject arg0, JObject arg1) const;
		void getSchema(JObject arg0, JObject arg1) const;
		void getStorageInfo(JObject arg0, JObject arg1) const;
		void put(android::app::appsearch::PutDocumentsRequest arg0, JObject arg1, JObject arg2) const;
		void remove(android::app::appsearch::RemoveByDocumentIdRequest arg0, JObject arg1, JObject arg2) const;
		void remove(JString arg0, android::app::appsearch::SearchSpec arg1, JObject arg2, JObject arg3) const;
		void reportUsage(android::app::appsearch::ReportUsageRequest arg0, JObject arg1, JObject arg2) const;
		android::app::appsearch::SearchResults search(JString arg0, android::app::appsearch::SearchSpec arg1) const;
		void searchSuggestion(JString arg0, android::app::appsearch::SearchSuggestionSpec arg1, JObject arg2, JObject arg3) const;
		void setSchema(android::app::appsearch::SetSchemaRequest arg0, JObject arg1, JObject arg2, JObject arg3) const;
	};
} // namespace android::app::appsearch

