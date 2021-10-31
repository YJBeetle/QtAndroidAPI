#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Point;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class View_DragShadowBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit View_DragShadowBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		View_DragShadowBuilder(QAndroidJniObject obj);
		
		// Constructors
		View_DragShadowBuilder();
		View_DragShadowBuilder(android::view::View arg0);
		
		// Methods
		QAndroidJniObject getView();
		void onDrawShadow(android::graphics::Canvas arg0);
		void onProvideShadowMetrics(android::graphics::Point arg0, android::graphics::Point arg1);
	};
} // namespace android::view

