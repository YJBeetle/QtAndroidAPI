#include "../../graphics/Insets.hpp"
#include "../View.hpp"
#include "../ViewStructure.hpp"
#include "../autofill/AutofillId.hpp"
#include "./ContentCaptureContext.hpp"
#include "./ContentCaptureSessionId.hpp"
#include "./ContentCaptureSession.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QAndroidJniObject forward
	ContentCaptureSession::ContentCaptureSession(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	void ContentCaptureSession::notifySessionPaused()
	{
		callMethod<void>(
			"notifySessionPaused",
			"()V"
		);
	}
	void ContentCaptureSession::notifySessionResumed()
	{
		callMethod<void>(
			"notifySessionResumed",
			"()V"
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
	void ContentCaptureSession::notifyViewInsetsChanged(android::graphics::Insets arg0)
	{
		callMethod<void>(
			"notifyViewInsetsChanged",
			"(Landroid/graphics/Insets;)V",
			arg0.object()
		);
	}
	void ContentCaptureSession::notifyViewTextChanged(android::view::autofill::AutofillId arg0, jstring arg1)
	{
		callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1
		);
	}
	void ContentCaptureSession::notifyViewsDisappeared(android::view::autofill::AutofillId arg0, jlongArray arg1)
	{
		callMethod<void>(
			"notifyViewsDisappeared",
			"(Landroid/view/autofill/AutofillId;[J)V",
			arg0.object(),
			arg1
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
	jstring ContentCaptureSession::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::view::contentcapture

