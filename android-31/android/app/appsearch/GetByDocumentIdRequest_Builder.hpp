#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GetByDocumentIdRequest;
}

namespace android::app::appsearch
{
	class GetByDocumentIdRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetByDocumentIdRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetByDocumentIdRequest_Builder(QJniObject obj);
		
		// Constructors
		GetByDocumentIdRequest_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::GetByDocumentIdRequest_Builder addIds(jarray arg0);
		android::app::appsearch::GetByDocumentIdRequest_Builder addIds(JObject arg0);
		android::app::appsearch::GetByDocumentIdRequest_Builder addProjection(jstring arg0, JObject arg1);
		android::app::appsearch::GetByDocumentIdRequest build();
	};
} // namespace android::app::appsearch

