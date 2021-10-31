#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class ActivityOptions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_USAGE_TIME_REPORT();
		static jstring EXTRA_USAGE_TIME_REPORT_PACKAGES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityOptions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActivityOptions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject makeBasic();
		static QAndroidJniObject makeClipRevealAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject makeCustomAnimation(android::content::Context arg0, jint arg1, jint arg2);
		static QAndroidJniObject makeScaleUpAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject makeSceneTransitionAnimation(android::app::Activity arg0, jarray arg1);
		static QAndroidJniObject makeSceneTransitionAnimation(android::app::Activity arg0, android::view::View arg1, jstring arg2);
		static QAndroidJniObject makeTaskLaunchBehind();
		static QAndroidJniObject makeThumbnailScaleUpAnimation(android::view::View arg0, android::graphics::Bitmap arg1, jint arg2, jint arg3);
		QAndroidJniObject getLaunchBounds();
		jint getLaunchDisplayId();
		jboolean getLockTaskMode();
		void requestUsageTimeReport(android::app::PendingIntent arg0);
		QAndroidJniObject setAppVerificationBundle(android::os::Bundle arg0);
		QAndroidJniObject setLaunchBounds(android::graphics::Rect arg0);
		QAndroidJniObject setLaunchDisplayId(jint arg0);
		QAndroidJniObject setLockTaskEnabled(jboolean arg0);
		QAndroidJniObject toBundle();
		jstring toString();
		void update(android::app::ActivityOptions arg0);
	};
} // namespace android::app

