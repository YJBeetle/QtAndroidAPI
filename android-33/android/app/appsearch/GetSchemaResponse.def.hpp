#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GetSchemaResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetSchemaResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetSchemaResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getRequiredPermissionsForSchemaTypeVisibility() const;
		JObject getSchemaTypesNotDisplayedBySystem() const;
		JObject getSchemaTypesVisibleToPackages() const;
		JObject getSchemas() const;
		jint getVersion() const;
	};
} // namespace android::app::appsearch

