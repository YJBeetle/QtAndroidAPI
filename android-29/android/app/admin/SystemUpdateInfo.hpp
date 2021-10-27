#pragma once

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
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getReceivedTime();
		jint getSecurityPatchState();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_FALSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_FALSE"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_TRUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_TRUE"
		);
	}
	jint SystemUpdateInfo::SECURITY_PATCH_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_UNKNOWN"
		);
	}
	
	// Constructors
	void SystemUpdateInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.SystemUpdateInfo",
			"(V)V");
	}
	
	// Methods
	jint SystemUpdateInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SystemUpdateInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong SystemUpdateInfo::getReceivedTime()
	{
		return __thiz.callMethod<jlong>(
			"getReceivedTime",
			"()J"
		);
	}
	jint SystemUpdateInfo::getSecurityPatchState()
	{
		return __thiz.callMethod<jint>(
			"getSecurityPatchState",
			"()I"
		);
	}
	jint SystemUpdateInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SystemUpdateInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SystemUpdateInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

