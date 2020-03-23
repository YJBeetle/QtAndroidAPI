#pragma once

#ifndef ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY_VALIDATIONFAILEDEXCEPTION
#define ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY_VALIDATIONFAILEDEXCEPTION

#include "../../../java/lang/IllegalArgumentException.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::admin
{
	class SystemUpdatePolicy_ValidationFailedException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE();
		static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG();
		static jint ERROR_DUPLICATE_OR_OVERLAP();
		static jint ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE();
		static jint ERROR_NEW_FREEZE_PERIOD_TOO_LONG();
		static jint ERROR_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getErrorCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject SystemUpdatePolicy_ValidationFailedException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE");
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG");
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_DUPLICATE_OR_OVERLAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_DUPLICATE_OR_OVERLAP");
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE");
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_NEW_FREEZE_PERIOD_TOO_LONG");
	}
	jint SystemUpdatePolicy_ValidationFailedException::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"ERROR_UNKNOWN");
	}
	
	// Constructors
	void SystemUpdatePolicy_ValidationFailedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.SystemUpdatePolicy$ValidationFailedException",
			"(V)V");
	}
	
	// Methods
	jint SystemUpdatePolicy_ValidationFailedException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I");
	}
	jint SystemUpdatePolicy_ValidationFailedException::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SystemUpdatePolicy_ValidationFailedException::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class SystemUpdatePolicy_ValidationFailedException : public __jni_impl::android::app::admin::SystemUpdatePolicy_ValidationFailedException
	{
	public:
		SystemUpdatePolicy_ValidationFailedException(QAndroidJniObject obj) { __thiz = obj; }
		SystemUpdatePolicy_ValidationFailedException()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY_VALIDATIONFAILEDEXCEPTION

