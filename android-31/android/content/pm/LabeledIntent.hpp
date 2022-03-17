#pragma once

#include "../Intent.def.hpp"
#include "./PackageManager.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./LabeledIntent.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject LabeledIntent::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.LabeledIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline LabeledIntent::LabeledIntent(JString arg0, jint arg1, jint arg2)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	inline LabeledIntent::LabeledIntent(JString arg0, JString arg1, jint arg2)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	inline LabeledIntent::LabeledIntent(android::content::Intent arg0, JString arg1, jint arg2, jint arg3)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	inline LabeledIntent::LabeledIntent(android::content::Intent arg0, JString arg1, JString arg2, jint arg3)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		) {}
	
	// Methods
	inline jint LabeledIntent::getIconResource() const
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	inline jint LabeledIntent::getLabelResource() const
	{
		return callMethod<jint>(
			"getLabelResource",
			"()I"
		);
	}
	inline JString LabeledIntent::getNonLocalizedLabel() const
	{
		return callObjectMethod(
			"getNonLocalizedLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString LabeledIntent::getSourcePackage() const
	{
		return callObjectMethod(
			"getSourcePackage",
			"()Ljava/lang/String;"
		);
	}
	inline android::graphics::drawable::Drawable LabeledIntent::loadIcon(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString LabeledIntent::loadLabel(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline void LabeledIntent::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void LabeledIntent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "../Intent.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
