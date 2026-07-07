#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::appsearch
{
	class GetSchemaResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetSchemaResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetSchemaResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getPubliclyVisibleSchemas() const;
		JObject getRequiredPermissionsForSchemaTypeVisibility() const;
		JObject getSchemaTypesNotDisplayedBySystem() const;
		JObject getSchemaTypesVisibleToConfigs() const;
		JObject getSchemaTypesVisibleToPackages() const;
		JObject getSchemas() const;
		jint getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

