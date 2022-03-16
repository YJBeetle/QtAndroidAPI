#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Notification_Action;
}
namespace android::app
{
	class Notification_Action_Builder;
}
class JString;
class JObject;

namespace android::app
{
	class Notification_Action_WearableExtender : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_Action_WearableExtender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Action_WearableExtender(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Notification_Action_WearableExtender();
		Notification_Action_WearableExtender(android::app::Notification_Action arg0);
		
		// Methods
		android::app::Notification_Action_WearableExtender clone() const;
		android::app::Notification_Action_Builder extend(android::app::Notification_Action_Builder arg0) const;
		JString getCancelLabel() const;
		JString getConfirmLabel() const;
		jboolean getHintDisplayActionInline() const;
		jboolean getHintLaunchesActivity() const;
		JString getInProgressLabel() const;
		jboolean isAvailableOffline() const;
		android::app::Notification_Action_WearableExtender setAvailableOffline(jboolean arg0) const;
		android::app::Notification_Action_WearableExtender setCancelLabel(JString arg0) const;
		android::app::Notification_Action_WearableExtender setConfirmLabel(JString arg0) const;
		android::app::Notification_Action_WearableExtender setHintDisplayActionInline(jboolean arg0) const;
		android::app::Notification_Action_WearableExtender setHintLaunchesActivity(jboolean arg0) const;
		android::app::Notification_Action_WearableExtender setInProgressLabel(JString arg0) const;
	};
} // namespace android::app

