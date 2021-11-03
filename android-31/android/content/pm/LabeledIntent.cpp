#include "../Intent.hpp"
#include "./PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./LabeledIntent.hpp"

namespace android::content::pm
{
	// Fields
	JObject LabeledIntent::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.LabeledIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	LabeledIntent::LabeledIntent(QJniObject obj) : android::content::Intent(obj) {}
	
	// Constructors
	LabeledIntent::LabeledIntent(JString arg0, jint arg1, jint arg2)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	LabeledIntent::LabeledIntent(JString arg0, JString arg1, jint arg2)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	LabeledIntent::LabeledIntent(android::content::Intent arg0, JString arg1, jint arg2, jint arg3)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	LabeledIntent::LabeledIntent(android::content::Intent arg0, JString arg1, JString arg2, jint arg3)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		) {}
	
	// Methods
	jint LabeledIntent::getIconResource()
	{
		return callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jint LabeledIntent::getLabelResource()
	{
		return callMethod<jint>(
			"getLabelResource",
			"()I"
		);
	}
	JString LabeledIntent::getNonLocalizedLabel()
	{
		return callObjectMethod(
			"getNonLocalizedLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString LabeledIntent::getSourcePackage()
	{
		return callObjectMethod(
			"getSourcePackage",
			"()Ljava/lang/String;"
		);
	}
	android::graphics::drawable::Drawable LabeledIntent::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString LabeledIntent::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	void LabeledIntent::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void LabeledIntent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

