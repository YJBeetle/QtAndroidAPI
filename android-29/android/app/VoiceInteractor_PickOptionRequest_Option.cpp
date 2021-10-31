#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./VoiceInteractor_PickOptionRequest_Option.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	VoiceInteractor_PickOptionRequest_Option::VoiceInteractor_PickOptionRequest_Option(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_PickOptionRequest_Option::VoiceInteractor_PickOptionRequest_Option(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"(Ljava/lang/CharSequence;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::addSynonym(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addSynonym",
			"(Ljava/lang/CharSequence;)Landroid/app/VoiceInteractor$PickOptionRequest$Option;",
			arg0
		);
	}
	jint VoiceInteractor_PickOptionRequest_Option::countSynonyms()
	{
		return __thiz.callMethod<jint>(
			"countSynonyms",
			"()I"
		);
	}
	jint VoiceInteractor_PickOptionRequest_Option::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject VoiceInteractor_PickOptionRequest_Option::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint VoiceInteractor_PickOptionRequest_Option::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring VoiceInteractor_PickOptionRequest_Option::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring VoiceInteractor_PickOptionRequest_Option::getSynonymAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSynonymAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	void VoiceInteractor_PickOptionRequest_Option::setExtras(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractor_PickOptionRequest_Option::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

