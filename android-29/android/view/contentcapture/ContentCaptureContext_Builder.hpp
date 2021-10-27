#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureContext;
}

namespace __jni_impl::android::view::contentcapture
{
	class ContentCaptureContext_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::LocusId arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../content/LocusId.hpp"
#include "../../os/Bundle.hpp"
#include "./ContentCaptureContext.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	
	// Constructors
	void ContentCaptureContext_Builder::__constructor(__jni_impl::android::content::LocusId arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.ContentCaptureContext$Builder",
			"(Landroid/content/LocusId;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ContentCaptureContext_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/ContentCaptureContext;"
		);
	}
	QAndroidJniObject ContentCaptureContext_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/contentcapture/ContentCaptureContext$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class ContentCaptureContext_Builder : public __jni_impl::android::view::contentcapture::ContentCaptureContext_Builder
	{
	public:
		ContentCaptureContext_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ContentCaptureContext_Builder(__jni_impl::android::content::LocusId arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::contentcapture

