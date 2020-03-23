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
		static QAndroidJniObject ACTIVITY_RECOGNITION();
		static QAndroidJniObject CALENDAR();
		static QAndroidJniObject CALL_LOG();
		static QAndroidJniObject CAMERA();
		static QAndroidJniObject CONTACTS();
		static QAndroidJniObject LOCATION();
		static QAndroidJniObject MICROPHONE();
		static QAndroidJniObject PHONE();
		static QAndroidJniObject SENSORS();
		static QAndroidJniObject SMS();
		static QAndroidJniObject STORAGE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	QAndroidJniObject Manifest_permission_group::ACTIVITY_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"ACTIVITY_RECOGNITION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CALENDAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CALL_LOG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CAMERA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"CONTACTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::MICROPHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"MICROPHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"SENSORS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission_group::STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission_group",
			"STORAGE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Manifest_permission_group::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest$permission_group",
			"()V");
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

