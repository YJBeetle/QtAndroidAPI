#include "./PutDocumentsRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	PutDocumentsRequest::PutDocumentsRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject PutDocumentsRequest::getGenericDocuments()
	{
		return callObjectMethod(
			"getGenericDocuments",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

