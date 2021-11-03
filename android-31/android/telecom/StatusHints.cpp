#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./StatusHints.hpp"

namespace android::telecom
{
	// Fields
	JObject StatusHints::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.StatusHints",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	StatusHints::StatusHints(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StatusHints::StatusHints(jstring arg0, android::graphics::drawable::Icon arg1, android::os::Bundle arg2)
		: JObject(
			"android.telecom.StatusHints",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;Landroid/os/Bundle;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jint StatusHints::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean StatusHints::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::os::Bundle StatusHints::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::graphics::drawable::Icon StatusHints::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring StatusHints::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint StatusHints::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void StatusHints::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

