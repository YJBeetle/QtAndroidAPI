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
namespace android::app
{
	class PendingIntent;
}
class JString;

namespace android::app
{
	class Notification_TvExtender : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_TvExtender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_TvExtender(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Notification_TvExtender();
		Notification_TvExtender(android::app::Notification arg0);
		
		// Methods
		android::app::Notification_Builder extend(android::app::Notification_Builder arg0) const;
		JString getChannelId() const;
		android::app::PendingIntent getContentIntent() const;
		android::app::PendingIntent getDeleteIntent() const;
		jboolean isAvailableOnTv() const;
		jboolean isSuppressShowOverApps() const;
		android::app::Notification_TvExtender setChannelId(JString arg0) const;
		android::app::Notification_TvExtender setContentIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_TvExtender setDeleteIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_TvExtender setSuppressShowOverApps(jboolean arg0) const;
	};
} // namespace android::app

