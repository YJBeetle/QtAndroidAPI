#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Insets;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::contentcapture
{
	class ContentCaptureContext;
}
namespace android::view::contentcapture
{
	class ContentCaptureSessionId;
}

namespace android::view::contentcapture
{
	class ContentCaptureSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::view::contentcapture::ContentCaptureSession createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0);
		void destroy();
		android::view::contentcapture::ContentCaptureContext getContentCaptureContext();
		android::view::contentcapture::ContentCaptureSessionId getContentCaptureSessionId();
		android::view::autofill::AutofillId newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1);
		android::view::ViewStructure newViewStructure(android::view::View arg0);
		android::view::ViewStructure newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1);
		void notifySessionPaused();
		void notifySessionResumed();
		void notifyViewAppeared(android::view::ViewStructure arg0);
		void notifyViewDisappeared(android::view::autofill::AutofillId arg0);
		void notifyViewInsetsChanged(android::graphics::Insets arg0);
		void notifyViewTextChanged(android::view::autofill::AutofillId arg0, jstring arg1);
		void notifyViewsDisappeared(android::view::autofill::AutofillId arg0, jlongArray arg1);
		void setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0);
		jstring toString();
	};
} // namespace android::view::contentcapture

