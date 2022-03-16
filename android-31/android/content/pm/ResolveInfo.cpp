#include "../IntentFilter.hpp"
#include "./ActivityInfo.hpp"
#include "./PackageManager.hpp"
#include "./ProviderInfo.hpp"
#include "./ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ResolveInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject ResolveInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ResolveInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::content::pm::ActivityInfo ResolveInfo::activityInfo()
	{
		return getObjectField(
			"activityInfo",
			"Landroid/content/pm/ActivityInfo;"
		);
	}
	android::content::IntentFilter ResolveInfo::filter()
	{
		return getObjectField(
			"filter",
			"Landroid/content/IntentFilter;"
		);
	}
	jint ResolveInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	jboolean ResolveInfo::isDefault()
	{
		return getField<jboolean>(
			"isDefault"
		);
	}
	jboolean ResolveInfo::isInstantAppAvailable()
	{
		return getField<jboolean>(
			"isInstantAppAvailable"
		);
	}
	jint ResolveInfo::labelRes()
	{
		return getField<jint>(
			"labelRes"
		);
	}
	jint ResolveInfo::match()
	{
		return getField<jint>(
			"match"
		);
	}
	JString ResolveInfo::nonLocalizedLabel()
	{
		return getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		);
	}
	jint ResolveInfo::preferredOrder()
	{
		return getField<jint>(
			"preferredOrder"
		);
	}
	jint ResolveInfo::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	android::content::pm::ProviderInfo ResolveInfo::providerInfo()
	{
		return getObjectField(
			"providerInfo",
			"Landroid/content/pm/ProviderInfo;"
		);
	}
	JString ResolveInfo::resolvePackageName()
	{
		return getObjectField(
			"resolvePackageName",
			"Ljava/lang/String;"
		);
	}
	android::content::pm::ServiceInfo ResolveInfo::serviceInfo()
	{
		return getObjectField(
			"serviceInfo",
			"Landroid/content/pm/ServiceInfo;"
		);
	}
	jint ResolveInfo::specificIndex()
	{
		return getField<jint>(
			"specificIndex"
		);
	}
	
	// Constructors
	ResolveInfo::ResolveInfo()
		: JObject(
			"android.content.pm.ResolveInfo",
			"()V"
		) {}
	ResolveInfo::ResolveInfo(android::content::pm::ResolveInfo &arg0)
		: JObject(
			"android.content.pm.ResolveInfo",
			"(Landroid/content/pm/ResolveInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ResolveInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResolveInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint ResolveInfo::getIconResource() const
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jboolean ResolveInfo::isCrossProfileIntentForwarderActivity() const
	{
		return callMethod<jboolean>(
			"isCrossProfileIntentForwarderActivity",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable ResolveInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString ResolveInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString ResolveInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ResolveInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

