#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GetSchemaResponse : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetSchemaResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetSchemaResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getSchemas() const;
		jint getVersion() const;
	};
} // namespace android::app::appsearch

