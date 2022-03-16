#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
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
	
	// Constructors
	StatusHints::StatusHints(JString arg0, android::graphics::drawable::Icon arg1, android::os::Bundle arg2)
		: JObject(
			"android.telecom.StatusHints",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jint StatusHints::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean StatusHints::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle StatusHints::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::graphics::drawable::Icon StatusHints::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString StatusHints::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint StatusHints::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void StatusHints::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

