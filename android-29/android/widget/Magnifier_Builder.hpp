#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Magnifier;
}

namespace android::widget
{
	class Magnifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Magnifier_Builder(QAndroidJniObject obj);
		// Constructors
		Magnifier_Builder(android::view::View arg0);
		Magnifier_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setClippingEnabled(jboolean arg0);
		QAndroidJniObject setCornerRadius(jfloat arg0);
		QAndroidJniObject setDefaultSourceToMagnifierOffset(jint arg0, jint arg1);
		QAndroidJniObject setElevation(jfloat arg0);
		QAndroidJniObject setInitialZoom(jfloat arg0);
		QAndroidJniObject setOverlay(android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setSize(jint arg0, jint arg1);
		QAndroidJniObject setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::widget

