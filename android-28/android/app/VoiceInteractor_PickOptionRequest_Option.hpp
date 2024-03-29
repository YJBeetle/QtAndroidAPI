#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_PickOptionRequest_Option.def.hpp"

namespace android::app
{
	// Fields
	inline JObject VoiceInteractor_PickOptionRequest_Option::CREATOR()
	{
		return getStaticObjectField(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline VoiceInteractor_PickOptionRequest_Option::VoiceInteractor_PickOptionRequest_Option(JString arg0, jint arg1)
		: JObject(
			"android.app.VoiceInteractor$PickOptionRequest$Option",
			"(Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline android::app::VoiceInteractor_PickOptionRequest_Option VoiceInteractor_PickOptionRequest_Option::addSynonym(JString arg0) const
	{
		return callObjectMethod(
			"addSynonym",
			"(Ljava/lang/CharSequence;)Landroid/app/VoiceInteractor$PickOptionRequest$Option;",
			arg0.object<jstring>()
		);
	}
	inline jint VoiceInteractor_PickOptionRequest_Option::countSynonyms() const
	{
		return callMethod<jint>(
			"countSynonyms",
			"()I"
		);
	}
	inline jint VoiceInteractor_PickOptionRequest_Option::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle VoiceInteractor_PickOptionRequest_Option::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint VoiceInteractor_PickOptionRequest_Option::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JString VoiceInteractor_PickOptionRequest_Option::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString VoiceInteractor_PickOptionRequest_Option::getSynonymAt(jint arg0) const
	{
		return callObjectMethod(
			"getSynonymAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline void VoiceInteractor_PickOptionRequest_Option::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractor_PickOptionRequest_Option::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
