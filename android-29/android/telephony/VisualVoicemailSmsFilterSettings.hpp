#pragma once

#ifndef ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS
#define ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony
{
	class VisualVoicemailSmsFilterSettings_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class VisualVoicemailSmsFilterSettings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DESTINATION_PORT_ANY();
		static jint DESTINATION_PORT_DATA_SMS();
		jstring clientPrefix();
		jint destinationPort();
		QAndroidJniObject originatingNumbers();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "VisualVoicemailSmsFilterSettings_Builder.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
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
	
	// Constructors
	void VisualVoicemailSmsFilterSettings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.VisualVoicemailSmsFilterSettings",
			"(V)V");
	}
	
	// Methods
	jstring VisualVoicemailSmsFilterSettings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VisualVoicemailSmsFilterSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void VisualVoicemailSmsFilterSettings::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class VisualVoicemailSmsFilterSettings : public __jni_impl::android::telephony::VisualVoicemailSmsFilterSettings
	{
	public:
		VisualVoicemailSmsFilterSettings(QAndroidJniObject obj) { __thiz = obj; }
		VisualVoicemailSmsFilterSettings()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_VISUALVOICEMAILSMSFILTERSETTINGS

