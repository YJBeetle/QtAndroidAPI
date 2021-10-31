#include "../content/ClipData.hpp"
#include "../content/ClipDescription.hpp"
#include "../os/Parcel.hpp"
#include "./DragEvent.hpp"

namespace android::view
{
	// Fields
	jint DragEvent::ACTION_DRAG_ENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENDED"
		);
	}
	jint DragEvent::ACTION_DRAG_ENTERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENTERED"
		);
	}
	jint DragEvent::ACTION_DRAG_EXITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_EXITED"
		);
	}
	jint DragEvent::ACTION_DRAG_LOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_LOCATION"
		);
	}
	jint DragEvent::ACTION_DRAG_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_STARTED"
		);
	}
	jint DragEvent::ACTION_DROP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DROP"
		);
	}
	QAndroidJniObject DragEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.DragEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DragEvent::DragEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint DragEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint DragEvent::getAction()
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	QAndroidJniObject DragEvent::getClipData()
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	QAndroidJniObject DragEvent::getClipDescription()
	{
		return callObjectMethod(
			"getClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	jobject DragEvent::getLocalState()
	{
		return callObjectMethod(
			"getLocalState",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DragEvent::getResult()
	{
		return callMethod<jboolean>(
			"getResult",
			"()Z"
		);
	}
	jfloat DragEvent::getX()
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat DragEvent::getY()
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	jstring DragEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DragEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view
