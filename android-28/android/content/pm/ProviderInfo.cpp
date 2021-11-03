#include "../../os/Parcel.hpp"
#include "./ProviderInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject ProviderInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ProviderInfo::FLAG_SINGLE_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ProviderInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jstring ProviderInfo::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ProviderInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jboolean ProviderInfo::grantUriPermissions()
	{
		return getField<jboolean>(
			"grantUriPermissions"
		);
	}
	jint ProviderInfo::initOrder()
	{
		return getField<jint>(
			"initOrder"
		);
	}
	jboolean ProviderInfo::isSyncable()
	{
		return getField<jboolean>(
			"isSyncable"
		);
	}
	jboolean ProviderInfo::multiprocess()
	{
		return getField<jboolean>(
			"multiprocess"
		);
	}
	jarray ProviderInfo::pathPermissions()
	{
		return getObjectField(
			"pathPermissions",
			"[Landroid/content/pm/PathPermission;"
		).object<jarray>();
	}
	jstring ProviderInfo::readPermission()
	{
		return getObjectField(
			"readPermission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ProviderInfo::uriPermissionPatterns()
	{
		return getObjectField(
			"uriPermissionPatterns",
			"[Landroid/os/PatternMatcher;"
		).object<jarray>();
	}
	jstring ProviderInfo::writePermission()
	{
		return getObjectField(
			"writePermission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ProviderInfo::ProviderInfo(QJniObject obj) : android::content::pm::ComponentInfo(obj) {}
	
	// Constructors
	ProviderInfo::ProviderInfo()
		: android::content::pm::ComponentInfo(
			"android.content.pm.ProviderInfo",
			"()V"
		) {}
	ProviderInfo::ProviderInfo(android::content::pm::ProviderInfo &arg0)
		: android::content::pm::ComponentInfo(
			"android.content.pm.ProviderInfo",
			"(Landroid/content/pm/ProviderInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ProviderInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ProviderInfo::dump(JObject arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jstring ProviderInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

