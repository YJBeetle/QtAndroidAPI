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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter_RouteCategory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter_RouteCategory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getName();
		jstring getName(android::content::Context arg0);
		QAndroidJniObject getRoutes(__JniBaseClass arg0);
		jint getSupportedTypes();
		jboolean isGroupable();
		jstring toString();
	};
} // namespace android::media

