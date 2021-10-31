#include "./RemoveByDocumentIdRequest.hpp"
#include "./RemoveByDocumentIdRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	RemoveByDocumentIdRequest_Builder::RemoveByDocumentIdRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RemoveByDocumentIdRequest_Builder::RemoveByDocumentIdRequest_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.appsearch.RemoveByDocumentIdRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::RemoveByDocumentIdRequest_Builder RemoveByDocumentIdRequest_Builder::addIds(jarray arg0)
	{
		return callObjectMethod(
			"addIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/RemoveByDocumentIdRequest$Builder;",
			arg0
		);
	}
	android::app::appsearch::RemoveByDocumentIdRequest_Builder RemoveByDocumentIdRequest_Builder::addIds(__JniBaseClass arg0)
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

