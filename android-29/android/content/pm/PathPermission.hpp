#pragma once

#ifndef ANDROID_CONTENT_PM_PATHPERMISSION
#define ANDROID_CONTENT_PM_PATHPERMISSION

#include "../../../__JniBaseClass.hpp"
#include "../../os/PatternMatcher.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class PathPermission : public __jni_impl::android::os::PatternMatcher
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jstring arg2, jstring arg3);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject getReadPermission();
		QAndroidJniObject getWritePermission();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PathPermission::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PathPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void PathPermission::__constructor(jstring arg0, jint arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PathPermission",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PathPermission::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PathPermission",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PathPermission::getReadPermission()
	{
		return __thiz.callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PathPermission::getWritePermission()
	{
		return __thiz.callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;");
	}
	void PathPermission::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PathPermission : public __jni_impl::android::content::pm::PathPermission
	{
	public:
		PathPermission(QAndroidJniObject obj) { __thiz = obj; }
		PathPermission(jstring arg0, jint arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		PathPermission(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PATHPERMISSION

