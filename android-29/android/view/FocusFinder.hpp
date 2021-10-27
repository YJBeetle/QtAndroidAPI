#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::view
{
	class FocusFinder : public __JniBaseClass
	{
	public:
		// Fields
		
		FocusFinder(QAndroidJniObject obj);
		// Constructors
		FocusFinder() = default;
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject findNearestTouchable(android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		QAndroidJniObject findNextFocus(android::view::ViewGroup arg0, android::view::View arg1, jint arg2);
		QAndroidJniObject findNextFocusFromRect(android::view::ViewGroup arg0, android::graphics::Rect arg1, jint arg2);
		QAndroidJniObject findNextKeyboardNavigationCluster(android::view::View arg0, android::view::View arg1, jint arg2);
	};
} // namespace android::view

