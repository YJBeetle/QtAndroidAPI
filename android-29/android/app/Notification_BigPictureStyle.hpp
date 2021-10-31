#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_Builder;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app
{
	class Notification_BigPictureStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		Notification_BigPictureStyle(QAndroidJniObject obj);
		// Constructors
		Notification_BigPictureStyle();
		Notification_BigPictureStyle(android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject bigLargeIcon(android::graphics::Bitmap arg0);
		QAndroidJniObject bigLargeIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject bigPicture(android::graphics::Bitmap arg0);
		QAndroidJniObject setBigContentTitle(jstring arg0);
		QAndroidJniObject setSummaryText(jstring arg0);
	};
} // namespace android::app

