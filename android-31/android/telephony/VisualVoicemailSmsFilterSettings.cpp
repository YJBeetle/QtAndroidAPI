#include "../os/Parcel.hpp"
#include "./VisualVoicemailSmsFilterSettings.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass VisualVoicemailSmsFilterSettings::CREATOR()
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
	jstring VisualVoicemailSmsFilterSettings::clientPrefix()
	{
		return getObjectField(
			"clientPrefix",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VisualVoicemailSmsFilterSettings::destinationPort()
	{
		return getField<jint>(
			"destinationPort"
		);
	}
	__JniBaseClass VisualVoicemailSmsFilterSettings::originatingNumbers()
	{
		return getObjectField(
			"originatingNumbers",
			"Ljava/util/List;"
		);
	}
	
	// QJniObject forward
	VisualVoicemailSmsFilterSettings::VisualVoicemailSmsFilterSettings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint VisualVoicemailSmsFilterSettings::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VisualVoicemailSmsFilterSettings::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

