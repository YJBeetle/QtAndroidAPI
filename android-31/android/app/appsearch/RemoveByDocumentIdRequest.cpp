#include "../../../JString.hpp"
#include "./RemoveByDocumentIdRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject RemoveByDocumentIdRequest::getIds() const
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	JString RemoveByDocumentIdRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

