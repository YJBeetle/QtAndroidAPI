#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Build_VERSION : public __JniBaseClass
	{
	public:
		// Fields
		static jstring BASE_OS();
		static jstring CODENAME();
		static jstring INCREMENTAL();
		static jint PREVIEW_SDK_INT();
		static jstring RELEASE();
		static jstring SDK();
		static jint SDK_INT();
		static jstring SECURITY_PATCH();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	jstring Build_VERSION::BASE_OS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"BASE_OS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::CODENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"CODENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::INCREMENTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"INCREMENTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_VERSION::PREVIEW_SDK_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION",
			"PREVIEW_SDK_INT"
		);
	}
	jstring Build_VERSION::RELEASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::SDK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"SDK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_VERSION::SDK_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION",
			"SDK_INT"
		);
	}
	jstring Build_VERSION::SECURITY_PATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"SECURITY_PATCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Build_VERSION::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Build$VERSION",
			"()V"
		);
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

