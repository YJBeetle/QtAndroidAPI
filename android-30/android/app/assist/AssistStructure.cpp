#include "./AssistStructure_WindowNode.hpp"
#include "../../content/ComponentName.hpp"
#include "../../os/Parcel.hpp"
#include "./AssistStructure.hpp"

namespace android::app::assist
{
	// Fields
	JObject AssistStructure::CREATOR()
	{
		return getStaticObjectField(
			"android.app.assist.AssistStructure",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AssistStructure::AssistStructure(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AssistStructure::AssistStructure()
		: JObject(
			"android.app.assist.AssistStructure",
			"()V"
		) {}
	
	// Methods
	jint AssistStructure::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong AssistStructure::getAcquisitionEndTime() const
	{
		return callMethod<jlong>(
			"getAcquisitionEndTime",
			"()J"
		);
	}
	jlong AssistStructure::getAcquisitionStartTime() const
	{
		return callMethod<jlong>(
			"getAcquisitionStartTime",
			"()J"
		);
	}
	android::content::ComponentName AssistStructure::getActivityComponent() const
	{
		return callObjectMethod(
			"getActivityComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	android::app::assist::AssistStructure_WindowNode AssistStructure::getWindowNodeAt(jint arg0) const
	{
		return callObjectMethod(
			"getWindowNodeAt",
			"(I)Landroid/app/assist/AssistStructure$WindowNode;",
			arg0
		);
	}
	jint AssistStructure::getWindowNodeCount() const
	{
		return callMethod<jint>(
			"getWindowNodeCount",
			"()I"
		);
	}
	jboolean AssistStructure::isHomeActivity() const
	{
		return callMethod<jboolean>(
			"isHomeActivity",
			"()Z"
		);
	}
	void AssistStructure::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::assist

