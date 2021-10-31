#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::media
{
	class MediaDescription;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDescription_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDescription_Builder(QAndroidJniObject obj);
		
		// Constructors
		MediaDescription_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setIconBitmap(android::graphics::Bitmap arg0);
		QAndroidJniObject setIconUri(android::net::Uri arg0);
		QAndroidJniObject setMediaId(jstring arg0);
		QAndroidJniObject setMediaUri(android::net::Uri arg0);
		QAndroidJniObject setSubtitle(jstring arg0);
		QAndroidJniObject setTitle(jstring arg0);
	};
} // namespace android::media

