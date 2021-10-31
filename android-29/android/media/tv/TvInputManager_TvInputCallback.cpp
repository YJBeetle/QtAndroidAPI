#include "./TvInputInfo.hpp"
#include "./TvInputManager_TvInputCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	TvInputManager_TvInputCallback::TvInputManager_TvInputCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvInputManager_TvInputCallback::TvInputManager_TvInputCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputManager$TvInputCallback",
			"()V"
		);
	}
	
	// Methods
	void TvInputManager_TvInputCallback::onInputAdded(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onInputAdded",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvInputManager_TvInputCallback::onInputRemoved(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onInputRemoved",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvInputManager_TvInputCallback::onInputStateChanged(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onInputStateChanged",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void TvInputManager_TvInputCallback::onInputUpdated(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onInputUpdated",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TvInputManager_TvInputCallback::onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0)
	{
		__thiz.callMethod<void>(
			"onTvInputInfoUpdated",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::tv

