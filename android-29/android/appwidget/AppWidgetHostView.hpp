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
		
		AppWidgetHostView(QAndroidJniObject obj);
		// Constructors
		AppWidgetHostView(android::content::Context arg0);
		AppWidgetHostView(android::content::Context arg0, jint arg1, jint arg2);
		AppWidgetHostView() = default;
		
		// Methods
		static QAndroidJniObject getDefaultPaddingForWidget(android::content::Context arg0, android::content::ComponentName arg1, android::graphics::Rect arg2);
		QAndroidJniObject generateLayoutParams(__JniBaseClass arg0);
		jint getAppWidgetId();
		QAndroidJniObject getAppWidgetInfo();
		void setAppWidget(jint arg0, android::appwidget::AppWidgetProviderInfo arg1);
		void setExecutor(__JniBaseClass arg0);
		void setOnLightBackground(jboolean arg0);
		void updateAppWidget(android::widget::RemoteViews arg0);
		void updateAppWidgetOptions(android::os::Bundle arg0);
		void updateAppWidgetSize(android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace android::appwidget

