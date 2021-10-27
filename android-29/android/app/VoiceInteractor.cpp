#include "./VoiceInteractor_Request.hpp"
#include "./VoiceInteractor.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor::VoiceInteractor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject VoiceInteractor::getActiveRequest(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveRequest",
			"(Ljava/lang/String;)Landroid/app/VoiceInteractor$Request;",
			arg0
		);
	}
	QAndroidJniObject VoiceInteractor::getActiveRequest(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveRequest",
			"(Ljava/lang/String;)Landroid/app/VoiceInteractor$Request;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray VoiceInteractor::getActiveRequests()
	{
		return __thiz.callObjectMethod(
			"getActiveRequests",
			"()[Landroid/app/VoiceInteractor$Request;"
		).object<jarray>();
	}
	jboolean VoiceInteractor::isDestroyed()
	{
		return __thiz.callMethod<jboolean>(
			"isDestroyed",
			"()Z"
		);
	}
	void VoiceInteractor::notifyDirectActionsChanged()
	{
		__thiz.callMethod<void>(
			"notifyDirectActionsChanged",
			"()V"
		);
	}
	jboolean VoiceInteractor::registerOnDestroyedCallback(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerOnDestroyedCallback",
			"(Ljava/util/concurrent/Executor;Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0)
	{
		return __thiz.callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean VoiceInteractor::submitRequest(android::app::VoiceInteractor_Request arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"submitRequest",
			"(Landroid/app/VoiceInteractor$Request;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jbooleanArray VoiceInteractor::supportsCommands(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"supportsCommands",
			"([Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jboolean VoiceInteractor::unregisterOnDestroyedCallback(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterOnDestroyedCallback",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

