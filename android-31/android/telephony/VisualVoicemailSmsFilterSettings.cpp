#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./VisualVoicemailSmsFilterSettings.hpp"

namespace android::telephony
{
	// Fields
	JObject VisualVoicemailSmsFilterSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VisualVoicemailSmsFilterSettings::DESTINATION_PORT_ANY()
	{
		return getStaticField<jint>(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"DESTINATION_PORT_ANY"
		);
	}
	jint VisualVoicemailSmsFilterSettings::DESTINATION_PORT_DATA_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"DESTINATION_PORT_DATA_SMS"
		);
	}
	JString VisualVoicemailSmsFilterSettings::clientPrefix()
	{
		return getObjectField(
			"clientPrefix",
			"Ljava/lang/String;"
		);
	}
	jint VisualVoicemailSmsFilterSettings::destinationPort()
	{
		return getField<jint>(
			"destinationPort"
		);
	}
	JObject VisualVoicemailSmsFilterSettings::originatingNumbers()
	{
		return getObjectField(
			"originatingNumbers",
			"Ljava/util/List;"
		);
	}
	
	// QAndroidJniObject forward
	VisualVoicemailSmsFilterSettings::VisualVoicemailSmsFilterSettings(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VisualVoicemailSmsFilterSettings::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString VisualVoicemailSmsFilterSettings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VisualVoicemailSmsFilterSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

