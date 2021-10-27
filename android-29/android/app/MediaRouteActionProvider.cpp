#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "./MediaRouteActionProvider.hpp"

namespace android::app
{
	// Fields
	
	MediaRouteActionProvider::MediaRouteActionProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaRouteActionProvider::MediaRouteActionProvider(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.MediaRouteActionProvider",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean MediaRouteActionProvider::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	QAndroidJniObject MediaRouteActionProvider::onCreateActionView()
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject MediaRouteActionProvider::onCreateActionView(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaRouteActionProvider::onPerformDefaultAction()
	{
		return __thiz.callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	jboolean MediaRouteActionProvider::overridesItemVisibility()
	{
		return __thiz.callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	void MediaRouteActionProvider::setExtendedSettingsClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setExtendedSettingsClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouteActionProvider::setRouteTypes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRouteTypes",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

