#include "./GetByDocumentIdRequest.hpp"
#include "./GetByDocumentIdRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	GetByDocumentIdRequest_Builder::GetByDocumentIdRequest_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GetByDocumentIdRequest_Builder::GetByDocumentIdRequest_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.appsearch.GetByDocumentIdRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addIds(jarray arg0)
	{
		return callObjectMethod(
			"addIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0
		);
	}
	android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addIds(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"addIds",
			"(Ljava/util/Collection;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::GetByDocumentIdRequest_Builder GetByDocumentIdRequest_Builder::addProjection(jstring arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"addProjection",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/GetByDocumentIdRequest$Builder;",
			arg0,
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

