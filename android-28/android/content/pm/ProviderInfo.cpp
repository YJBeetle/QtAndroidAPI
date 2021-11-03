#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	JString ProviderInfo::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
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
	JArray ProviderInfo::pathPermissions()
	{
		return getObjectField(
			"pathPermissions",
			"[Landroid/content/pm/PathPermission;"
		);
	}
	JString ProviderInfo::readPermission()
	{
		return getObjectField(
			"readPermission",
			"Ljava/lang/String;"
		);
	}
	JArray ProviderInfo::uriPermissionPatterns()
	{
		return getObjectField(
			"uriPermissionPatterns",
			"[Landroid/os/PatternMatcher;"
		);
	}
	JString ProviderInfo::writePermission()
	{
		return getObjectField(
			"writePermission",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ProviderInfo::ProviderInfo(QAndroidJniObject obj) : android::content::pm::ComponentInfo(obj) {}
	
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
	jint ProviderInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ProviderInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JString ProviderInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

