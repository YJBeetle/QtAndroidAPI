#pragma once

#include "../view/View.def.hpp"

class JIntArray;
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
class JString;

namespace android::app
{
	class MediaRouteButton : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouteButton(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouteButton(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		MediaRouteButton(android::content::Context arg0);
		MediaRouteButton(android::content::Context arg0, JObject arg1);
		MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2);
		MediaRouteButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint getRouteTypes() const;
		void jumpDrawablesToCurrentState() const;
		void onAttachedToWindow() const;
		void onDetachedFromWindow() const;
		jboolean performClick() const;
		void setContentDescription(JString arg0) const;
		void setExtendedSettingsClickListener(JObject arg0) const;
		void setRouteTypes(jint arg0) const;
		void setVisibility(jint arg0) const;
		void showDialog() const;
	};
} // namespace android::app

