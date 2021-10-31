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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_DecoratedMediaCustomViewStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_MediaStyle(className, sig, std::forward<Ts>(agv)...) {}
		Notification_DecoratedMediaCustomViewStyle(QJniObject obj);
		
		// Constructors
		Notification_DecoratedMediaCustomViewStyle();
		
		// Methods
	};
} // namespace android::app

