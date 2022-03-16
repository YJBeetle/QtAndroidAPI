#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::app
{
	class ActivityOptions : public JObject
	{
	public:
		// Fields
		static JString EXTRA_USAGE_TIME_REPORT();
		static JString EXTRA_USAGE_TIME_REPORT_PACKAGES();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::app::ActivityOptions makeBasic();
		static android::app::ActivityOptions makeClipRevealAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static android::app::ActivityOptions makeCustomAnimation(android::content::Context arg0, jint arg1, jint arg2);
		static android::app::ActivityOptions makeScaleUpAnimation(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static android::app::ActivityOptions makeSceneTransitionAnimation(android::app::Activity arg0, JArray arg1);
		static android::app::ActivityOptions makeSceneTransitionAnimation(android::app::Activity arg0, android::view::View arg1, JString arg2);
		static android::app::ActivityOptions makeTaskLaunchBehind();
		static android::app::ActivityOptions makeThumbnailScaleUpAnimation(android::view::View arg0, android::graphics::Bitmap arg1, jint arg2, jint arg3);
		android::graphics::Rect getLaunchBounds() const;
		jint getLaunchDisplayId() const;
		jboolean getLockTaskMode() const;
		void requestUsageTimeReport(android::app::PendingIntent arg0) const;
		android::app::ActivityOptions setAppVerificationBundle(android::os::Bundle arg0) const;
		android::app::ActivityOptions setLaunchBounds(android::graphics::Rect arg0) const;
		android::app::ActivityOptions setLaunchDisplayId(jint arg0) const;
		android::app::ActivityOptions setLockTaskEnabled(jboolean arg0) const;
		android::os::Bundle toBundle() const;
		JString toString() const;
		void update(android::app::ActivityOptions arg0) const;
	};
} // namespace android::app

