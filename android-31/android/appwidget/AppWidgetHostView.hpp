#pragma once

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
namespace android::util
{
	class SparseIntArray;
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
		AppWidgetHostView(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		AppWidgetHostView(android::content::Context arg0);
		AppWidgetHostView(android::content::Context arg0, jint arg1, jint arg2);
		
		// Methods
		static android::graphics::Rect getDefaultPaddingForWidget(android::content::Context arg0, android::content::ComponentName arg1, android::graphics::Rect arg2);
		android::widget::FrameLayout_LayoutParams generateLayoutParams(JObject arg0) const;
		jint getAppWidgetId() const;
		android::appwidget::AppWidgetProviderInfo getAppWidgetInfo() const;
		void resetColorResources() const;
		void setAppWidget(jint arg0, android::appwidget::AppWidgetProviderInfo arg1) const;
		void setColorResources(android::util::SparseIntArray arg0) const;
		void setExecutor(JObject arg0) const;
		void setOnLightBackground(jboolean arg0) const;
		void updateAppWidget(android::widget::RemoteViews arg0) const;
		void updateAppWidgetOptions(android::os::Bundle arg0) const;
		void updateAppWidgetSize(android::os::Bundle arg0, JObject arg1) const;
		void updateAppWidgetSize(android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
	};
} // namespace android::appwidget

