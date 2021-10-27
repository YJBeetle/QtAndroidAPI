#include "./Manifest_permission_group.hpp"

namespace android
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
	
	Manifest_permission_group::Manifest_permission_group(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Manifest_permission_group::Manifest_permission_group()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest$permission_group",
			"()V"
		);
	}
	
	// Methods
} // namespace android

