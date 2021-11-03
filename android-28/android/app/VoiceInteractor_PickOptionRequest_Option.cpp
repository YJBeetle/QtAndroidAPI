#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_PickOptionRequest_Option.hpp"

namespace android::app
{
	// Fields
	JObject VoiceInteractor_PickOptionRequest_Option::CREATOR()
	{
		return getStaticObjectField(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	VoiceInteractor_PickOptionRequest_Option::VoiceInteractor_PickOptionRequest_Option(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	VoiceInteractor_PickOptionRequest_Option::VoiceInteractor_PickOptionRequest_Option(JString arg0, jint arg1)
		: JObject(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"(Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	android::app::VoiceInteractor_PickOptionRequest_Option VoiceInteractor_PickOptionRequest_Option::addSynonym(JString arg0)
	{
		return callObjectMethod(
			"addSynonym",
			"(Ljava/lang/CharSequence;)Landroid/app/VoiceInteractor$PickOptionRequest$Option;",
			arg0.object<jstring>()
		);
	}
	jint VoiceInteractor_PickOptionRequest_Option::countSynonyms()
	{
		return callMethod<jint>(
			"countSynonyms",
			"()I"
		);
	}
	jint VoiceInteractor_PickOptionRequest_Option::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle VoiceInteractor_PickOptionRequest_Option::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint VoiceInteractor_PickOptionRequest_Option::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString VoiceInteractor_PickOptionRequest_Option::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString VoiceInteractor_PickOptionRequest_Option::getSynonymAt(jint arg0)
	{
		return callObjectMethod(
			"getSynonymAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	void VoiceInteractor_PickOptionRequest_Option::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void VoiceInteractor_PickOptionRequest_Option::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

