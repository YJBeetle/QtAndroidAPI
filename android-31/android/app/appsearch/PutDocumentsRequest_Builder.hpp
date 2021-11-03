#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class PutDocumentsRequest;
}

namespace android::app::appsearch
{
	class PutDocumentsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PutDocumentsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PutDocumentsRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		PutDocumentsRequest_Builder();
		
		// Methods
		android::app::appsearch::PutDocumentsRequest_Builder addGenericDocuments(jarray arg0);
		android::app::appsearch::PutDocumentsRequest_Builder addGenericDocuments(JObject arg0);
		android::app::appsearch::PutDocumentsRequest build();
	};
} // namespace android::app::appsearch

