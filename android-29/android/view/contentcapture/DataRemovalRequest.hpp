#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::contentcapture
{
	class DataRemovalRequest_Builder;
}

namespace __jni_impl::android::view::contentcapture
{
	class DataRemovalRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_IS_PREFIX();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getLocusIdRequests();
		jstring getPackageName();
		jboolean isForEverything();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::contentcapture

#include "../../os/Parcel.hpp"
#include "DataRemovalRequest_Builder.hpp"

namespace __jni_impl::android::view::contentcapture
{
	// Fields
	QAndroidJniObject DataRemovalRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.contentcapture.DataRemovalRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DataRemovalRequest::FLAG_IS_PREFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.contentcapture.DataRemovalRequest",
			"FLAG_IS_PREFIX"
		);
	}
	
	// Constructors
	void DataRemovalRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.contentcapture.DataRemovalRequest",
			"(V)V");
	}
	
	// Methods
	jint DataRemovalRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject DataRemovalRequest::getLocusIdRequests()
	{
		return __thiz.callObjectMethod(
			"getLocusIdRequests",
			"()Ljava/util/List;"
		);
	}
	jstring DataRemovalRequest::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DataRemovalRequest::isForEverything()
	{
		return __thiz.callMethod<jboolean>(
			"isForEverything",
			"()Z"
		);
	}
	void DataRemovalRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::contentcapture

namespace android::view::contentcapture
{
	class DataRemovalRequest : public __jni_impl::android::view::contentcapture::DataRemovalRequest
	{
	public:
		DataRemovalRequest(QAndroidJniObject obj) { __thiz = obj; }
		DataRemovalRequest()
		{
			__constructor();
		}
	};
} // namespace android::view::contentcapture

