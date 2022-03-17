#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./RemoteInput.def.hpp"

namespace android::app
{
	// Fields
	inline JObject RemoteInput::CREATOR()
	{
		return getStaticObjectField(
			"android.app.RemoteInput",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString RemoteInput::EXTRA_RESULTS_DATA()
	{
		return getStaticObjectField(
			"android.app.RemoteInput",
			"EXTRA_RESULTS_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString RemoteInput::RESULTS_CLIP_LABEL()
	{
		return getStaticObjectField(
			"android.app.RemoteInput",
			"RESULTS_CLIP_LABEL",
			"Ljava/lang/String;"
		);
	}
	inline jint RemoteInput::SOURCE_CHOICE()
	{
		return getStaticField<jint>(
			"android.app.RemoteInput",
			"SOURCE_CHOICE"
		);
	}
	inline jint RemoteInput::SOURCE_FREE_FORM_INPUT()
	{
		return getStaticField<jint>(
			"android.app.RemoteInput",
			"SOURCE_FREE_FORM_INPUT"
		);
	}
	
	// Constructors
	
	// Methods
	inline void RemoteInput::addDataResultToIntent(android::app::RemoteInput arg0, android::content::Intent arg1, JObject arg2)
	{
		callStaticMethod<void>(
			"android.app.RemoteInput",
			"addDataResultToIntent",
			"(Landroid/app/RemoteInput;Landroid/content/Intent;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void RemoteInput::addResultsToIntent(JArray arg0, android::content::Intent arg1, android::os::Bundle arg2)
	{
		callStaticMethod<void>(
			"android.app.RemoteInput",
			"addResultsToIntent",
			"([Landroid/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject RemoteInput::getDataResultsFromIntent(android::content::Intent arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.app.RemoteInput",
			"getDataResultsFromIntent",
			"(Landroid/content/Intent;Ljava/lang/String;)Ljava/util/Map;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::os::Bundle RemoteInput::getResultsFromIntent(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.app.RemoteInput",
			"getResultsFromIntent",
			"(Landroid/content/Intent;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline jint RemoteInput::getResultsSource(android::content::Intent arg0)
	{
		return callStaticMethod<jint>(
			"android.app.RemoteInput",
			"getResultsSource",
			"(Landroid/content/Intent;)I",
			arg0.object()
		);
	}
	inline void RemoteInput::setResultsSource(android::content::Intent arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.app.RemoteInput",
			"setResultsSource",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jint RemoteInput::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RemoteInput::getAllowFreeFormInput() const
	{
		return callMethod<jboolean>(
			"getAllowFreeFormInput",
			"()Z"
		);
	}
	inline JObject RemoteInput::getAllowedDataTypes() const
	{
		return callObjectMethod(
			"getAllowedDataTypes",
			"()Ljava/util/Set;"
		);
	}
	inline JArray RemoteInput::getChoices() const
	{
		return callObjectMethod(
			"getChoices",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline android::os::Bundle RemoteInput::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString RemoteInput::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString RemoteInput::getResultKey() const
	{
		return callObjectMethod(
			"getResultKey",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean RemoteInput::isDataOnly() const
	{
		return callMethod<jboolean>(
			"isDataOnly",
			"()Z"
		);
	}
	inline void RemoteInput::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
