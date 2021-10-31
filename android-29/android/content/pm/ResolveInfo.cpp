#include "../IntentFilter.hpp"
#include "./ActivityInfo.hpp"
#include "./PackageManager.hpp"
#include "./ProviderInfo.hpp"
#include "./ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./ResolveInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass ResolveInfo::CREATOR()
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
	jstring ResolveInfo::nonLocalizedLabel()
	{
		return getObjectField(
			"nonLocalizedLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
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
	jstring ResolveInfo::resolvePackageName()
	{
		return getObjectField(
			"resolvePackageName",
			"Ljava/lang/String;"
		).object<jstring>();
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
	
	// QJniObject forward
	ResolveInfo::ResolveInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ResolveInfo::ResolveInfo()
		: __JniBaseClass(
			"android.content.pm.ResolveInfo",
			"()V"
		) {}
	ResolveInfo::ResolveInfo(android::content::pm::ResolveInfo &arg0)
		: __JniBaseClass(
			"android.content.pm.ResolveInfo",
			"(Landroid/content/pm/ResolveInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ResolveInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ResolveInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jint ResolveInfo::getIconResource()
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	android::graphics::drawable::Drawable ResolveInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring ResolveInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	jstring ResolveInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ResolveInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

