#include "../View.hpp"
#include "../ViewStructure.hpp"
#include "../autofill/AutofillId.hpp"
#include "./ContentCaptureContext.hpp"
#include "./ContentCaptureSessionId.hpp"
#include "./ContentCaptureSession.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	ContentCaptureSession::ContentCaptureSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ContentCaptureSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ContentCaptureSession::createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0)
	{
		return __thiz.callObjectMethod(
			"createContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureContext;)Landroid/view/contentcapture/ContentCaptureSession;",
			arg0.__jniObject().object()
		);
	}
	void ContentCaptureSession::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject ContentCaptureSession::getContentCaptureContext()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureContext",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	QAndroidJniObject ContentCaptureSession::getContentCaptureSessionId()
	{
		return __thiz.callObjectMethod(
			"getContentCaptureSessionId",
			"()Landroid/view/contentcapture/ContentCaptureSessionId;"
		);
	}
	QAndroidJniObject ContentCaptureSession::newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"newAutofillId",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/autofill/AutofillId;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentCaptureSession::newViewStructure(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"newViewStructure",
			"(Landroid/view/View;)Landroid/view/ViewStructure;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentCaptureSession::newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"newVirtualViewStructure",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/ViewStructure;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContentCaptureSession::notifyViewAppeared(android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewAppeared",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentCaptureSession::notifyViewDisappeared(android::view::autofill::AutofillId arg0)
	{
		__thiz.callMethod<void>(
			"notifyViewDisappeared",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentCaptureSession::notifyViewTextChanged(android::view::autofill::AutofillId arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContentCaptureSession::notifyViewTextChanged(android::view::autofill::AutofillId arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ContentCaptureSession::notifyViewsDisappeared(android::view::autofill::AutofillId arg0, jlongArray arg1)
	{
		__thiz.callMethod<void>(
			"notifyViewsDisappeared",
			"(Landroid/view/autofill/AutofillId;[J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContentCaptureSession::setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0)
	{
		__thiz.callMethod<void>(
			"setContentCaptureContext",
			"(Landroid/view/contentcapture/ContentCaptureContext;)V",
			arg0.__jniObject().object()
		);
	}
	jstring ContentCaptureSession::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view::contentcapture

