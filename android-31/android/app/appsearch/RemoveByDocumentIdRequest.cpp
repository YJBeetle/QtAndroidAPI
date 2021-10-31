#include "./RemoveByDocumentIdRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	RemoveByDocumentIdRequest::RemoveByDocumentIdRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass RemoveByDocumentIdRequest::getIds()
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	jstring RemoveByDocumentIdRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

