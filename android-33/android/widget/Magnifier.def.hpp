#pragma once

#include "../../JObject.hpp"

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
	class Magnifier : public JObject
	{
	public:
		// Fields
		static jint SOURCE_BOUND_MAX_IN_SURFACE();
		static jint SOURCE_BOUND_MAX_VISIBLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Magnifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Magnifier(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Magnifier(android::view::View arg0);
		
		// Methods
		void dismiss() const;
		jfloat getCornerRadius() const;
		jint getDefaultHorizontalSourceToMagnifierOffset() const;
		jint getDefaultVerticalSourceToMagnifierOffset() const;
		jfloat getElevation() const;
		jint getHeight() const;
		android::graphics::drawable::Drawable getOverlay() const;
		android::graphics::Point getPosition() const;
		jint getSourceHeight() const;
		android::graphics::Point getSourcePosition() const;
		jint getSourceWidth() const;
		jint getWidth() const;
		jfloat getZoom() const;
		jboolean isClippingEnabled() const;
		void setZoom(jfloat arg0) const;
		void show(jfloat arg0, jfloat arg1) const;
		void show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void update() const;
	};
} // namespace android::widget

