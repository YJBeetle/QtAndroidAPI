#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class ScaleGestureDetector;
}

namespace android::view
{
	class ScaleGestureDetector_SimpleOnScaleGestureListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScaleGestureDetector_SimpleOnScaleGestureListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScaleGestureDetector_SimpleOnScaleGestureListener(QAndroidJniObject obj);
		
		// Constructors
		ScaleGestureDetector_SimpleOnScaleGestureListener();
		
		// Methods
		jboolean onScale(android::view::ScaleGestureDetector arg0);
		jboolean onScaleBegin(android::view::ScaleGestureDetector arg0);
		void onScaleEnd(android::view::ScaleGestureDetector arg0);
	};
} // namespace android::view

