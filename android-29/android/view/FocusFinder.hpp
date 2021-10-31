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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FocusFinder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FocusFinder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject findNearestTouchable(android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		QAndroidJniObject findNextFocus(android::view::ViewGroup arg0, android::view::View arg1, jint arg2);
		QAndroidJniObject findNextFocusFromRect(android::view::ViewGroup arg0, android::graphics::Rect arg1, jint arg2);
		QAndroidJniObject findNextKeyboardNavigationCluster(android::view::View arg0, android::view::View arg1, jint arg2);
	};
} // namespace android::view

