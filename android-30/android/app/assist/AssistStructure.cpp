#include "./AssistStructure_WindowNode.hpp"
#include "../../content/ComponentName.hpp"
#include "../../os/Parcel.hpp"
#include "./AssistStructure.hpp"

namespace android::app::assist
{
	// Fields
	__JniBaseClass AssistStructure::CREATOR()
	{
		return getStaticObjectField(
			"android.app.assist.AssistStructure",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AssistStructure::AssistStructure(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AssistStructure::AssistStructure()
		: __JniBaseClass(
			"android.app.assist.AssistStructure",
			"()V"
		) {}
	
	// Methods
	jint AssistStructure::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong AssistStructure::getAcquisitionEndTime()
	{
		return callMethod<jlong>(
			"getAcquisitionEndTime",
			"()J"
		);
	}
	jlong AssistStructure::getAcquisitionStartTime()
	{
		return callMethod<jlong>(
			"getAcquisitionStartTime",
			"()J"
		);
	}
	android::content::ComponentName AssistStructure::getActivityComponent()
	{
		return callObjectMethod(
			"getActivityComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	android::app::assist::AssistStructure_WindowNode AssistStructure::getWindowNodeAt(jint arg0)
	{
		return callObjectMethod(
			"getWindowNodeAt",
			"(I)Landroid/app/assist/AssistStructure$WindowNode;",
			arg0
		);
	}
	jint AssistStructure::getWindowNodeCount()
	{
		return callMethod<jint>(
			"getWindowNodeCount",
			"()I"
		);
	}
	jboolean AssistStructure::isHomeActivity()
	{
		return callMethod<jboolean>(
			"isHomeActivity",
			"()Z"
		);
	}
	void AssistStructure::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::assist

