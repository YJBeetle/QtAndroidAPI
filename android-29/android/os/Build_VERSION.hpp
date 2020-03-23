#pragma once

#ifndef ANDROID_OS_BUILD_VERSION
#define ANDROID_OS_BUILD_VERSION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Build_VERSION : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BASE_OS();
		static QAndroidJniObject CODENAME();
		static QAndroidJniObject INCREMENTAL();
		static jint PREVIEW_SDK_INT();
		static QAndroidJniObject RELEASE();
		static QAndroidJniObject SDK();
		static jint SDK_INT();
		static QAndroidJniObject SECURITY_PATCH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject Build_VERSION::BASE_OS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"BASE_OS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build_VERSION::CODENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"CODENAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build_VERSION::INCREMENTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"INCREMENTAL",
			"Ljava/lang/String;");
	}
	jint Build_VERSION::PREVIEW_SDK_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION",
			"PREVIEW_SDK_INT");
	}
	QAndroidJniObject Build_VERSION::RELEASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Build_VERSION::SDK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"SDK",
			"Ljava/lang/String;");
	}
	jint Build_VERSION::SDK_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION",
			"SDK_INT");
	}
	QAndroidJniObject Build_VERSION::SECURITY_PATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"SECURITY_PATCH",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Build_VERSION::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Build$VERSION",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class Build_VERSION : public __jni_impl::android::os::Build_VERSION
	{
	public:
		Build_VERSION(QAndroidJniObject obj) { __thiz = obj; }
		Build_VERSION()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BUILD_VERSION

