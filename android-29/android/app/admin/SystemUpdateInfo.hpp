#pragma once

#ifndef ANDROID_APP_ADMIN_SYSTEMUPDATEINFO
#define ANDROID_APP_ADMIN_SYSTEMUPDATEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::admin
{
	class SystemUpdateInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SECURITY_PATCH_STATE_FALSE();
		static jint SECURITY_PATCH_STATE_TRUE();
		static jint SECURITY_PATCH_STATE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getReceivedTime();
		jint getSecurityPatchState();
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject SystemUpdateInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SystemUpdateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_FALSE");
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_TRUE");
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_UNKNOWN");
	}
	
	// Constructors
	void SystemUpdateInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.SystemUpdateInfo",
			"(V)V");
	}
	
	// Methods
	jboolean SystemUpdateInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject SystemUpdateInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SystemUpdateInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint SystemUpdateInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SystemUpdateInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong SystemUpdateInfo::getReceivedTime()
	{
		return __thiz.callMethod<jlong>(
			"getReceivedTime",
			"()J");
	}
	jint SystemUpdateInfo::getSecurityPatchState()
	{
		return __thiz.callMethod<jint>(
			"getSecurityPatchState",
			"()I");
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class SystemUpdateInfo : public __jni_impl::android::app::admin::SystemUpdateInfo
	{
	public:
		SystemUpdateInfo(QAndroidJniObject obj) { __thiz = obj; }
		SystemUpdateInfo()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_SYSTEMUPDATEINFO

