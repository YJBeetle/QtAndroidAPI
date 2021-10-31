#include "../app/Activity.hpp"
#include "./AppWidgetHostView.hpp"
#include "./AppWidgetProviderInfo.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "./AppWidgetHost.hpp"

namespace android::appwidget
{
	// Fields
	
	AppWidgetHost::AppWidgetHost(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AppWidgetHost::AppWidgetHost(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetHost",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void AppWidgetHost::deleteAllHosts()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.appwidget.AppWidgetHost",
			"deleteAllHosts",
			"()V"
		);
	}
	jint AppWidgetHost::allocateAppWidgetId()
	{
		return __thiz.callMethod<jint>(
			"allocateAppWidgetId",
			"()I"
		);
	}
	QAndroidJniObject AppWidgetHost::createView(android::content::Context arg0, jint arg1, android::appwidget::AppWidgetProviderInfo arg2)
	{
		return __thiz.callObjectMethod(
			"createView",
			"(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void AppWidgetHost::deleteAppWidgetId(jint arg0)
	{
		__thiz.callMethod<void>(
			"deleteAppWidgetId",
			"(I)V",
			arg0
		);
	}
	void AppWidgetHost::deleteHost()
	{
		__thiz.callMethod<void>(
			"deleteHost",
			"()V"
		);
	}
	jintArray AppWidgetHost::getAppWidgetIds()
	{
		return __thiz.callObjectMethod(
			"getAppWidgetIds",
			"()[I"
		).object<jintArray>();
	}
	void AppWidgetHost::startAppWidgetConfigureActivityForResult(android::app::Activity arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4)
	{
		__thiz.callMethod<void>(
			"startAppWidgetConfigureActivityForResult",
			"(Landroid/app/Activity;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void AppWidgetHost::startListening()
	{
		__thiz.callMethod<void>(
			"startListening",
			"()V"
		);
	}
	void AppWidgetHost::stopListening()
	{
		__thiz.callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace android::appwidget

