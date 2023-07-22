#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SetSchemaRequest : public JObject
	{
	public:
		// Fields
		static jint READ_ASSISTANT_APP_SEARCH_DATA();
		static jint READ_CALENDAR();
		static jint READ_CONTACTS();
		static jint READ_EXTERNAL_STORAGE();
		static jint READ_HOME_APP_SEARCH_DATA();
		static jint READ_SMS();
		
		// QJniObject forward
		template<typename ...Ts> explicit SetSchemaRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getMigrators() const;
		JObject getRequiredPermissionsForSchemaTypeVisibility() const;
		JObject getSchemas() const;
		JObject getSchemasNotDisplayedBySystem() const;
		JObject getSchemasVisibleToPackages() const;
		jint getVersion() const;
		jboolean isForceOverride() const;
	};
} // namespace android::app::appsearch

