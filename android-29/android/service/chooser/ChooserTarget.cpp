#include "../../content/ComponentName.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./ChooserTarget.hpp"

namespace android::service::chooser
{
	// Fields
	QAndroidJniObject ChooserTarget::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.chooser.ChooserTarget",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ChooserTarget::ChooserTarget(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChooserTarget::ChooserTarget(jstring &arg0, android::graphics::drawable::Icon &arg1, jfloat &arg2, android::content::ComponentName &arg3, android::os::Bundle &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.service.chooser.ChooserTarget",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;FLandroid/content/ComponentName;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	ChooserTarget::ChooserTarget(const QString &arg0, android::graphics::drawable::Icon &arg1, jfloat &arg2, android::content::ComponentName &arg3, android::os::Bundle &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.service.chooser.ChooserTarget",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;FLandroid/content/ComponentName;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	jint ChooserTarget::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ChooserTarget::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject ChooserTarget::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	QAndroidJniObject ChooserTarget::getIntentExtras()
	{
		return __thiz.callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat ChooserTarget::getScore()
	{
		return __thiz.callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	jstring ChooserTarget::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ChooserTarget::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ChooserTarget::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::chooser

