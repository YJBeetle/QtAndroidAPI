#include "../Intent.hpp"
#include "./PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "./LabeledIntent.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject LabeledIntent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LabeledIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	LabeledIntent::LabeledIntent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LabeledIntent::LabeledIntent(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	LabeledIntent::LabeledIntent(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	LabeledIntent::LabeledIntent(android::content::Intent arg0, jstring arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	LabeledIntent::LabeledIntent(android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jint LabeledIntent::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jint LabeledIntent::getLabelResource()
	{
		return __thiz.callMethod<jint>(
			"getLabelResource",
			"()I"
		);
	}
	jstring LabeledIntent::getNonLocalizedLabel()
	{
		return __thiz.callObjectMethod(
			"getNonLocalizedLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LabeledIntent::getSourcePackage()
	{
		return __thiz.callObjectMethod(
			"getSourcePackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LabeledIntent::loadIcon(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring LabeledIntent::loadLabel(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void LabeledIntent::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void LabeledIntent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

