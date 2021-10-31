#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./RemoteInput.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass RemoteInput::CREATOR()
	{
		return getStaticObjectField(
			"android.app.RemoteInput",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring RemoteInput::EXTRA_RESULTS_DATA()
	{
		return getStaticObjectField(
			"android.app.RemoteInput",
			"EXTRA_RESULTS_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RemoteInput::RESULTS_CLIP_LABEL()
	{
		return getStaticObjectField(
			"android.app.RemoteInput",
			"RESULTS_CLIP_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint RemoteInput::SOURCE_CHOICE()
	{
		return getStaticField<jint>(
			"android.app.RemoteInput",
			"SOURCE_CHOICE"
		);
	}
	jint RemoteInput::SOURCE_FREE_FORM_INPUT()
	{
		return getStaticField<jint>(
			"android.app.RemoteInput",
			"SOURCE_FREE_FORM_INPUT"
		);
	}
	
	// QJniObject forward
	RemoteInput::RemoteInput(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void RemoteInput::addDataResultToIntent(android::app::RemoteInput arg0, android::content::Intent arg1, __JniBaseClass arg2)
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
	void RemoteInput::addResultsToIntent(jarray arg0, android::content::Intent arg1, android::os::Bundle arg2)
	{
		callStaticMethod<void>(
			"android.app.RemoteInput",
			"addResultsToIntent",
			"([Landroid/app/RemoteInput;Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass RemoteInput::getDataResultsFromIntent(android::content::Intent arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.app.RemoteInput",
			"getDataResultsFromIntent",
			"(Landroid/content/Intent;Ljava/lang/String;)Ljava/util/Map;",
			arg0.object(),
			arg1
		);
	}
	android::os::Bundle RemoteInput::getResultsFromIntent(android::content::Intent arg0)
	{
		return callStaticObjectMethod(
			"android.app.RemoteInput",
			"getResultsFromIntent",
			"(Landroid/content/Intent;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	jint RemoteInput::getResultsSource(android::content::Intent arg0)
	{
		return callStaticMethod<jint>(
			"android.app.RemoteInput",
			"getResultsSource",
			"(Landroid/content/Intent;)I",
			arg0.object()
		);
	}
	void RemoteInput::setResultsSource(android::content::Intent arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.app.RemoteInput",
			"setResultsSource",
			"(Landroid/content/Intent;I)V",
			arg0.object(),
			arg1
		);
	}
	jint RemoteInput::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RemoteInput::getAllowFreeFormInput()
	{
		return callMethod<jboolean>(
			"getAllowFreeFormInput",
			"()Z"
		);
	}
	__JniBaseClass RemoteInput::getAllowedDataTypes()
	{
		return callObjectMethod(
			"getAllowedDataTypes",
			"()Ljava/util/Set;"
		);
	}
	jarray RemoteInput::getChoices()
	{
		return callObjectMethod(
			"getChoices",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	android::os::Bundle RemoteInput::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring RemoteInput::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring RemoteInput::getResultKey()
	{
		return callObjectMethod(
			"getResultKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean RemoteInput::isDataOnly()
	{
		return callMethod<jboolean>(
			"isDataOnly",
			"()Z"
		);
	}
	void RemoteInput::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

