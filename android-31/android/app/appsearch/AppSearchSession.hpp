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
	class SetSchemaRequest;
}

namespace android::app::appsearch
{
	class AppSearchSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void getByDocumentId(android::app::appsearch::GetByDocumentIdRequest arg0, JObject arg1, JObject arg2);
		void getNamespaces(JObject arg0, JObject arg1);
		void getSchema(JObject arg0, JObject arg1);
		void getStorageInfo(JObject arg0, JObject arg1);
		void put(android::app::appsearch::PutDocumentsRequest arg0, JObject arg1, JObject arg2);
		void remove(android::app::appsearch::RemoveByDocumentIdRequest arg0, JObject arg1, JObject arg2);
		void remove(jstring arg0, android::app::appsearch::SearchSpec arg1, JObject arg2, JObject arg3);
		void reportUsage(android::app::appsearch::ReportUsageRequest arg0, JObject arg1, JObject arg2);
		android::app::appsearch::SearchResults search(jstring arg0, android::app::appsearch::SearchSpec arg1);
		void setSchema(android::app::appsearch::SetSchemaRequest arg0, JObject arg1, JObject arg2, JObject arg3);
	};
} // namespace android::app::appsearch

