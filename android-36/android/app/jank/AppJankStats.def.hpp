#pragma once

#include "../../../JObject.hpp"

namespace android::app::jank
{
	class RelativeFrameTimeHistogram;
}
class JString;

namespace android::app::jank
{
	class AppJankStats : public JObject
	{
	public:
		// Fields
		static JString WIDGET_CATEGORY_ANIMATION();
		static JString WIDGET_CATEGORY_KEYBOARD();
		static JString WIDGET_CATEGORY_MEDIA();
		static JString WIDGET_CATEGORY_NAVIGATION();
		static JString WIDGET_CATEGORY_OTHER();
		static JString WIDGET_CATEGORY_SCROLL();
		static JString WIDGET_CATEGORY_UNSPECIFIED();
		static JString WIDGET_STATE_ANIMATING();
		static JString WIDGET_STATE_DRAGGING();
		static JString WIDGET_STATE_FLINGING();
		static JString WIDGET_STATE_NONE();
		static JString WIDGET_STATE_PLAYBACK();
		static JString WIDGET_STATE_PREDICTIVE_BACK();
		static JString WIDGET_STATE_SCROLLING();
		static JString WIDGET_STATE_SWIPING();
		static JString WIDGET_STATE_TAPPING();
		static JString WIDGET_STATE_UNSPECIFIED();
		static JString WIDGET_STATE_ZOOMING();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppJankStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppJankStats(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppJankStats(jint arg0, JString arg1, JString arg2, JString arg3, JString arg4, jlong arg5, jlong arg6, android::app::jank::RelativeFrameTimeHistogram arg7);
		
		// Methods
		jlong getJankyFrameCount() const;
		JString getNavigationComponent() const;
		android::app::jank::RelativeFrameTimeHistogram getRelativeFrameTimeHistogram() const;
		jlong getTotalFrameCount() const;
		jint getUid() const;
		JString getWidgetCategory() const;
		JString getWidgetId() const;
		JString getWidgetState() const;
	};
} // namespace android::app::jank

