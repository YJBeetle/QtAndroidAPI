#include "../../os/Parcel.hpp"
#include "./ServiceInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass ServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ServiceInfo::FLAG_EXTERNAL_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_EXTERNAL_SERVICE"
		);
	}
	jint ServiceInfo::FLAG_ISOLATED_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_ISOLATED_PROCESS"
		);
	}
	jint ServiceInfo::FLAG_SINGLE_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jint ServiceInfo::FLAG_STOP_WITH_TASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_STOP_WITH_TASK"
		);
	}
	jint ServiceInfo::FLAG_USE_APP_ZYGOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_USE_APP_ZYGOTE"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_DATA_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_DATA_SYNC"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_LOCATION"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MANIFEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MANIFEST"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_NONE"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_PHONE_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_PHONE_CALL"
		);
	}
	jint ServiceInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jstring ServiceInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ServiceInfo::ServiceInfo(QAndroidJniObject obj) : android::content::pm::ComponentInfo(obj) {}
	
	// Constructors
	ServiceInfo::ServiceInfo()
		: android::content::pm::ComponentInfo(
			"android.content.pm.ServiceInfo",
			"()V"
		) {}
	ServiceInfo::ServiceInfo(android::content::pm::ServiceInfo &arg0)
		: android::content::pm::ComponentInfo(
			"android.content.pm.ServiceInfo",
			"(Landroid/content/pm/ServiceInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ServiceInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jint ServiceInfo::getForegroundServiceType()
	{
		return callMethod<jint>(
			"getForegroundServiceType",
			"()I"
		);
	}
	jstring ServiceInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

