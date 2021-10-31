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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Magnifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Magnifier(QAndroidJniObject obj);
		
		// Constructors
		Magnifier(android::view::View arg0);
		
		// Methods
		void dismiss();
		jfloat getCornerRadius();
		jint getDefaultHorizontalSourceToMagnifierOffset();
		jint getDefaultVerticalSourceToMagnifierOffset();
		jfloat getElevation();
		jint getHeight();
		android::graphics::drawable::Drawable getOverlay();
		android::graphics::Point getPosition();
		jint getSourceHeight();
		android::graphics::Point getSourcePosition();
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

