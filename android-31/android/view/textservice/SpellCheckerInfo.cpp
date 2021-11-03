#include "../../content/ComponentName.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./SpellCheckerSubtype.hpp"
#include "./SpellCheckerInfo.hpp"

namespace android::view::textservice
{
	// Fields
	JObject SpellCheckerInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SpellCheckerInfo::SpellCheckerInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SpellCheckerInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ComponentName SpellCheckerInfo::getComponent()
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring SpellCheckerInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SpellCheckerInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::pm::ServiceInfo SpellCheckerInfo::getServiceInfo()
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jstring SpellCheckerInfo::getSettingsActivity()
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::view::textservice::SpellCheckerSubtype SpellCheckerInfo::getSubtypeAt(jint arg0)
	{
		return callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/textservice/SpellCheckerSubtype;",
			arg0
		);
	}
	jint SpellCheckerInfo::getSubtypeCount()
	{
		return callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	android::graphics::drawable::Drawable SpellCheckerInfo::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring SpellCheckerInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	void SpellCheckerInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

