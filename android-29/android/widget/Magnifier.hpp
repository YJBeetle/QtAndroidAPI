#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class Magnifier : public __JniBaseClass
	{
	public:
		// Fields
		static jint SOURCE_BOUND_MAX_IN_SURFACE();
		static jint SOURCE_BOUND_MAX_VISIBLE();
		
		Magnifier(QAndroidJniObject obj);
		// Constructors
		Magnifier(android::view::View &arg0);
		Magnifier() = default;
		
		// Methods
		void dismiss();
		jfloat getCornerRadius();
		jint getDefaultHorizontalSourceToMagnifierOffset();
		jint getDefaultVerticalSourceToMagnifierOffset();
		jfloat getElevation();
		jint getHeight();
		QAndroidJniObject getOverlay();
		QAndroidJniObject getPosition();
		jint getSourceHeight();
		QAndroidJniObject getSourcePosition();
		jint getSourceWidth();
		jint getWidth();
		jfloat getZoom();
		jboolean isClippingEnabled();
		void setZoom(jfloat arg0);
		void show(jfloat arg0, jfloat arg1);
		void show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void update();
	};
} // namespace android::widget

