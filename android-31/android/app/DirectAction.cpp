#include "../content/LocusId.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DirectAction.hpp"

namespace android::app
{
	// Fields
	JObject DirectAction::CREATOR()
	{
		return getStaticObjectField(
			"android.app.DirectAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DirectAction::DirectAction(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DirectAction::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DirectAction::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle DirectAction::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString DirectAction::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	android::content::LocusId DirectAction::getLocusId()
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jint DirectAction::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DirectAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

