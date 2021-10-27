#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"


namespace android::app
{
	class Notification_DecoratedCustomViewStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		Notification_DecoratedCustomViewStyle(QAndroidJniObject obj);
		// Constructors
		Notification_DecoratedCustomViewStyle();
		
		// Methods
	};
} // namespace android::app

