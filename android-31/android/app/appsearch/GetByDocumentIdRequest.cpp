#include "../../../JString.hpp"
#include "./GetByDocumentIdRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	JString GetByDocumentIdRequest::PROJECTION_SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.GetByDocumentIdRequest",
			"PROJECTION_SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	GetByDocumentIdRequest::GetByDocumentIdRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject GetByDocumentIdRequest::getIds()
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	JString GetByDocumentIdRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	JObject GetByDocumentIdRequest::getProjections()
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::app::appsearch

