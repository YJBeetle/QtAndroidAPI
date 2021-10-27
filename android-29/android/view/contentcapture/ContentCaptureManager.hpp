#pragma once

#ifndef ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTUREMANAGER
#define ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTUREMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::view::contentcapture
{
	class DataRemovalRequest;
}

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getContentCaptureConditions();
		QAndroidJniObject getServiceComponentName();
		jboolean isContentCaptureEnabled();
		void removeData(__jni_impl::android::view::contentcapture::DataRemovalRequest arg0);
		void setContentCaptureEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../content/ComponentName.hpp"
#include "DataRemovalRequest.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	
	// Constructors
	void ContentCaptureManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContentCaptureManager::getContentCaptureConditions()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureConditions",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject ContentCaptureManager::getServiceComponentName()
	{
		return __thiz.callObjectMethod(
			"getServiceComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jboolean ContentCaptureManager::isContentCaptureEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isContentCaptureEnabled",
			"()Z"
		);
	}
	void ContentCaptureManager::removeData(__jni_impl::android::view::contentcapture::DataRemovalRequest arg0)
	{
		__thiz.callMethod<void>(
			"removeData",
			"(Landroid/view/contentcapture/DataRemovalRequest;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentCaptureManager::setContentCaptureEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContentCaptureEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class ContentCaptureManager : public __jni_impl::android::view::contentcapture::ContentCaptureManager
	{
	public:
		ContentCaptureManager(QAndroidJniObject obj) { __thiz = obj; }
		ContentCaptureManager()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

#endif // ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTUREMANAGER

