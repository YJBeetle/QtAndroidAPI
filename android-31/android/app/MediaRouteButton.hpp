#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::app
{
	class MediaRouteButton : public android::view::View
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouteButton(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouteButton(QAndroidJniObject obj);
		
		// Constructors
		MediaRouteButton(android::content::Context arg0);
		MediaRouteButton(android::content::Context arg0, JObject arg1);
		MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2);
		MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint getRouteTypes();
		void jumpDrawablesToCurrentState();
		void onAttachedToWindow();
		void onDetachedFromWindow();
		jboolean performClick();
		void setContentDescription(jstring arg0);
		void setExtendedSettingsClickListener(JObject arg0);
		void setRouteTypes(jint arg0);
		void setVisibility(jint arg0);
		void showDialog();
	};
} // namespace android::app

