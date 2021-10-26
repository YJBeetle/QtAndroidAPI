#pragma once

#ifndef ANDROID_MANIFEST_PERMISSION_GROUP
#define ANDROID_MANIFEST_PERMISSION_GROUP

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class Manifest_permission_group : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTIVITY_RECOGNITION();
		static jstring CALENDAR();
		static jstring CALL_LOG();
		static jstring CAMERA();
		static jstring CONTACTS();
		static jstring LOCATION();
		static jstring MICROPHONE();
		static jstring PHONE();
		static jstring SENSORS();
		static jstring SMS();
		static jstring STORAGE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jstring Manifest_permission_group::ACTIVITY_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"ACTIVITY_RECOGNITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::MICROPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"MICROPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Manifest_permission_group::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest$permission_group",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class Manifest_permission_group : public __jni_impl::android::Manifest_permission_group
	{
	public:
		Manifest_permission_group(QAndroidJniObject obj) { __thiz = obj; }
		Manifest_permission_group()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_MANIFEST_PERMISSION_GROUP

