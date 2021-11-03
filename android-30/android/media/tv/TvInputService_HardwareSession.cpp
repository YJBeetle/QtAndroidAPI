#include "../../content/Context.hpp"
#include "../../view/Surface.hpp"
#include "../../../JString.hpp"
#include "./TvInputService_HardwareSession.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvInputService_HardwareSession::TvInputService_HardwareSession(QJniObject obj) : android::media::tv::TvInputService_Session(obj) {}
	
	// Constructors
	TvInputService_HardwareSession::TvInputService_HardwareSession(android::content::Context arg0)
		: android::media::tv::TvInputService_Session(
			"android.media.tv.TvInputService$HardwareSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	JString TvInputService_HardwareSession::getHardwareInputId() const
	{
		return callObjectMethod(
			"getHardwareInputId",
			"()Ljava/lang/String;"
		);
	}
	void TvInputService_HardwareSession::onHardwareVideoAvailable() const
	{
		callMethod<void>(
			"onHardwareVideoAvailable",
			"()V"
		);
	}
	void TvInputService_HardwareSession::onHardwareVideoUnavailable(jint arg0) const
	{
		callMethod<void>(
			"onHardwareVideoUnavailable",
			"(I)V",
			arg0
		);
	}
	jboolean TvInputService_HardwareSession::onSetSurface(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"onSetSurface",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
} // namespace android::media::tv

