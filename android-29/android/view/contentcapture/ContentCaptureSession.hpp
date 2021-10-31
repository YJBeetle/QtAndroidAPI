#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ContentCaptureSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentCaptureSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		QAndroidJniObject createContentCaptureSession(android::view::contentcapture::ContentCaptureContext arg0);
		void destroy();
		QAndroidJniObject getContentCaptureContext();
		QAndroidJniObject getContentCaptureSessionId();
		QAndroidJniObject newAutofillId(android::view::autofill::AutofillId arg0, jlong arg1);
		QAndroidJniObject newViewStructure(android::view::View arg0);
		QAndroidJniObject newVirtualViewStructure(android::view::autofill::AutofillId arg0, jlong arg1);
		void notifyViewAppeared(android::view::ViewStructure arg0);
		void notifyViewDisappeared(android::view::autofill::AutofillId arg0);
		void notifyViewTextChanged(android::view::autofill::AutofillId arg0, jstring arg1);
		void notifyViewsDisappeared(android::view::autofill::AutofillId arg0, jlongArray arg1);
		void setContentCaptureContext(android::view::contentcapture::ContentCaptureContext arg0);
		jstring toString();
	};
} // namespace android::view::contentcapture

