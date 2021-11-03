#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Session2Command.hpp"

namespace android::media
{
	// Fields
	jint Session2Command::COMMAND_CODE_CUSTOM()
	{
		return getStaticField<jint>(
			"android.media.Session2Command",
			"COMMAND_CODE_CUSTOM"
		);
	}
	JObject Session2Command::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2Command",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Session2Command::Session2Command(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Session2Command::Session2Command(jint arg0)
		: JObject(
			"android.media.Session2Command",
			"(I)V",
			arg0
		) {}
	Session2Command::Session2Command(JString arg0, android::os::Bundle arg1)
		: JObject(
			"android.media.Session2Command",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	jint Session2Command::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Session2Command::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Session2Command::getCommandCode()
	{
		return callMethod<jint>(
			"getCommandCode",
			"()I"
		);
	}
	JString Session2Command::getCustomAction()
	{
		return callObjectMethod(
			"getCustomAction",
			"()Ljava/lang/String;"
		);
	}
	android::os::Bundle Session2Command::getCustomExtras()
	{
		return callObjectMethod(
			"getCustomExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Session2Command::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Session2Command::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

