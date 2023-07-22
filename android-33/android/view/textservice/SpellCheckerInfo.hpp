#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/pm/PackageManager.def.hpp"
#include "../../content/pm/ServiceInfo.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SpellCheckerSubtype.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerInfo.def.hpp"

namespace android::view::textservice
{
	// Fields
	inline JObject SpellCheckerInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SpellCheckerInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ComponentName SpellCheckerInfo::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline JString SpellCheckerInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString SpellCheckerInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo SpellCheckerInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	inline JString SpellCheckerInfo::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::textservice::SpellCheckerSubtype SpellCheckerInfo::getSubtypeAt(jint arg0) const
	{
		return callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/textservice/SpellCheckerSubtype;",
			arg0
		);
	}
	inline jint SpellCheckerInfo::getSubtypeCount() const
	{
		return callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable SpellCheckerInfo::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString SpellCheckerInfo::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline void SpellCheckerInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textservice;
#endif
