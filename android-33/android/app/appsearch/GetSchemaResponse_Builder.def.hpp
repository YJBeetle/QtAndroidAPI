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
		
		// Methods
		android::app::appsearch::GetSchemaResponse_Builder addSchema(android::app::appsearch::AppSearchSchema arg0) const;
		android::app::appsearch::GetSchemaResponse_Builder addSchemaTypeNotDisplayedBySystem(JString arg0) const;
		android::app::appsearch::GetSchemaResponse build() const;
		android::app::appsearch::GetSchemaResponse_Builder setRequiredPermissionsForSchemaTypeVisibility(JString arg0, JObject arg1) const;
		android::app::appsearch::GetSchemaResponse_Builder setSchemaTypeVisibleToPackages(JString arg0, JObject arg1) const;
		android::app::appsearch::GetSchemaResponse_Builder setVersion(jint arg0) const;
	};
} // namespace android::app::appsearch

