#include "../../../JLongArray.hpp"
#include "../View.hpp"
#include "../ViewStructure.hpp"
#include "../autofill/AutofillId.hpp"
#include "./ContentCaptureContext.hpp"
#include "./ContentCaptureSessionId.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ContentCaptureSession.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QAndroidJniObject forward
	ContentCaptureSession::ContentCaptureSession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ContentCaptureSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::view::contentcapture::ContentCaptureSession ContentCaptureSession::createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0)
	{
		return callObjectMethod(
			"createContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureContext;)Landroid/view/contentcapture/ContentCaptureSession;",
			arg0.object()
		);
	}
	void ContentCaptureSession::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	android::view::contentcapture::ContentCaptureContext ContentCaptureSession::getContentCaptureContext()
	{
		return callObjectMethod(
			"getContentCaptureContext",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	android::view::contentcapture::ContentCaptureSessionId ContentCaptureSession::getContentCaptureSessionId()
	{
		return callObjectMethod(
			"getContentCaptureSessionId",
			"()Landroid/view/contentcapture/ContentCaptureSessionId;"
		);
	}
	android::view::autofill::AutofillId ContentCaptureSession::newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1)
	{
		return callObjectMethod(
			"newAutofillId",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/autofill/AutofillId;",
			arg0.object(),
			arg1
		);
	}
	android::view::ViewStructure ContentCaptureSession::newViewStructure(android::view::View arg0)
	{
		return callObjectMethod(
			"newViewStructure",
			"(Landroid/view/View;)Landroid/view/ViewStructure;",
			arg0.object()
		);
	}
	android::view::ViewStructure ContentCaptureSession::newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1)
	{
		return callObjectMethod(
			"newVirtualViewStructure",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/ViewStructure;",
			arg0.object(),
			arg1
		);
	}
	void ContentCaptureSession::notifyViewAppeared(android::view::ViewStructure arg0)
	{
		callMethod<void>(
			"notifyViewAppeared",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void ContentCaptureSession::notifyViewDisappeared(android::view::autofill::AutofillId arg0)
	{
		callMethod<void>(
			"notifyViewDisappeared",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	void ContentCaptureSession::notifyViewTextChanged(android::view::autofill::AutofillId arg0, JString arg1)
	{
		callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ContentCaptureSession::notifyViewsDisappeared(android::view::autofill::AutofillId arg0, JLongArray arg1)
	{
		callMethod<void>(
			"notifyViewsDisappeared",
			"(Landroid/view/autofill/AutofillId;[J)V",
			arg0.object(),
			arg1.object<jlongArray>()
		);
	}
	void ContentCaptureSession::setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0)
	{
		callMethod<void>(
			"setContentCaptureContext",
			"(Landroid/view/contentcapture/ContentCaptureContext;)V",
			arg0.object()
		);
	}
	JString ContentCaptureSession::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::contentcapture

