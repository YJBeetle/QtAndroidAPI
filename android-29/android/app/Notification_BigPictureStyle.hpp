#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_BigPictureStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_BigPictureStyle(QJniObject obj);
		
		// Constructors
		Notification_BigPictureStyle();
		Notification_BigPictureStyle(android::app::Notification_Builder arg0);
		
		// Methods
		android::app::Notification_BigPictureStyle bigLargeIcon(android::graphics::Bitmap arg0);
		android::app::Notification_BigPictureStyle bigLargeIcon(android::graphics::drawable::Icon arg0);
		android::app::Notification_BigPictureStyle bigPicture(android::graphics::Bitmap arg0);
		android::app::Notification_BigPictureStyle setBigContentTitle(jstring arg0);
		android::app::Notification_BigPictureStyle setSummaryText(jstring arg0);
	};
} // namespace android::app

