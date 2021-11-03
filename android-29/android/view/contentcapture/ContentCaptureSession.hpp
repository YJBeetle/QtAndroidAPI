#pragma once

#include "../../../JObject.hpp"

class JLongArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		android::view::contentcapture::ContentCaptureSession createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0) const;
		void destroy() const;
		android::view::contentcapture::ContentCaptureContext getContentCaptureContext() const;
		android::view::contentcapture::ContentCaptureSessionId getContentCaptureSessionId() const;
		android::view::autofill::AutofillId newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1) const;
		android::view::ViewStructure newViewStructure(android::view::View arg0) const;
		android::view::ViewStructure newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1) const;
		void notifyViewAppeared(android::view::ViewStructure arg0) const;
		void notifyViewDisappeared(android::view::autofill::AutofillId arg0) const;
		void notifyViewTextChanged(android::view::autofill::AutofillId arg0, JString arg1) const;
		void notifyViewsDisappeared(android::view::autofill::AutofillId arg0, JLongArray arg1) const;
		void setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0) const;
		JString toString() const;
	};
} // namespace android::view::contentcapture

