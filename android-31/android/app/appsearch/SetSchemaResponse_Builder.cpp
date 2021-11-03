#include "./SetSchemaResponse.hpp"
#include "./SetSchemaResponse_MigrationFailure.hpp"
#include "../../../JString.hpp"
#include "./SetSchemaResponse_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SetSchemaResponse_Builder::SetSchemaResponse_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SetSchemaResponse_Builder::SetSchemaResponse_Builder()
		: JObject(
			"android.app.appsearch.SetSchemaResponse$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addDeletedType(JString arg0)
	{
		return callObjectMethod(
			"addDeletedType",
			"(Ljava/lang/String;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addDeletedTypes(JObject arg0)
	{
		return callObjectMethod(
			"addDeletedTypes",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addIncompatibleType(JString arg0)
	{
		return callObjectMethod(
			"addIncompatibleType",
			"(Ljava/lang/String;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addIncompatibleTypes(JObject arg0)
	{
		return callObjectMethod(
			"addIncompatibleTypes",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addMigratedType(JString arg0)
	{
		return callObjectMethod(
			"addMigratedType",
			"(Ljava/lang/String;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addMigratedTypes(JObject arg0)
	{
		return callObjectMethod(
			"addMigratedTypes",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addMigrationFailure(android::app::appsearch::SetSchemaResponse_MigrationFailure arg0)
	{
		return callObjectMethod(
			"addMigrationFailure",
			"(Landroid/app/appsearch/SetSchemaResponse$MigrationFailure;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaResponse_Builder SetSchemaResponse_Builder::addMigrationFailures(JObject arg0)
	{
		return callObjectMethod(
			"addMigrationFailures",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::SetSchemaResponse SetSchemaResponse_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SetSchemaResponse;"
		);
	}
} // namespace android::app::appsearch

