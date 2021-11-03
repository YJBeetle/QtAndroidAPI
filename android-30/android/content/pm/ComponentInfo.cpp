#include "./ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ComponentInfo.hpp"

namespace android::content::pm
{
	// Fields
	android::content::pm::ApplicationInfo ComponentInfo::applicationInfo()
	{
		return getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	jint ComponentInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	jboolean ComponentInfo::directBootAware()
	{
		return getField<jboolean>(
			"directBootAware"
		);
	}
	jboolean ComponentInfo::enabled()
	{
		return getField<jboolean>(
			"enabled"
		);
	}
	jboolean ComponentInfo::exported()
	{
		return getField<jboolean>(
			"exported"
		);
	}
	JString ComponentInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	JString ComponentInfo::splitName()
	{
		return getObjectField(
			"splitName",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ComponentInfo::ComponentInfo(QJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
	
	// Constructors
	ComponentInfo::ComponentInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ComponentInfo",
			"()V"
		) {}
	ComponentInfo::ComponentInfo(android::content::pm::ComponentInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ComponentInfo",
			"(Landroid/content/pm/ComponentInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ComponentInfo::getBannerResource()
	{
		return callMethod<jint>(
			"getBannerResource",
			"()I"
		);
	}
	jint ComponentInfo::getIconResource()
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jint ComponentInfo::getLogoResource()
	{
		return callMethod<jint>(
			"getLogoResource",
			"()I"
		);
	}
	jboolean ComponentInfo::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void ComponentInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

