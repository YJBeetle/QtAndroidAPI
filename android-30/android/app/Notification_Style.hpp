#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::app
{
	class Notification_Style : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_Style(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Style(QAndroidJniObject obj);
		
		// Constructors
		Notification_Style();
		
		// Methods
		android::app::Notification build() const;
		void setBuilder(android::app::Notification_Builder arg0) const;
	};
} // namespace android::app

