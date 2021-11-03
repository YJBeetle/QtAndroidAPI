#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class SetSchemaRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetSchemaRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getMigrators();
		JObject getSchemas();
		JObject getSchemasNotDisplayedBySystem();
		JObject getSchemasVisibleToPackages();
		jint getVersion();
		jboolean isForceOverride();
	};
} // namespace android::app::appsearch

