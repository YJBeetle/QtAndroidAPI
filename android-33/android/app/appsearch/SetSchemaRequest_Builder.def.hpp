#pragma once

#include "../../../JObject.hpp"

class JArray;
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
class JString;

namespace android::app::appsearch
{
	class SetSchemaRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SetSchemaRequest_Builder();
		
		// Methods
		android::app::appsearch::SetSchemaRequest_Builder addRequiredPermissionsForSchemaTypeVisibility(JString arg0, JObject arg1) const;
		android::app::appsearch::SetSchemaRequest_Builder addSchemas(JArray arg0) const;
		android::app::appsearch::SetSchemaRequest_Builder addSchemas(JObject arg0) const;
		android::app::appsearch::SetSchemaRequest build() const;
		android::app::appsearch::SetSchemaRequest_Builder clearRequiredPermissionsForSchemaTypeVisibility(JString arg0) const;
		android::app::appsearch::SetSchemaRequest_Builder setForceOverride(jboolean arg0) const;
		android::app::appsearch::SetSchemaRequest_Builder setMigrator(JString arg0, android::app::appsearch::Migrator arg1) const;
		android::app::appsearch::SetSchemaRequest_Builder setMigrators(JObject arg0) const;
		android::app::appsearch::SetSchemaRequest_Builder setSchemaTypeDisplayedBySystem(JString arg0, jboolean arg1) const;
		android::app::appsearch::SetSchemaRequest_Builder setSchemaTypeVisibilityForPackage(JString arg0, jboolean arg1, android::app::appsearch::PackageIdentifier arg2) const;
		android::app::appsearch::SetSchemaRequest_Builder setVersion(jint arg0) const;
	};
} // namespace android::app::appsearch

