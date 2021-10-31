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
	
	// QAndroidJniObject forward
	TvInputInfo::TvInputInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TvInputInfo::canRecord()
	{
		return callMethod<jboolean>(
			"canRecord",
			"()Z"
		);
	}
	QAndroidJniObject TvInputInfo::createSettingsIntent()
	{
		return callObjectMethod(
			"createSettingsIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject TvInputInfo::createSetupIntent()
	{
		return callObjectMethod(
			"createSetupIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint TvInputInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TvInputInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TvInputInfo::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TvInputInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputInfo::getParentId()
	{
		return callObjectMethod(
			"getParentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvInputInfo::getServiceInfo()
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jint TvInputInfo::getTunerCount()
	{
		return callMethod<jint>(
			"getTunerCount",
			"()I"
		);
	}
	jint TvInputInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint TvInputInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean TvInputInfo::isHidden(android::content::Context arg0)
	{
		return callMethod<jboolean>(
			"isHidden",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean TvInputInfo::isPassthroughInput()
	{
		return callMethod<jboolean>(
			"isPassthroughInput",
			"()Z"
		);
	}
	jstring TvInputInfo::loadCustomLabel(android::content::Context arg0)
	{
		return callObjectMethod(
			"loadCustomLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	QAndroidJniObject TvInputInfo::loadIcon(android::content::Context arg0)
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	jstring TvInputInfo::loadLabel(android::content::Context arg0)
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	jstring TvInputInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TvInputInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

