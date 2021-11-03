#include "./PutDocumentsRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	PutDocumentsRequest::PutDocumentsRequest(QJniObject obj) : JObject(obj) {}
	
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

