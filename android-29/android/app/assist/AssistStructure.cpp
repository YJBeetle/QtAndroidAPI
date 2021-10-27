#include "./AssistStructure_WindowNode.hpp"
#include "../../content/ComponentName.hpp"
#include "../../os/Parcel.hpp"
#include "./AssistStructure.hpp"

namespace android::app::assist
{
	// Fields
	QAndroidJniObject AssistStructure::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.assist.AssistStructure",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AssistStructure::AssistStructure(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AssistStructure::AssistStructure()
	{
		__thiz = QAndroidJniObject(
			"android.app.assist.AssistStructure",
			"()V"
		);
	}
	
	// Methods
	jint AssistStructure::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong AssistStructure::getAcquisitionEndTime()
	{
		return __thiz.callMethod<jlong>(
			"getAcquisitionEndTime",
			"()J"
		);
	}
	jlong AssistStructure::getAcquisitionStartTime()
	{
		return __thiz.callMethod<jlong>(
			"getAcquisitionStartTime",
			"()J"
		);
	}
	QAndroidJniObject AssistStructure::getActivityComponent()
	{
		return __thiz.callObjectMethod(
			"getActivityComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject AssistStructure::getWindowNodeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getWindowNodeAt",
			"(I)Landroid/app/assist/AssistStructure$WindowNode;",
			arg0
		);
	}
	jint AssistStructure::getWindowNodeCount()
	{
		return __thiz.callMethod<jint>(
			"getWindowNodeCount",
			"()I"
		);
	}
	jboolean AssistStructure::isHomeActivity()
	{
		return __thiz.callMethod<jboolean>(
			"isHomeActivity",
			"()Z"
		);
	}
	void AssistStructure::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::assist

