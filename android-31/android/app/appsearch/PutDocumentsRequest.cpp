#include "./PutDocumentsRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	PutDocumentsRequest::PutDocumentsRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass PutDocumentsRequest::getGenericDocuments()
	{
		return callObjectMethod(
			"getGenericDocuments",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

