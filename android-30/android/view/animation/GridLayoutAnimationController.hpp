#pragma once

#include "../../../JObject.hpp"
#include "./LayoutAnimationController.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view::animation
{
	class Animation;
}

namespace android::view::animation
{
	class GridLayoutAnimationController : public android::view::animation::LayoutAnimationController
	{
	public:
		// Fields
		static jint DIRECTION_BOTTOM_TO_TOP();
		static jint DIRECTION_HORIZONTAL_MASK();
		static jint DIRECTION_LEFT_TO_RIGHT();
		static jint DIRECTION_RIGHT_TO_LEFT();
		static jint DIRECTION_TOP_TO_BOTTOM();
		static jint DIRECTION_VERTICAL_MASK();
		static jint PRIORITY_COLUMN();
		static jint PRIORITY_NONE();
		static jint PRIORITY_ROW();
		
		// QJniObject forward
		template<typename ...Ts> explicit GridLayoutAnimationController(const char *className, const char *sig, Ts...agv) : android::view::animation::LayoutAnimationController(className, sig, std::forward<Ts>(agv)...) {}
		GridLayoutAnimationController(QJniObject obj);
		
		// Constructors
		GridLayoutAnimationController(android::view::animation::Animation arg0);
		GridLayoutAnimationController(android::content::Context arg0, JObject arg1);
		GridLayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jfloat getColumnDelay();
		jint getDirection();
		jint getDirectionPriority();
		jfloat getRowDelay();
		void setColumnDelay(jfloat arg0);
		void setDirection(jint arg0);
		void setDirectionPriority(jint arg0);
		void setRowDelay(jfloat arg0);
		jboolean willOverlap();
	};
} // namespace android::view::animation

