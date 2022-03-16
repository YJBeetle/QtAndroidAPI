#include "./PutDocumentsRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject PutDocumentsRequest::getGenericDocuments() const
	{
		return callObjectMethod(
			"getGenericDocuments",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

