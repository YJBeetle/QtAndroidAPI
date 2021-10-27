#include "../content/Intent.hpp"
#include "./RecognitionService_Callback.hpp"
#include "./RecognitionService.hpp"

namespace android::speech
{
	// Fields
	jstring RecognitionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognitionService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognitionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	RecognitionService::RecognitionService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RecognitionService::RecognitionService()
	{
		__thiz = QAndroidJniObject(
			"android.speech.RecognitionService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RecognitionService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void RecognitionService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace android::speech

