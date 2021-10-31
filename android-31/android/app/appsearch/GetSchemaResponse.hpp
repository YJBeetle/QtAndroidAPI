#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class GetSchemaResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GetSchemaResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GetSchemaResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getSchemas();
		jint getVersion();
	};
} // namespace android::app::appsearch

