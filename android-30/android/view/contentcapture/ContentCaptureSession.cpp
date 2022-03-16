#include "../../../JLongArray.hpp"
#include "../../graphics/Insets.hpp"
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
	
	// Constructors
	
	// Methods
	void ContentCaptureSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::view::contentcapture::ContentCaptureSession ContentCaptureSession::createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0) const
	{
		return callObjectMethod(
			"createContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureContext;)Landroid/view/contentcapture/ContentCaptureSession;",
			arg0.object()
		);
	}
	void ContentCaptureSession::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	android::view::contentcapture::ContentCaptureContext ContentCaptureSession::getContentCaptureContext() const
	{
		return callObjectMethod(
			"getContentCaptureContext",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	android::view::contentcapture::ContentCaptureSessionId ContentCaptureSession::getContentCaptureSessionId() const
	{
		return callObjectMethod(
			"getContentCaptureSessionId",
			"()Landroid/view/contentcapture/ContentCaptureSessionId;"
		);
	}
	android::view::autofill::AutofillId ContentCaptureSession::newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1) const
	{
		return callObjectMethod(
			"newAutofillId",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/autofill/AutofillId;",
			arg0.object(),
			arg1
		);
	}
	android::view::ViewStructure ContentCaptureSession::newViewStructure(android::view::View arg0) const
	{
		return callObjectMethod(
			"newViewStructure",
			"(Landroid/view/View;)Landroid/view/ViewStructure;",
			arg0.object()
		);
	}
	android::view::ViewStructure ContentCaptureSession::newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1) const
	{
		return callObjectMethod(
			"newVirtualViewStructure",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/ViewStructure;",
			arg0.object(),
			arg1
		);
	}
	void ContentCaptureSession::notifySessionPaused() const
	{
		callMethod<void>(
			"notifySessionPaused",
			"()V"
		);
	}
	void ContentCaptureSession::notifySessionResumed() const
	{
		callMethod<void>(
			"notifySessionResumed",
			"()V"
		);
	}
	void ContentCaptureSession::notifyViewAppeared(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"notifyViewAppeared",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void ContentCaptureSession::notifyViewDisappeared(android::view::autofill::AutofillId arg0) const
	{
		callMethod<void>(
			"notifyViewDisappeared",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	void ContentCaptureSession::notifyViewInsetsChanged(android::graphics::Insets arg0) const
	{
		callMethod<void>(
			"notifyViewInsetsChanged",
			"(Landroid/graphics/Insets;)V",
			arg0.object()
		);
	}
	void ContentCaptureSession::notifyViewTextChanged(android::view::autofill::AutofillId arg0, JString arg1) const
	{
		callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ContentCaptureSession::notifyViewsDisappeared(android::view::autofill::AutofillId arg0, JLongArray arg1) const
	{
		callMethod<void>(
			"notifyViewsDisappeared",
			"(Landroid/view/autofill/AutofillId;[J)V",
			arg0.object(),
			arg1.object<jlongArray>()
		);
	}
	void ContentCaptureSession::setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0) const
	{
		callMethod<void>(
			"setContentCaptureContext",
			"(Landroid/view/contentcapture/ContentCaptureContext;)V",
			arg0.object()
		);
	}
	JString ContentCaptureSession::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::contentcapture

