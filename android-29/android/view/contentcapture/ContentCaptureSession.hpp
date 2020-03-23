#pragma once

#ifndef ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURESESSION
#define ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURESESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureSessionId;
}
namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureContext;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void destroy();
		void close();
		QAndroidJniObject getContentCaptureSessionId();
		QAndroidJniObject createContentCaptureSession(__jni_impl::android::view::contentcapture::ContentCaptureContext arg0);
		void setContentCaptureContext(__jni_impl::android::view::contentcapture::ContentCaptureContext arg0);
		QAndroidJniObject getContentCaptureContext();
		void notifyViewAppeared(__jni_impl::android::view::ViewStructure arg0);
		void notifyViewDisappeared(__jni_impl::android::view::autofill::AutofillId arg0);
		void notifyViewsDisappeared(__jni_impl::android::view::autofill::AutofillId arg0, jlongArray arg1);
		void notifyViewTextChanged(__jni_impl::android::view::autofill::AutofillId arg0, jstring arg1);
		QAndroidJniObject newViewStructure(__jni_impl::android::view::View arg0);
		QAndroidJniObject newAutofillId(__jni_impl::android::view::autofill::AutofillId arg0, jlong arg1);
		QAndroidJniObject newVirtualViewStructure(__jni_impl::android::view::autofill::AutofillId arg0, jlong arg1);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "ContentCaptureSessionId.hpp"
#include "ContentCaptureContext.hpp"
#include "../ViewStructure.hpp"
#include "../autofill/AutofillId.hpp"
#include "../View.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	
	// Constructors
	void ContentCaptureSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureSession",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ContentCaptureSession::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void ContentCaptureSession::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	void ContentCaptureSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject ContentCaptureSession::getContentCaptureSessionId()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureSessionId",
			"()Landroid/view/contentcapture/ContentCaptureSessionId;");
	}
	QAndroidJniObject ContentCaptureSession::createContentCaptureSession(__jni_impl::android::view::contentcapture::ContentCaptureContext arg0)
	{
		return __thiz.callObjectMethod(
			"createContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureContext;)Landroid/view/contentcapture/ContentCaptureSession;",
			arg0.__jniObject().object());
	}
	void ContentCaptureSession::setContentCaptureContext(__jni_impl::android::view::contentcapture::ContentCaptureContext arg0)
	{
		__thiz.callMethod<void>(
			"setContentCaptureContext",
			"(Landroid/view/contentcapture/ContentCaptureContext;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ContentCaptureSession::getContentCaptureContext()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureContext",
			"()Landroid/view/contentcapture/ContentCaptureContext;");
	}
	void ContentCaptureSession::notifyViewAppeared(__jni_impl::android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewAppeared",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object());
	}
	void ContentCaptureSession::notifyViewDisappeared(__jni_impl::android::view::autofill::AutofillId arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewDisappeared",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.__jniObject().object());
	}
	void ContentCaptureSession::notifyViewsDisappeared(__jni_impl::android::view::autofill::AutofillId arg0, jlongArray arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewsDisappeared",
			"(Landroid/view/autofill/AutofillId;[J)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ContentCaptureSession::notifyViewTextChanged(__jni_impl::android::view::autofill::AutofillId arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ContentCaptureSession::newViewStructure(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"newViewStructure",
			"(Landroid/view/View;)Landroid/view/ViewStructure;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ContentCaptureSession::newAutofillId(__jni_impl::android::view::autofill::AutofillId arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"newAutofillId",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/autofill/AutofillId;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ContentCaptureSession::newVirtualViewStructure(__jni_impl::android::view::autofill::AutofillId arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"newVirtualViewStructure",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/ViewStructure;",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class ContentCaptureSession : public __jni_impl::android::view::contentcapture::ContentCaptureSession
	{
	public:
		ContentCaptureSession(QAndroidJniObject obj) { __thiz = obj; }
		ContentCaptureSession()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

#endif // ANDROID_VIEW_CONTENTCAPTURE_CONTENTCAPTURESESSION

