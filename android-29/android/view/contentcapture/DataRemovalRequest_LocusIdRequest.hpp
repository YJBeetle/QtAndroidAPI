#pragma once

#ifndef ANDROID_VIEW_CONTENTCAPTURE_DATAREMOVALREQUEST_LOCUSIDREQUEST
#define ANDROID_VIEW_CONTENTCAPTURE_DATAREMOVALREQUEST_LOCUSIDREQUEST

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
	class DataRemovalRequest_LocusIdRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getFlags();
		QAndroidJniObject getLocusId();
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../content/LocusId.hpp"
#include "DataRemovalRequest.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	
	// Constructors
	void DataRemovalRequest_LocusIdRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.DataRemovalRequest$LocusIdRequest",
			"(V)V");
	}
	
	// Methods
	jint DataRemovalRequest_LocusIdRequest::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject DataRemovalRequest_LocusIdRequest::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class DataRemovalRequest_LocusIdRequest : public __jni_impl::android::view::contentcapture::DataRemovalRequest_LocusIdRequest
	{
	public:
		DataRemovalRequest_LocusIdRequest(QAndroidJniObject obj) { __thiz = obj; }
		DataRemovalRequest_LocusIdRequest()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

#endif // ANDROID_VIEW_CONTENTCAPTURE_DATAREMOVALREQUEST_LOCUSIDREQUEST

