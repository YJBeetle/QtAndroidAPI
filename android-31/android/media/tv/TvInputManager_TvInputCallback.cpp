#include "./TvInputInfo.hpp"
#include "./TvInputManager_TvInputCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvInputManager_TvInputCallback::TvInputManager_TvInputCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvInputManager_TvInputCallback::TvInputManager_TvInputCallback()
		: JObject(
			"android.media.tv.TvInputManager$TvInputCallback",
			"()V"
		) {}
	
	// Methods
	void TvInputManager_TvInputCallback::onInputAdded(jstring arg0)
	{
		callMethod<void>(
			"onInputAdded",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvInputManager_TvInputCallback::onInputRemoved(jstring arg0)
	{
		callMethod<void>(
			"onInputRemoved",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvInputManager_TvInputCallback::onInputStateChanged(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"onInputStateChanged",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void TvInputManager_TvInputCallback::onInputUpdated(jstring arg0)
	{
		callMethod<void>(
			"onInputUpdated",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvInputManager_TvInputCallback::onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0)
	{
		callMethod<void>(
			"onTvInputInfoUpdated",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv

