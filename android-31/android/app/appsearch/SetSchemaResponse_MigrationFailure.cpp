#include "./AppSearchResult.hpp"
#include "../../../JString.hpp"
#include "./SetSchemaResponse_MigrationFailure.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SetSchemaResponse_MigrationFailure::SetSchemaResponse_MigrationFailure(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SetSchemaResponse_MigrationFailure::SetSchemaResponse_MigrationFailure(JString arg0, JString arg1, JString arg2, android::app::appsearch::AppSearchResult arg3)
		: JObject(
			"android.app.appsearch.SetSchemaResponse$MigrationFailure",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/appsearch/AppSearchResult;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchResult SetSchemaResponse_MigrationFailure::getAppSearchResult() const
	{
		return callObjectMethod(
			"getAppSearchResult",
			"()Landroid/app/appsearch/AppSearchResult;"
		);
	}
	JString SetSchemaResponse_MigrationFailure::getDocumentId() const
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	JString SetSchemaResponse_MigrationFailure::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	JString SetSchemaResponse_MigrationFailure::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	JString SetSchemaResponse_MigrationFailure::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

