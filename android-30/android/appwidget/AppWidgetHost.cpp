#include "../../JIntArray.hpp"
#include "../app/Activity.hpp"
#include "./AppWidgetHostView.hpp"
#include "./AppWidgetProviderInfo.hpp"
#include "../content/Context.hpp"
#include "../os/Bundle.hpp"
#include "./AppWidgetHost.hpp"

namespace android::appwidget
{
	// Fields
	
	// QJniObject forward
	AppWidgetHost::AppWidgetHost(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppWidgetHost::AppWidgetHost(android::content::Context arg0, jint arg1)
		: JObject(
			"android.appwidget.AppWidgetHost",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void AppWidgetHost::deleteAllHosts()
	{
		callStaticMethod<void>(
			"android.appwidget.AppWidgetHost",
			"deleteAllHosts",
			"()V"
		);
	}
	jint AppWidgetHost::allocateAppWidgetId() const
	{
		return callMethod<jint>(
			"allocateAppWidgetId",
			"()I"
		);
	}
	android::appwidget::AppWidgetHostView AppWidgetHost::createView(android::content::Context arg0, jint arg1, android::appwidget::AppWidgetProviderInfo arg2) const
	{
		return callObjectMethod(
			"createView",
			"(Landroid/content/Context;ILandroid/appwidget/AppWidgetProviderInfo;)Landroid/appwidget/AppWidgetHostView;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void AppWidgetHost::deleteAppWidgetId(jint arg0) const
	{
		callMethod<void>(
			"deleteAppWidgetId",
			"(I)V",
			arg0
		);
	}
	void AppWidgetHost::deleteHost() const
	{
		callMethod<void>(
			"deleteHost",
			"()V"
		);
	}
	JIntArray AppWidgetHost::getAppWidgetIds() const
	{
		return callObjectMethod(
			"getAppWidgetIds",
			"()[I"
		);
	}
	void AppWidgetHost::onAppWidgetRemoved(jint arg0) const
	{
		callMethod<void>(
			"onAppWidgetRemoved",
			"(I)V",
			arg0
		);
	}
	void AppWidgetHost::startAppWidgetConfigureActivityForResult(android::app::Activity arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4) const
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
	void AppWidgetHost::startListening() const
	{
		callMethod<void>(
			"startListening",
			"()V"
		);
	}
	void AppWidgetHost::stopListening() const
	{
		callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace android::appwidget

