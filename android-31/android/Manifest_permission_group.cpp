#include "./Manifest_permission_group.hpp"

namespace android
{
	// Fields
	jstring Manifest_permission_group::ACTIVITY_RECOGNITION()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"ACTIVITY_RECOGNITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CALENDAR()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CALL_LOG()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CAMERA()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::CONTACTS()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::LOCATION()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::MICROPHONE()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"MICROPHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::NEARBY_DEVICES()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"NEARBY_DEVICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::PHONE()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::SENSORS()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::SMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission_group::STORAGE()
	{
		return getStaticObjectField(
			"android.Manifest$permission_group",
			"STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Manifest_permission_group::Manifest_permission_group(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Manifest_permission_group::Manifest_permission_group()
		: JObject(
			"android.Manifest$permission_group",
			"()V"
		) {}
	
	// Methods
} // namespace android

