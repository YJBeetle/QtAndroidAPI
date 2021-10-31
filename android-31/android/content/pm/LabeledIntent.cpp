#include "../Intent.hpp"
#include "./PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./LabeledIntent.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass LabeledIntent::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.LabeledIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	LabeledIntent::LabeledIntent(QAndroidJniObject obj) : android::content::Intent(obj) {}
	
	// Constructors
	LabeledIntent::LabeledIntent(jstring arg0, jint arg1, jint arg2)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		) {}
	LabeledIntent::LabeledIntent(jstring arg0, jstring arg1, jint arg2)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		) {}
	LabeledIntent::LabeledIntent(android::content::Intent arg0, jstring arg1, jint arg2, jint arg3)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	LabeledIntent::LabeledIntent(android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3)
		: android::content::Intent(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1,
			arg2,
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
	jstring LabeledIntent::getNonLocalizedLabel()
	{
		return callObjectMethod(
			"getNonLocalizedLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LabeledIntent::getSourcePackage()
	{
		return callObjectMethod(
			"getSourcePackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::graphics::drawable::Drawable LabeledIntent::loadIcon(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring LabeledIntent::loadLabel(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
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

