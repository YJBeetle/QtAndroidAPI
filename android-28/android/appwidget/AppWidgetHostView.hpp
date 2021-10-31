#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

namespace android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::widget
{
	class FrameLayout_LayoutParams;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::appwidget
{
	class AppWidgetHostView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppWidgetHostView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		AppWidgetHostView(QAndroidJniObject obj);
		
		// Constructors
		AppWidgetHostView(android::content::Context arg0);
		AppWidgetHostView(android::content::Context arg0, jint arg1, jint arg2);
		
		// Methods
		static android::graphics::Rect getDefaultPaddingForWidget(android::content::Context arg0, android::content::ComponentName arg1, android::graphics::Rect arg2);
		android::widget::FrameLayout_LayoutParams generateLayoutParams(__JniBaseClass arg0);
		jint getAppWidgetId();
		android::appwidget::AppWidgetProviderInfo getAppWidgetInfo();
		void setAppWidget(jint arg0, android::appwidget::AppWidgetProviderInfo arg1);
		void setExecutor(__JniBaseClass arg0);
		void updateAppWidget(android::widget::RemoteViews arg0);
		void updateAppWidgetOptions(android::os::Bundle arg0);
		void updateAppWidgetSize(android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace android::appwidget

