#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class Migrator;
}
namespace android::app::appsearch
{
	class PackageIdentifier;
}
namespace android::app::appsearch
{
	class SetSchemaRequest;
}

namespace android::app::appsearch
{
	class SetSchemaRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		SetSchemaRequest_Builder();
		
		// Methods
		android::app::appsearch::SetSchemaRequest_Builder addSchemas(jarray arg0);
		android::app::appsearch::SetSchemaRequest_Builder addSchemas(JObject arg0);
		android::app::appsearch::SetSchemaRequest build();
		android::app::appsearch::SetSchemaRequest_Builder setForceOverride(jboolean arg0);
		android::app::appsearch::SetSchemaRequest_Builder setMigrator(jstring arg0, android::app::appsearch::Migrator arg1);
		android::app::appsearch::SetSchemaRequest_Builder setMigrators(JObject arg0);
		android::app::appsearch::SetSchemaRequest_Builder setSchemaTypeDisplayedBySystem(jstring arg0, jboolean arg1);
		android::app::appsearch::SetSchemaRequest_Builder setSchemaTypeVisibilityForPackage(jstring arg0, jboolean arg1, android::app::appsearch::PackageIdentifier arg2);
		android::app::appsearch::SetSchemaRequest_Builder setVersion(jint arg0);
	};
} // namespace android::app::appsearch

