#include "../../content/Context.hpp"
#include "../../view/Surface.hpp"
#include "./TvInputService_HardwareSession.hpp"

namespace android::media::tv
{
	// Fields
	
	TvInputService_HardwareSession::TvInputService_HardwareSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvInputService_HardwareSession::TvInputService_HardwareSession(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService$HardwareSession",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring TvInputService_HardwareSession::getHardwareInputId()
	{
		return __thiz.callObjectMethod(
			"getHardwareInputId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TvInputService_HardwareSession::onHardwareVideoAvailable()
	{
		__thiz.callMethod<void>(
			"onHardwareVideoAvailable",
			"()V"
		);
	}
	void TvInputService_HardwareSession::onHardwareVideoUnavailable(jint arg0)
	{
		__thiz.callMethod<void>(
			"onHardwareVideoUnavailable",
			"(I)V",
			arg0
		);
	}
	jboolean TvInputService_HardwareSession::onSetSurface(android::view::Surface arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::tv

