#pragma once

#ifndef ANDROID_CONTENT_PM_VERSIONEDPACKAGE
#define ANDROID_CONTENT_PM_VERSIONEDPACKAGE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class VersionedPackage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(jstring arg0, jlong arg1);
		
		// Methods
		jstring toString();
		jstring getPackageName();
		jlong getLongVersionCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getVersionCode();
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject VersionedPackage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.VersionedPackage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void VersionedPackage::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void VersionedPackage::__constructor(jstring arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.VersionedPackage",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
	
	// Methods
	jstring VersionedPackage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VersionedPackage::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong VersionedPackage::getLongVersionCode()
	{
		return __thiz.callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	jint VersionedPackage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void VersionedPackage::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint VersionedPackage::getVersionCode()
	{
		return __thiz.callMethod<jint>(
			"getVersionCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class VersionedPackage : public __jni_impl::android::content::pm::VersionedPackage
	{
	public:
		VersionedPackage(QAndroidJniObject obj) { __thiz = obj; }
		VersionedPackage(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		VersionedPackage(jstring arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_VERSIONEDPACKAGE

