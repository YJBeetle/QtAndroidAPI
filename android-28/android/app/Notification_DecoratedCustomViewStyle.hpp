#pragma once

#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_DecoratedCustomViewStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_DecoratedCustomViewStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_DecoratedCustomViewStyle(QJniObject obj);
		
		// Constructors
		Notification_DecoratedCustomViewStyle();
		
		// Methods
	};
} // namespace android::app

