#pragma once

#include "../../../JObject.hpp"

class JLongArray;
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
class JString;
class JString;

namespace android::view::contentcapture
{
	class ContentCaptureSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentCaptureSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureSession(QAndroidJniObject obj);
		
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
		void notifyViewTextChanged(android::view::autofill::AutofillId arg0, JString arg1);
		void notifyViewsDisappeared(android::view::autofill::AutofillId arg0, JLongArray arg1);
		void setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0);
		JString toString();
	};
} // namespace android::view::contentcapture

