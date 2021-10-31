#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::view
{
	class Gravity : public __JniBaseClass
	{
	public:
		// Fields
		static jint AXIS_CLIP();
		static jint AXIS_PULL_AFTER();
		static jint AXIS_PULL_BEFORE();
		static jint AXIS_SPECIFIED();
		static jint AXIS_X_SHIFT();
		static jint AXIS_Y_SHIFT();
		static jint BOTTOM();
		static jint CENTER();
		static jint CENTER_HORIZONTAL();
		static jint CENTER_VERTICAL();
		static jint CLIP_HORIZONTAL();
		static jint CLIP_VERTICAL();
		static jint DISPLAY_CLIP_HORIZONTAL();
		static jint DISPLAY_CLIP_VERTICAL();
		static jint END();
		static jint FILL();
		static jint FILL_HORIZONTAL();
		static jint FILL_VERTICAL();
		static jint HORIZONTAL_GRAVITY_MASK();
		static jint LEFT();
		static jint NO_GRAVITY();
		static jint RELATIVE_HORIZONTAL_GRAVITY_MASK();
		static jint RELATIVE_LAYOUT_DIRECTION();
		static jint RIGHT();
		static jint START();
		static jint TOP();
		static jint VERTICAL_GRAVITY_MASK();
		
		// QJniObject forward
		template<typename ...Ts> explicit Gravity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Gravity(QJniObject obj);
		
		// Constructors
		Gravity();
		
		// Methods
		static void apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, android::graphics::Rect arg4);
		static void apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, android::graphics::Rect arg4, jint arg5);
		static void apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, jint arg4, jint arg5, android::graphics::Rect arg6);
		static void apply(jint arg0, jint arg1, jint arg2, android::graphics::Rect arg3, jint arg4, jint arg5, android::graphics::Rect arg6, jint arg7);
		static void applyDisplay(jint arg0, android::graphics::Rect arg1, android::graphics::Rect arg2);
		static void applyDisplay(jint arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3);
		static jint getAbsoluteGravity(jint arg0, jint arg1);
		static jboolean isHorizontal(jint arg0);
		static jboolean isVertical(jint arg0);
	};
} // namespace android::view

