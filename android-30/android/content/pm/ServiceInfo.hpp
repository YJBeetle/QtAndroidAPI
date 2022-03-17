#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ServiceInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ServiceInfo::FLAG_EXTERNAL_SERVICE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_EXTERNAL_SERVICE"
		);
	}
	inline jint ServiceInfo::FLAG_ISOLATED_PROCESS()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_ISOLATED_PROCESS"
		);
	}
	inline jint ServiceInfo::FLAG_SINGLE_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_SINGLE_USER"
		);
	}
	inline jint ServiceInfo::FLAG_STOP_WITH_TASK()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_STOP_WITH_TASK"
		);
	}
	inline jint ServiceInfo::FLAG_USE_APP_ZYGOTE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FLAG_USE_APP_ZYGOTE"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_CAMERA()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_CAMERA"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_DATA_SYNC()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_DATA_SYNC"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_LOCATION()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_LOCATION"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MANIFEST()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MANIFEST"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_MICROPHONE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_MICROPHONE"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_NONE"
		);
	}
	inline jint ServiceInfo::FOREGROUND_SERVICE_TYPE_PHONE_CALL()
	{
		return getStaticField<jint>(
			"android.content.pm.ServiceInfo",
			"FOREGROUND_SERVICE_TYPE_PHONE_CALL"
		);
	}
	inline jint ServiceInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline JString ServiceInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ServiceInfo::ServiceInfo()
		: android::content::pm::ComponentInfo(
			"android.content.pm.ServiceInfo",
			"()V"
		) {}
	inline ServiceInfo::ServiceInfo(android::content::pm::ServiceInfo &arg0)
		: android::content::pm::ComponentInfo(
			"android.content.pm.ServiceInfo",
			"(Landroid/content/pm/ServiceInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ServiceInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint ServiceInfo::getForegroundServiceType() const
	{
		return callMethod<jint>(
			"getForegroundServiceType",
			"()I"
		);
	}
	inline JString ServiceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "./PackageItemInfo.hpp"
#include "./ComponentInfo.hpp"

