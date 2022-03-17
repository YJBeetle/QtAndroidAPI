#pragma once

#include "./AppWidgetProviderInfo.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../widget/FrameLayout_LayoutParams.def.hpp"
#include "../widget/RemoteViews.def.hpp"
#include "./AppWidgetHostView.def.hpp"

namespace android::appwidget
{
	// Fields
	
	// Constructors
	inline AppWidgetHostView::AppWidgetHostView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AppWidgetHostView::AppWidgetHostView(android::content::Context arg0, jint arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::graphics::Rect AppWidgetHostView::getDefaultPaddingForWidget(android::content::Context arg0, android::content::ComponentName arg1, android::graphics::Rect arg2)
	{
		return callStaticObjectMethod(
			"android.appwidget.AppWidgetHostView",
			"getDefaultPaddingForWidget",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::widget::FrameLayout_LayoutParams AppWidgetHostView::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.object()
		);
	}
	inline jint AppWidgetHostView::getAppWidgetId() const
	{
		return callMethod<jint>(
			"getAppWidgetId",
			"()I"
		);
	}
	inline android::appwidget::AppWidgetProviderInfo AppWidgetHostView::getAppWidgetInfo() const
	{
		return callObjectMethod(
			"getAppWidgetInfo",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	inline void AppWidgetHostView::setAppWidget(jint arg0, android::appwidget::AppWidgetProviderInfo arg1) const
	{
		callMethod<void>(
			"setAppWidget",
			"(ILandroid/appwidget/AppWidgetProviderInfo;)V",
			arg0,
			arg1.object()
		);
	}
	inline void AppWidgetHostView::setExecutor(JObject arg0) const
	{
		callMethod<void>(
			"setExecutor",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		);
	}
	inline void AppWidgetHostView::setOnLightBackground(jboolean arg0) const
	{
		callMethod<void>(
			"setOnLightBackground",
			"(Z)V",
			arg0
		);
	}
	inline void AppWidgetHostView::updateAppWidget(android::widget::RemoteViews arg0) const
	{
		callMethod<void>(
			"updateAppWidget",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		);
	}
	inline void AppWidgetHostView::updateAppWidgetOptions(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"updateAppWidgetOptions",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void AppWidgetHostView::updateAppWidgetSize(android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"updateAppWidgetSize",
			"(Landroid/os/Bundle;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::appwidget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::appwidget;
#endif
