#include "./RemoveByDocumentIdRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	RemoveByDocumentIdRequest::RemoveByDocumentIdRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject RemoveByDocumentIdRequest::getIds()
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

