#pragma once

#ifndef ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY
#define ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::admin
{
	class SystemUpdatePolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_INSTALL_AUTOMATIC();
		static jint TYPE_INSTALL_WINDOWED();
		static jint TYPE_POSTPONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject createAutomaticInstallPolicy();
		static QAndroidJniObject createWindowedInstallPolicy(jint arg0, jint arg1);
		static QAndroidJniObject createPostponeInstallPolicy();
		jint getPolicyType();
		jint getInstallWindowStart();
		jint getInstallWindowEnd();
		QAndroidJniObject setFreezePeriods(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getFreezePeriods();
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject SystemUpdatePolicy::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint SystemUpdatePolicy::TYPE_INSTALL_AUTOMATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_AUTOMATIC");
	}
	jint SystemUpdatePolicy::TYPE_INSTALL_WINDOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_INSTALL_WINDOWED");
	}
	jint SystemUpdatePolicy::TYPE_POSTPONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy",
			"TYPE_POSTPONE");
	}
	
	// Constructors
	void SystemUpdatePolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.SystemUpdatePolicy",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SystemUpdatePolicy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SystemUpdatePolicy::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SystemUpdatePolicy::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SystemUpdatePolicy::createAutomaticInstallPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createAutomaticInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;");
	}
	QAndroidJniObject SystemUpdatePolicy::createWindowedInstallPolicy(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createWindowedInstallPolicy",
			"(II)Landroid/app/admin/SystemUpdatePolicy;",
			arg0,
			arg1);
	}
	QAndroidJniObject SystemUpdatePolicy::createPostponeInstallPolicy()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.admin.SystemUpdatePolicy",
			"createPostponeInstallPolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;");
	}
	jint SystemUpdatePolicy::getPolicyType()
	{
		return __thiz.callMethod<jint>(
			"getPolicyType",
			"()I");
	}
	jint SystemUpdatePolicy::getInstallWindowStart()
	{
		return __thiz.callMethod<jint>(
			"getInstallWindowStart",
			"()I");
	}
	jint SystemUpdatePolicy::getInstallWindowEnd()
	{
		return __thiz.callMethod<jint>(
			"getInstallWindowEnd",
			"()I");
	}
	QAndroidJniObject SystemUpdatePolicy::setFreezePeriods(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setFreezePeriods",
			"(Ljava/util/List;)Landroid/app/admin/SystemUpdatePolicy;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SystemUpdatePolicy::getFreezePeriods()
	{
		return __thiz.callObjectMethod(
			"getFreezePeriods",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class SystemUpdatePolicy : public __jni_impl::android::app::admin::SystemUpdatePolicy
	{
	public:
		SystemUpdatePolicy(QAndroidJniObject obj) { __thiz = obj; }
		SystemUpdatePolicy()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY

