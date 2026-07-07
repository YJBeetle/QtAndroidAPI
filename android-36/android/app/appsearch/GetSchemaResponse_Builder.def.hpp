#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema;
}
namespace android::app::appsearch
{
	class GetSchemaResponse;
}
namespace android::app::appsearch
{
	class PackageIdentifier;
}
class JString;

namespace android::app::appsearch
{
	class GetSchemaResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetSchemaResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetSchemaResponse_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetSchemaResponse_Builder();
		GetSchemaResponse_Builder(android::app::appsearch::GetSchemaResponse arg0);
		
		// Methods
		android::app::appsearch::GetSchemaResponse_Builder addSchema(android::app::appsearch::AppSearchSchema arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder addSchemaTypeNotDisplayedBySystem(JString arg0) const;
		android::app::appsearch::GetSchemaResponse build() const;
		android::app::appsearch::GetSchemaResponse_Builder clearPubliclyVisibleSchema(JString arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder clearRequiredPermissionsForSchemaTypeVisibility(JString arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder clearSchemaTypeNotDisplayedBySystem(JString arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder clearSchemaTypeVisibleToConfigs(JString arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder clearSchemaTypeVisibleToPackages(JString arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder clearSchemas() const;
		android::app::appsearch::GetSchemaResponse_Builder setPubliclyVisibleSchema(JString arg0, android::app::appsearch::PackageIdentifier arg1) const;
		android::app::appsearch::GetSchemaResponse_Builder setRequiredPermissionsForSchemaTypeVisibility(JString arg0, JObject arg1) const;
		android::app::appsearch::GetSchemaResponse_Builder setSchemaTypeVisibleToConfigs(JString arg0, JObject arg1) const;
		android::app::appsearch::GetSchemaResponse_Builder setSchemaTypeVisibleToPackages(JString arg0, JObject arg1) const;
		android::app::appsearch::GetSchemaResponse_Builder setVersion(jint arg0) const;
	};
} // namespace android::app::appsearch

