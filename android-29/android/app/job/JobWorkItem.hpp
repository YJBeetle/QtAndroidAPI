#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::job
{
	class JobWorkItem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Intent arg0);
		void __constructor(__jni_impl::android::content::Intent arg0, jlong arg1, jlong arg2);
		
		// Methods
		jint describeContents();
		jint getDeliveryCount();
		jlong getEstimatedNetworkDownloadBytes();
		jlong getEstimatedNetworkUploadBytes();
		QAndroidJniObject getIntent();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::job

#include "../../content/Intent.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	QAndroidJniObject JobWorkItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobWorkItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void JobWorkItem::__constructor(__jni_impl::android::content::Intent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void JobWorkItem::__constructor(__jni_impl::android::content::Intent arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobWorkItem",
			"(Landroid/content/Intent;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jint JobWorkItem::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint JobWorkItem::getDeliveryCount()
	{
		return __thiz.callMethod<jint>(
			"getDeliveryCount",
			"()I"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkDownloadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkDownloadBytes",
			"()J"
		);
	}
	jlong JobWorkItem::getEstimatedNetworkUploadBytes()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedNetworkUploadBytes",
			"()J"
		);
	}
	QAndroidJniObject JobWorkItem::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring JobWorkItem::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JobWorkItem::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobWorkItem : public __jni_impl::android::app::job::JobWorkItem
	{
	public:
		JobWorkItem(QAndroidJniObject obj) { __thiz = obj; }
		JobWorkItem(__jni_impl::android::content::Intent arg0)
		{
			__constructor(
				arg0);
		}
		JobWorkItem(__jni_impl::android::content::Intent arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app::job

