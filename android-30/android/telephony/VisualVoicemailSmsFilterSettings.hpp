#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailSmsFilterSettings.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject VisualVoicemailSmsFilterSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint VisualVoicemailSmsFilterSettings::DESTINATION_PORT_ANY()
	{
		return getStaticField<jint>(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"DESTINATION_PORT_ANY"
		);
	}
	inline jint VisualVoicemailSmsFilterSettings::DESTINATION_PORT_DATA_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"DESTINATION_PORT_DATA_SMS"
		);
	}
	inline JString VisualVoicemailSmsFilterSettings::clientPrefix()
	{
		return getObjectField(
			"clientPrefix",
			"Ljava/lang/String;"
		);
	}
	inline jint VisualVoicemailSmsFilterSettings::destinationPort()
	{
		return getField<jint>(
			"destinationPort"
		);
	}
	inline JObject VisualVoicemailSmsFilterSettings::originatingNumbers()
	{
		return getObjectField(
			"originatingNumbers",
			"Ljava/util/List;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VisualVoicemailSmsFilterSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString VisualVoicemailSmsFilterSettings::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VisualVoicemailSmsFilterSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

