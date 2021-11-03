#include "../../../JArray.hpp"
#include "./RemoveByDocumentIdRequest.hpp"
#include "../../../JString.hpp"
#include "./RemoveByDocumentIdRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	RemoveByDocumentIdRequest_Builder::RemoveByDocumentIdRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RemoveByDocumentIdRequest_Builder::RemoveByDocumentIdRequest_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.RemoveByDocumentIdRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::RemoveByDocumentIdRequest_Builder RemoveByDocumentIdRequest_Builder::addIds(JArray arg0)
	{
		return callObjectMethod(
			"addIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/RemoveByDocumentIdRequest$Builder;",
			arg0.object<jarray>()
		);
	}
	android::app::appsearch::RemoveByDocumentIdRequest_Builder RemoveByDocumentIdRequest_Builder::addIds(JObject arg0)
	{
		return callObjectMethod(
			"addIds",
			"(Ljava/util/Collection;)Landroid/app/appsearch/RemoveByDocumentIdRequest$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::RemoveByDocumentIdRequest RemoveByDocumentIdRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/RemoveByDocumentIdRequest;"
		);
	}
} // namespace android::app::appsearch

