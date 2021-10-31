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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_Style(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Style(QAndroidJniObject obj);
		
		// Constructors
		Notification_Style();
		
		// Methods
		android::app::Notification build();
		void setBuilder(android::app::Notification_Builder arg0);
	};
} // namespace android::app

