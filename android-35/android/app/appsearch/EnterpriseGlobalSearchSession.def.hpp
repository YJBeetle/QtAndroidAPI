#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GetByDocumentIdRequest;
}
namespace android::app::appsearch
{
	class SearchResults;
}
namespace android::app::appsearch
{
	class SearchSpec;
}
class JString;

namespace android::app::appsearch
{
	class EnterpriseGlobalSearchSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EnterpriseGlobalSearchSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EnterpriseGlobalSearchSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void getByDocumentId(JString arg0, JString arg1, android::app::appsearch::GetByDocumentIdRequest arg2, JObject arg3, JObject arg4) const;
		void getSchema(JString arg0, JString arg1, JObject arg2, JObject arg3) const;
		android::app::appsearch::SearchResults search(JString arg0, android::app::appsearch::SearchSpec arg1) const;
	};
} // namespace android::app::appsearch

