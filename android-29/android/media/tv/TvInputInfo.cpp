#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TvInputInfo.hpp"

namespace android::media::tv
{
	// Fields
	QAndroidJniObject TvInputInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring TvInputInfo::EXTRA_INPUT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputInfo",
			"EXTRA_INPUT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TvInputInfo::TYPE_COMPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_COMPONENT"
		);
	}
	jint TvInputInfo::TYPE_COMPOSITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_COMPOSITE"
		);
	}
	jint TvInputInfo::TYPE_DISPLAY_PORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_DISPLAY_PORT"
		);
	}
	jint TvInputInfo::TYPE_DVI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_DVI"
		);
	}
	jint TvInputInfo::TYPE_HDMI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_HDMI"
		);
	}
	jint TvInputInfo::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_OTHER"
		);
	}
	jint TvInputInfo::TYPE_SCART()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_SCART"
		);
	}
	jint TvInputInfo::TYPE_SVIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_SVIDEO"
		);
	}
	jint TvInputInfo::TYPE_TUNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_TUNER"
		);
	}
	jint TvInputInfo::TYPE_VGA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_VGA"
		);
	}
	
	TvInputInfo::TvInputInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean TvInputInfo::canRecord()
	{
		return __thiz.callMethod<jboolean>(
			"canRecord",
			"()Z"
		);
	}
	QAndroidJniObject TvInputInfo::createSettingsIntent()
	{
		return __thiz.callObjectMethod(
			"createSettingsIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject TvInputInfo::createSetupIntent()
	{
		return __thiz.callObjectMethod(
			"createSetupIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint TvInputInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TvInputInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TvInputInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TvInputInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputInfo::getParentId()
	{
		return __thiz.callObjectMethod(
			"getParentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvInputInfo::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jint TvInputInfo::getTunerCount()
	{
		return __thiz.callMethod<jint>(
			"getTunerCount",
			"()I"
		);
	}
	jint TvInputInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint TvInputInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean TvInputInfo::isHidden(android::content::Context arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean TvInputInfo::isPassthroughInput()
	{
		return __thiz.callMethod<jboolean>(
			"isPassthroughInput",
			"()Z"
		);
	}
	jstring TvInputInfo::loadCustomLabel(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"loadCustomLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject TvInputInfo::loadIcon(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring TvInputInfo::loadLabel(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring TvInputInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TvInputInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::tv

