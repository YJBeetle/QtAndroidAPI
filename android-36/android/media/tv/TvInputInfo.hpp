#pragma once

#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/pm/ServiceInfo.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TvInputInfo.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TvInputInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString TvInputInfo::EXTRA_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputInfo",
			"EXTRA_INPUT_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInputInfo::TYPE_COMPONENT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_COMPONENT"
		);
	}
	inline jint TvInputInfo::TYPE_COMPOSITE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_COMPOSITE"
		);
	}
	inline jint TvInputInfo::TYPE_DISPLAY_PORT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_DISPLAY_PORT"
		);
	}
	inline jint TvInputInfo::TYPE_DVI()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_DVI"
		);
	}
	inline jint TvInputInfo::TYPE_HDMI()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_HDMI"
		);
	}
	inline jint TvInputInfo::TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_OTHER"
		);
	}
	inline jint TvInputInfo::TYPE_SCART()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_SCART"
		);
	}
	inline jint TvInputInfo::TYPE_SVIDEO()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_SVIDEO"
		);
	}
	inline jint TvInputInfo::TYPE_TUNER()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_TUNER"
		);
	}
	inline jint TvInputInfo::TYPE_VGA()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputInfo",
			"TYPE_VGA"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean TvInputInfo::canPauseRecording() const
	{
		return callMethod<jboolean>(
			"canPauseRecording",
			"()Z"
		);
	}
	inline jboolean TvInputInfo::canRecord() const
	{
		return callMethod<jboolean>(
			"canRecord",
			"()Z"
		);
	}
	inline android::content::Intent TvInputInfo::createSettingsIntent() const
	{
		return callObjectMethod(
			"createSettingsIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline android::content::Intent TvInputInfo::createSetupIntent() const
	{
		return callObjectMethod(
			"createSetupIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint TvInputInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TvInputInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle TvInputInfo::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString TvInputInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline JString TvInputInfo::getParentId() const
	{
		return callObjectMethod(
			"getParentId",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo TvInputInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	inline jint TvInputInfo::getTunerCount() const
	{
		return callMethod<jint>(
			"getTunerCount",
			"()I"
		);
	}
	inline jint TvInputInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint TvInputInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean TvInputInfo::isHidden(android::content::Context arg0) const
	{
		return callMethod<jboolean>(
			"isHidden",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline jboolean TvInputInfo::isPassthroughInput() const
	{
		return callMethod<jboolean>(
			"isPassthroughInput",
			"()Z"
		);
	}
	inline JString TvInputInfo::loadCustomLabel(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadCustomLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable TvInputInfo::loadIcon(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString TvInputInfo::loadLabel(android::content::Context arg0) const
	{
		return callObjectMethod(
			"loadLabel",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString TvInputInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TvInputInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
