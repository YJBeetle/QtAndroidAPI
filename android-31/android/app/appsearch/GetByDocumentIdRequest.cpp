#include "./GetByDocumentIdRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	jstring GetByDocumentIdRequest::PROJECTION_SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.GetByDocumentIdRequest",
			"PROJECTION_SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	GetByDocumentIdRequest::GetByDocumentIdRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass GetByDocumentIdRequest::getIds()
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	jstring GetByDocumentIdRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass GetByDocumentIdRequest::getProjections()
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::app::appsearch

