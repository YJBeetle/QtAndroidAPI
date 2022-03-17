#pragma once

#include "../../../JLongArray.hpp"
#include "../View.def.hpp"
#include "../ViewStructure.def.hpp"
#include "../autofill/AutofillId.def.hpp"
#include "./ContentCaptureContext.def.hpp"
#include "./ContentCaptureSessionId.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ContentCaptureSession.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ContentCaptureSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::view::contentcapture::ContentCaptureSession ContentCaptureSession::createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0) const
	{
		return callObjectMethod(
			"createContentCaptureSession",
			"(Landroid/view/contentcapture/ContentCaptureContext;)Landroid/view/contentcapture/ContentCaptureSession;",
			arg0.object()
		);
	}
	inline void ContentCaptureSession::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline android::view::contentcapture::ContentCaptureContext ContentCaptureSession::getContentCaptureContext() const
	{
		return callObjectMethod(
			"getContentCaptureContext",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	inline android::view::contentcapture::ContentCaptureSessionId ContentCaptureSession::getContentCaptureSessionId() const
	{
		return callObjectMethod(
			"getContentCaptureSessionId",
			"()Landroid/view/contentcapture/ContentCaptureSessionId;"
		);
	}
	inline android::view::autofill::AutofillId ContentCaptureSession::newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1) const
	{
		return callObjectMethod(
			"newAutofillId",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/autofill/AutofillId;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::ViewStructure ContentCaptureSession::newViewStructure(android::view::View arg0) const
	{
		return callObjectMethod(
			"newViewStructure",
			"(Landroid/view/View;)Landroid/view/ViewStructure;",
			arg0.object()
		);
	}
	inline android::view::ViewStructure ContentCaptureSession::newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1) const
	{
		return callObjectMethod(
			"newVirtualViewStructure",
			"(Landroid/view/autofill/AutofillId;J)Landroid/view/ViewStructure;",
			arg0.object(),
			arg1
		);
	}
	inline void ContentCaptureSession::notifyViewAppeared(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"notifyViewAppeared",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline void ContentCaptureSession::notifyViewDisappeared(android::view::autofill::AutofillId arg0) const
	{
		callMethod<void>(
			"notifyViewDisappeared",
			"(Landroid/view/autofill/AutofillId;)V",
			arg0.object()
		);
	}
	inline void ContentCaptureSession::notifyViewTextChanged(android::view::autofill::AutofillId arg0, JString arg1) const
	{
		callMethod<void>(
			"notifyViewTextChanged",
			"(Landroid/view/autofill/AutofillId;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void ContentCaptureSession::notifyViewsDisappeared(android::view::autofill::AutofillId arg0, JLongArray arg1) const
	{
		callMethod<void>(
			"notifyViewsDisappeared",
			"(Landroid/view/autofill/AutofillId;[J)V",
			arg0.object(),
			arg1.object<jlongArray>()
		);
	}
	inline void ContentCaptureSession::setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0) const
	{
		callMethod<void>(
			"setContentCaptureContext",
			"(Landroid/view/contentcapture/ContentCaptureContext;)V",
			arg0.object()
		);
	}
	inline JString ContentCaptureSession::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::view::contentcapture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::contentcapture;
#endif
