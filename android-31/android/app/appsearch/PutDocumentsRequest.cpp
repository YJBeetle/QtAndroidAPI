#include "./PutDocumentsRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	PutDocumentsRequest::PutDocumentsRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

