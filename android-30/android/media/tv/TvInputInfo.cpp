#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TvInputInfo.hpp"

namespace android::media::tv
{
	// Fields
	JObject TvInputInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString TvInputInfo::EXTRA_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputInfo",
			"EXTRA_INPUT_ID",
			"Ljava/lang/String;"
		);
	}
	jint TvInputInfo::TYPE_COMPONENT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_COMPONENT"
		);
	}
	jint TvInputInfo::TYPE_COMPOSITE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_COMPOSITE"
		);
	}
	jint TvInputInfo::TYPE_DISPLAY_PORT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_DISPLAY_PORT"
		);
	}
	jint TvInputInfo::TYPE_DVI()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_DVI"
		);
	}
	jint TvInputInfo::TYPE_HDMI()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_HDMI"
		);
	}
	jint TvInputInfo::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_OTHER"
		);
	}
	jint TvInputInfo::TYPE_SCART()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_SCART"
		);
	}
	jint TvInputInfo::TYPE_SVIDEO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_SVIDEO"
		);
	}
	jint TvInputInfo::TYPE_TUNER()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_TUNER"
		);
	}
	jint TvInputInfo::TYPE_VGA()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_VGA"
		);
	}
	
	// QJniObject forward
	TvInputInfo::TvInputInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TvInputInfo::canRecord() const
	{
		return callMethod<jboolean>(
			"canRecord",
			"()Z"
		);
	}
	android::content::Intent TvInputInfo::createSettingsIntent() const
	{
		return callObjectMethod(
			"createSettingsIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::content::Intent TvInputInfo::createSetupIntent() const
	{
		return callObjectMethod(
			"createSetupIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint TvInputInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TvInputInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle TvInputInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString TvInputInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString TvInputInfo::getParentId() const
	{
		return callObjectMethod(
			"getParentId",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::ServiceInfo TvInputInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jint TvInputInfo::getTunerCount() const
	{
		return callMethod<jint>(
			"getTunerCount",
			"()I"
		);
	}
	jint TvInputInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint TvInputInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean TvInputInfo::isHidden(android::content::Context arg0) const
	{
		return callMethod<jboolean>(
			"isHidden",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean TvInputInfo::isPassthroughInput() const
	{
		return callMethod<jboolean>(
			"isPassthroughInput",
			"()Z"
		);
	}
	JString TvInputInfo::loadCustomLabel(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadCustomLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable TvInputInfo::loadIcon(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	JString TvInputInfo::loadLabel(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString TvInputInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TvInputInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

