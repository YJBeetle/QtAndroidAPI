#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SetSchemaResponse;
}
namespace android::app::appsearch
{
	class SetSchemaResponse_MigrationFailure;
}

namespace android::app::appsearch
{
	class SetSchemaResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaResponse_Builder(QAndroidJniObject obj);
		
		// Constructors
		SetSchemaResponse_Builder();
		
		// Methods
		android::app::appsearch::SetSchemaResponse_Builder addDeletedType(jstring arg0);
		android::app::appsearch::SetSchemaResponse_Builder addDeletedTypes(JObject arg0);
		android::app::appsearch::SetSchemaResponse_Builder addIncompatibleType(jstring arg0);
		android::app::appsearch::SetSchemaResponse_Builder addIncompatibleTypes(JObject arg0);
		android::app::appsearch::SetSchemaResponse_Builder addMigratedType(jstring arg0);
		android::app::appsearch::SetSchemaResponse_Builder addMigratedTypes(JObject arg0);
		android::app::appsearch::SetSchemaResponse_Builder addMigrationFailure(android::app::appsearch::SetSchemaResponse_MigrationFailure arg0);
		android::app::appsearch::SetSchemaResponse_Builder addMigrationFailures(JObject arg0);
		android::app::appsearch::SetSchemaResponse build();
	};
} // namespace android::app::appsearch

