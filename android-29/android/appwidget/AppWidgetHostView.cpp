#include "./AppWidgetProviderInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Bundle.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../widget/FrameLayout_LayoutParams.hpp"
#include "../widget/RemoteViews.hpp"
#include "./AppWidgetHostView.hpp"

namespace android::appwidget
{
	// Fields
	
	AppWidgetHostView::AppWidgetHostView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AppWidgetHostView::AppWidgetHostView(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AppWidgetHostView::AppWidgetHostView(android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject AppWidgetHostView::getDefaultPaddingForWidget(android::content::Context arg0, android::content::ComponentName arg1, android::graphics::Rect arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.appwidget.AppWidgetHostView",
			"getDefaultPaddingForWidget",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AppWidgetHostView::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jint AppWidgetHostView::getAppWidgetId()
	{
		return __thiz.callMethod<jint>(
			"getAppWidgetId",
			"()I"
		);
	}
	QAndroidJniObject AppWidgetHostView::getAppWidgetInfo()
	{
		return __thiz.callObjectMethod(
			"getAppWidgetInfo",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	void AppWidgetHostView::setAppWidget(jint arg0, android::appwidget::AppWidgetProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"setAppWidget",
			"(ILandroid/appwidget/AppWidgetProviderInfo;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetHostView::setExecutor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExecutor",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetHostView::setOnLightBackground(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOnLightBackground",
			"(Z)V",
			arg0
		);
	}
	void AppWidgetHostView::updateAppWidget(android::widget::RemoteViews arg0)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"(Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetHostView::updateAppWidgetOptions(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetOptions",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetHostView::updateAppWidgetSize(android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetSize",
			"(Landroid/os/Bundle;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::appwidget

