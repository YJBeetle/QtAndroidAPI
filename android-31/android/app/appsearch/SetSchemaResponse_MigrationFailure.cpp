#include "./AppSearchResult.hpp"
#include "./SetSchemaResponse_MigrationFailure.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SetSchemaResponse_MigrationFailure::SetSchemaResponse_MigrationFailure(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SetSchemaResponse_MigrationFailure::SetSchemaResponse_MigrationFailure(jstring arg0, jstring arg1, jstring arg2, android::app::appsearch::AppSearchResult arg3)
		: __JniBaseClass(
			"android.app.appsearch.SetSchemaResponse$MigrationFailure",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/appsearch/AppSearchResult;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchResult SetSchemaResponse_MigrationFailure::getAppSearchResult()
	{
		return callObjectMethod(
			"getAppSearchResult",
			"()Landroid/app/appsearch/AppSearchResult;"
		);
	}
	jstring SetSchemaResponse_MigrationFailure::getDocumentId()
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SetSchemaResponse_MigrationFailure::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SetSchemaResponse_MigrationFailure::getSchemaType()
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SetSchemaResponse_MigrationFailure::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

