#pragma once

#include "../../JObject.hpp"

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
	class View_DragShadowBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit View_DragShadowBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		View_DragShadowBuilder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		View_DragShadowBuilder();
		View_DragShadowBuilder(android::view::View arg0);
		
		// Methods
		android::view::View getView() const;
		void onDrawShadow(android::graphics::Canvas arg0) const;
		void onProvideShadowMetrics(android::graphics::Point arg0, android::graphics::Point arg1) const;
	};
} // namespace android::view

