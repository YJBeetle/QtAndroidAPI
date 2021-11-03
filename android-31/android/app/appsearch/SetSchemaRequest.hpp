#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SetSchemaRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getMigrators() const;
		JObject getSchemas() const;
		JObject getSchemasNotDisplayedBySystem() const;
		JObject getSchemasVisibleToPackages() const;
		jint getVersion() const;
		jboolean isForceOverride() const;
	};
} // namespace android::app::appsearch

