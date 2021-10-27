#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/FrameLayout.hpp"

namespace __jni_impl::android::appwidget
{
	class AppWidgetProviderInfo;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class FrameLayout_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}

namespace __jni_impl::android::appwidget
{
	class AppWidgetHostView : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		
		// Methods
		static QAndroidJniObject getDefaultPaddingForWidget(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::graphics::Rect arg2);
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jint getAppWidgetId();
		QAndroidJniObject getAppWidgetInfo();
		void setAppWidget(jint arg0, __jni_impl::android::appwidget::AppWidgetProviderInfo arg1);
		void setExecutor(__jni_impl::__JniBaseClass arg0);
		void setOnLightBackground(jboolean arg0);
		void updateAppWidget(__jni_impl::android::widget::RemoteViews arg0);
		void updateAppWidgetOptions(__jni_impl::android::os::Bundle arg0);
		void updateAppWidgetSize(__jni_impl::android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace __jni_impl::android::appwidget

#include "AppWidgetProviderInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Bundle.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../widget/FrameLayout_LayoutParams.hpp"
#include "../widget/RemoteViews.hpp"

namespace __jni_impl::android::appwidget
{
	// Fields
	
	// Constructors
	void AppWidgetHostView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetHostView::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
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
	QAndroidJniObject AppWidgetHostView::getDefaultPaddingForWidget(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1, __jni_impl::android::graphics::Rect arg2)
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
	QAndroidJniObject AppWidgetHostView::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
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
	void AppWidgetHostView::setAppWidget(jint arg0, __jni_impl::android::appwidget::AppWidgetProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"setAppWidget",
			"(ILandroid/appwidget/AppWidgetProviderInfo;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AppWidgetHostView::setExecutor(__jni_impl::__JniBaseClass arg0)
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
	void AppWidgetHostView::updateAppWidget(__jni_impl::android::widget::RemoteViews arg0)
	{
		__thiz.callMethod<void>(
			"updateAppWidget",
			"(Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetHostView::updateAppWidgetOptions(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"updateAppWidgetOptions",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void AppWidgetHostView::updateAppWidgetSize(__jni_impl::android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
} // namespace __jni_impl::android::appwidget

namespace android::appwidget
{
	class AppWidgetHostView : public __jni_impl::android::appwidget::AppWidgetHostView
	{
	public:
		AppWidgetHostView(QAndroidJniObject obj) { __thiz = obj; }
		AppWidgetHostView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		AppWidgetHostView(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::appwidget

