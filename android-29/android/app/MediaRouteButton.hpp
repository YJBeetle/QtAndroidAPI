#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		MediaRouteButton(QAndroidJniObject obj);
		// Constructors
		MediaRouteButton(android::content::Context &arg0);
		MediaRouteButton(android::content::Context &arg0, __JniBaseClass &arg1);
		MediaRouteButton(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		MediaRouteButton(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		MediaRouteButton() = default;
		
		// Methods
		jint getRouteTypes();
		void jumpDrawablesToCurrentState();
		void onAttachedToWindow();
		void onDetachedFromWindow();
		jboolean performClick();
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
		void setExtendedSettingsClickListener(__JniBaseClass arg0);
		void setRouteTypes(jint arg0);
		void setVisibility(jint arg0);
		void showDialog();
	};
} // namespace android::app

