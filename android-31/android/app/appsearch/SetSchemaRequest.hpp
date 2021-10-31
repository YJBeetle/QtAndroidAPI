#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class SetSchemaRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getMigrators();
		__JniBaseClass getSchemas();
		__JniBaseClass getSchemasNotDisplayedBySystem();
		__JniBaseClass getSchemasVisibleToPackages();
		jint getVersion();
		jboolean isForceOverride();
	};
} // namespace android::app::appsearch

