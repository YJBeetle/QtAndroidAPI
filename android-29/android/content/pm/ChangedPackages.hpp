#pragma once

#ifndef ANDROID_CONTENT_PM_CHANGEDPACKAGES
#define ANDROID_CONTENT_PM_CHANGEDPACKAGES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ChangedPackages : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jint getSequenceNumber();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getPackageNames();
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ChangedPackages::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ChangedPackages",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ChangedPackages::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ChangedPackages",
			"(ILjava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint ChangedPackages::getSequenceNumber()
	{
		return __thiz.callMethod<jint>(
			"getSequenceNumber",
			"()I"
		);
	}
	jint ChangedPackages::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ChangedPackages::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ChangedPackages::getPackageNames()
	{
		return __thiz.callObjectMethod(
			"getPackageNames",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ChangedPackages : public __jni_impl::android::content::pm::ChangedPackages
	{
	public:
		ChangedPackages(QAndroidJniObject obj) { __thiz = obj; }
		ChangedPackages(jint arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_CHANGEDPACKAGES

