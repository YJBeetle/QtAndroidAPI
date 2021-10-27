#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification;
}
namespace android::app
{
	class Notification_Builder;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::app
{
	class Notification_Style : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_Style(QAndroidJniObject obj);
		// Constructors
		Notification_Style();
		
		// Methods
		QAndroidJniObject build();
		void setBuilder(android::app::Notification_Builder arg0);
	};
} // namespace android::app

