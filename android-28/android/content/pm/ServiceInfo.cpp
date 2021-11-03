#include "../../os/Parcel.hpp"
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
	void ServiceInfo::dump(JObject arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
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

