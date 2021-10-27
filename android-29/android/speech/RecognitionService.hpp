#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::speech
{
	class RecognitionService_Callback;
}

namespace __jni_impl::android::speech
{
	class RecognitionService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onDestroy();
	};
} // namespace __jni_impl::android::speech

#include "../content/Intent.hpp"
#include "RecognitionService_Callback.hpp"

namespace __jni_impl::android::speech
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
	
	// Constructors
	void RecognitionService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.RecognitionService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RecognitionService::onBind(__jni_impl::android::content::Intent arg0)
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
} // namespace __jni_impl::android::speech

namespace android::speech
{
	class RecognitionService : public __jni_impl::android::speech::RecognitionService
	{
	public:
		RecognitionService(QAndroidJniObject obj) { __thiz = obj; }
		RecognitionService()
		{
			__constructor();
		}
	};
} // namespace android::speech

