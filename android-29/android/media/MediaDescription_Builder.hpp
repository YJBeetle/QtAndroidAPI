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
		
		MediaDescription_Builder(QAndroidJniObject obj);
		// Constructors
		MediaDescription_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setIconBitmap(android::graphics::Bitmap arg0);
		QAndroidJniObject setIconUri(android::net::Uri arg0);
		QAndroidJniObject setMediaId(jstring arg0);
		QAndroidJniObject setMediaId(const QString &arg0);
		QAndroidJniObject setMediaUri(android::net::Uri arg0);
		QAndroidJniObject setSubtitle(jstring arg0);
		QAndroidJniObject setSubtitle(const QString &arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace android::media

