#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::view::contentcapture
{
	class DataRemovalRequest;
}

namespace __jni_impl::android::view::contentcapture
{
	class DataRemovalRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject addLocusId(__jni_impl::android::content::LocusId arg0, jint arg1);
		QAndroidJniObject build();
		QAndroidJniObject forEverything();
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../content/LocusId.hpp"
#include "DataRemovalRequest.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	
	// Constructors
	void DataRemovalRequest_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.DataRemovalRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DataRemovalRequest_Builder::addLocusId(__jni_impl::android::content::LocusId arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addLocusId",
			"(Landroid/content/LocusId;I)Landroid/view/contentcapture/DataRemovalRequest$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DataRemovalRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/contentcapture/DataRemovalRequest;"
		);
	}
	QAndroidJniObject DataRemovalRequest_Builder::forEverything()
	{
		return __thiz.callObjectMethod(
			"forEverything",
			"()Landroid/view/contentcapture/DataRemovalRequest$Builder;"
		);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class DataRemovalRequest_Builder : public __jni_impl::android::view::contentcapture::DataRemovalRequest_Builder
	{
	public:
		DataRemovalRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
		DataRemovalRequest_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

