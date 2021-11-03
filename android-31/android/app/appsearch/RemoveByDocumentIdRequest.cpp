#include "../../../JString.hpp"
#include "./RemoveByDocumentIdRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	RemoveByDocumentIdRequest::RemoveByDocumentIdRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject RemoveByDocumentIdRequest::getIds()
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	JString RemoveByDocumentIdRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

