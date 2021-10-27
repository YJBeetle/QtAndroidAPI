#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"
#include "./Notification_MediaStyle.hpp"


namespace android::app
{
	class Notification_DecoratedMediaCustomViewStyle : public android::app::Notification_MediaStyle
	{
	public:
		// Fields
		
		Notification_DecoratedMediaCustomViewStyle(QAndroidJniObject obj);
		// Constructors
		Notification_DecoratedMediaCustomViewStyle();
		
		// Methods
	};
} // namespace android::app

