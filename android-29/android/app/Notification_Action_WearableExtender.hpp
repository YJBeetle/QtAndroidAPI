#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification_Action;
}
namespace android::app
{
	class Notification_Action_Builder;
}

namespace android::app
{
	class Notification_Action_WearableExtender : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_Action_WearableExtender(QAndroidJniObject obj);
		// Constructors
		Notification_Action_WearableExtender();
		Notification_Action_WearableExtender(android::app::Notification_Action &arg0);
		
		// Methods
		QAndroidJniObject clone();
		QAndroidJniObject extend(android::app::Notification_Action_Builder arg0);
		jstring getCancelLabel();
		jstring getConfirmLabel();
		jboolean getHintDisplayActionInline();
		jboolean getHintLaunchesActivity();
		jstring getInProgressLabel();
		jboolean isAvailableOffline();
		QAndroidJniObject setAvailableOffline(jboolean arg0);
		QAndroidJniObject setCancelLabel(jstring arg0);
		QAndroidJniObject setCancelLabel(const QString &arg0);
		QAndroidJniObject setConfirmLabel(jstring arg0);
		QAndroidJniObject setConfirmLabel(const QString &arg0);
		QAndroidJniObject setHintDisplayActionInline(jboolean arg0);
		QAndroidJniObject setHintLaunchesActivity(jboolean arg0);
		QAndroidJniObject setInProgressLabel(jstring arg0);
		QAndroidJniObject setInProgressLabel(const QString &arg0);
	};
} // namespace android::app

