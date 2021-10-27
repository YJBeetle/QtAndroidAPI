#include "../os/Parcel.hpp"
#include "./VisualVoicemailSmsFilterSettings_Builder.hpp"
#include "./VisualVoicemailSmsFilterSettings.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject VisualVoicemailSmsFilterSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VisualVoicemailSmsFilterSettings::DESTINATION_PORT_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"DESTINATION_PORT_ANY"
		);
	}
	jint VisualVoicemailSmsFilterSettings::DESTINATION_PORT_DATA_SMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"DESTINATION_PORT_DATA_SMS"
		);
	}
	jstring VisualVoicemailSmsFilterSettings::clientPrefix()
	{
		return __thiz.getObjectField(
			"clientPrefix",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VisualVoicemailSmsFilterSettings::destinationPort()
	{
		return __thiz.getField<jint>(
			"destinationPort"
		);
	}
	QAndroidJniObject VisualVoicemailSmsFilterSettings::originatingNumbers()
	{
		return __thiz.getObjectField(
			"originatingNumbers",
			"Ljava/util/List;"
		);
	}
	
	VisualVoicemailSmsFilterSettings::VisualVoicemailSmsFilterSettings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint VisualVoicemailSmsFilterSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VisualVoicemailSmsFilterSettings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VisualVoicemailSmsFilterSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

