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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
