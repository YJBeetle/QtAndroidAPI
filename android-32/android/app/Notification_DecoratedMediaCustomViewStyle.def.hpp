#pragma once

#include "./Notification_MediaStyle.def.hpp"

namespace android::app
{
	class Notification_DecoratedMediaCustomViewStyle : public android::app::Notification_MediaStyle
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_DecoratedMediaCustomViewStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_MediaStyle(className, sig, std::forward<Ts>(agv)...) {}
		Notification_DecoratedMediaCustomViewStyle(QAndroidJniObject obj) : android::app::Notification_MediaStyle(obj) {}
		
		// Constructors
		Notification_DecoratedMediaCustomViewStyle();
		
		// Methods
	};
} // namespace android::app

