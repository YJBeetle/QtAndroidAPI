#include "../app/Activity.hpp"
#include "./AppWidgetHostView.hpp"
#include "./AppWidgetProviderInfo.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "./AppWidgetHost.hpp"

namespace android::appwidget
{
	// Fields
	
	// QAndroidJniObject forward
	AppWidgetHost::AppWidgetHost(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppWidgetHost::AppWidgetHost(android::content::Context arg0, jint arg1)
		: __JniBaseClass(
			"android.appwidget.AppWidgetHost",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
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
		return callMethod<jint>(
			"allocateAppWidgetId",
			"()I"
		);
	}
	QAndroidJniObject AppWidgetHost::createView(android::content::Context arg0, jint arg1, android::appwidget::AppWidgetProviderInfo arg2)
	{
		return callObjectMethod(
			"createView",
			"(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AppWidgetHost::deleteAppWidgetId(jint arg0)
	{
		callMethod<void>(
			"deleteAppWidgetId",
			"(I)V",
			arg0
		);
	}
	void AppWidgetHost::deleteHost()
	{
		callMethod<void>(
			"deleteHost",
			"()V"
		);
	}
	jintArray AppWidgetHost::getAppWidgetIds()
	{
		return callObjectMethod(
			"getAppWidgetIds",
			"()[I"
		).object<jintArray>();
	}
	void AppWidgetHost::startAppWidgetConfigureActivityForResult(android::app::Activity arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4)
	{
		callMethod<void>(
			"startAppWidgetConfigureActivityForResult",
			"(Landroid/app/Activity;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void AppWidgetHost::startListening()
	{
		callMethod<void>(
			"startListening",
			"()V"
		);
	}
	void AppWidgetHost::stopListening()
	{
		callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace android::appwidget

