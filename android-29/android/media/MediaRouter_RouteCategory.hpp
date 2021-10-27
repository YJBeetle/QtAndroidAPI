#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::media
{
	class MediaRouter_RouteCategory : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaRouter_RouteCategory(QAndroidJniObject obj);
		// Constructors
		MediaRouter_RouteCategory() = default;
		
		// Methods
		jstring getName();
		jstring getName(android::content::Context arg0);
		QAndroidJniObject getRoutes(__JniBaseClass arg0);
		jint getSupportedTypes();
		jboolean isGroupable();
		jstring toString();
	};
} // namespace android::media

