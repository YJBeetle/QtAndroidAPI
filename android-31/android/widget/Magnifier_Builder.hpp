#pragma once

#include "../../JObject.hpp"

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
	class Magnifier_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Magnifier_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Magnifier_Builder(QJniObject obj);
		
		// Constructors
		Magnifier_Builder(android::view::View arg0);
		
		// Methods
		android::widget::Magnifier build();
		android::widget::Magnifier_Builder setClippingEnabled(jboolean arg0);
		android::widget::Magnifier_Builder setCornerRadius(jfloat arg0);
		android::widget::Magnifier_Builder setDefaultSourceToMagnifierOffset(jint arg0, jint arg1);
		android::widget::Magnifier_Builder setElevation(jfloat arg0);
		android::widget::Magnifier_Builder setInitialZoom(jfloat arg0);
		android::widget::Magnifier_Builder setOverlay(android::graphics::drawable::Drawable arg0);
		android::widget::Magnifier_Builder setSize(jint arg0, jint arg1);
		android::widget::Magnifier_Builder setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::widget

