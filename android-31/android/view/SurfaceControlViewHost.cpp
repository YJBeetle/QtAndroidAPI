#include "../content/Context.hpp"
#include "./Display.hpp"
#include "./SurfaceControlViewHost_SurfacePackage.hpp"
#include "./View.hpp"
#include "./SurfaceControlViewHost.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	SurfaceControlViewHost::SurfaceControlViewHost(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SurfaceControlViewHost::SurfaceControlViewHost(android::content::Context arg0, android::view::Display arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"android.view.SurfaceControlViewHost",
			"(Landroid/content/Context;Landroid/view/Display;Landroid/os/IBinder;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	android::view::SurfaceControlViewHost_SurfacePackage SurfaceControlViewHost::getSurfacePackage()
	{
		return callObjectMethod(
			"getSurfacePackage",
			"()Landroid/view/SurfaceControlViewHost$SurfacePackage;"
		);
	}
	android::view::View SurfaceControlViewHost::getView()
	{
		return callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	void SurfaceControlViewHost::relayout(jint arg0, jint arg1)
	{
		callMethod<void>(
			"relayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SurfaceControlViewHost::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void SurfaceControlViewHost::setView(android::view::View arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::view

