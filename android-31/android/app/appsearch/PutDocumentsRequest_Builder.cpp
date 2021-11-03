#include "./PutDocumentsRequest.hpp"
#include "./PutDocumentsRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	PutDocumentsRequest_Builder::PutDocumentsRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PutDocumentsRequest_Builder::PutDocumentsRequest_Builder()
		: JObject(
			"android.app.appsearch.PutDocumentsRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::PutDocumentsRequest_Builder PutDocumentsRequest_Builder::addGenericDocuments(jarray arg0)
	{
		return callObjectMethod(
			"addGenericDocuments",
			"([Landroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/PutDocumentsRequest$Builder;",
			arg0
		);
	}
	android::app::appsearch::PutDocumentsRequest_Builder PutDocumentsRequest_Builder::addGenericDocuments(JObject arg0)
	{
		return callObjectMethod(
			"addGenericDocuments",
			"(Ljava/util/Collection;)Landroid/app/appsearch/PutDocumentsRequest$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::PutDocumentsRequest PutDocumentsRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/PutDocumentsRequest;"
		);
	}
} // namespace android::app::appsearch

