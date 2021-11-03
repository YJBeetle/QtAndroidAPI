#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ServiceInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject ServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ServiceInfo::FLAG_EXTERNAL_SERVICE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_EXTERNAL_SERVICE"
		);
	}
	jint ServiceInfo::FLAG_ISOLATED_PROCESS()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_ISOLATED_PROCESS"
		);
	}
	jint ServiceInfo::FLAG_SINGLE_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jint ServiceInfo::FLAG_STOP_WITH_TASK()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_STOP_WITH_TASK"
		);
	}
	jint ServiceInfo::FLAG_USE_APP_ZYGOTE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_USE_APP_ZYGOTE"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_DATA_SYNC()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_DATA_SYNC"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_LOCATION()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_LOCATION"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MANIFEST()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MANIFEST"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_NONE"
		);
	}
	jint ServiceInfo::FOREGROUND_SERVICE_TYPE_PHONE_CALL()
	{
		return getStaticField<jint>(
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
	JString ServiceInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		);
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
	jint ServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ServiceInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint ServiceInfo::getForegroundServiceType() const
	{
		return callMethod<jint>(
			"getForegroundServiceType",
			"()I"
		);
	}
	JString ServiceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

