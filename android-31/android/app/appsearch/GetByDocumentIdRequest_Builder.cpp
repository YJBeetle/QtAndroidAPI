#include "../../../JArray.hpp"
#include "./GetByDocumentIdRequest.hpp"
#include "../../../JString.hpp"
#include "./GetByDocumentIdRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	GetByDocumentIdRequest_Builder::GetByDocumentIdRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GetByDocumentIdRequest_Builder::GetByDocumentIdRequest_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.GetByDocumentIdRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addIds(JArray arg0)
	{
		return callObjectMethod(
			"addIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object<jarray>()
		);
	}
	android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addIds(JObject arg0)
	{
		return callObjectMethod(
			"addIds",
			"(Ljava/util/Collection;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addProjection(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"addProjection",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::app::appsearch::GetByDocumentIdRequest GetByDocumentIdRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/GetByDocumentIdRequest;"
		);
	}
} // namespace android::app::appsearch

