#include "../../os/Parcel.hpp"
#include "./TextClassification.hpp"
#include "./TextClassificationSessionId.hpp"
#include "./TextSelection.hpp"
#include "./SelectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	jint SelectionEvent::ACTION_ABANDON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_ABANDON"
		);
	}
	jint SelectionEvent::ACTION_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_COPY"
		);
	}
	jint SelectionEvent::ACTION_CUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_CUT"
		);
	}
	jint SelectionEvent::ACTION_DRAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_DRAG"
		);
	}
	jint SelectionEvent::ACTION_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_OTHER"
		);
	}
	jint SelectionEvent::ACTION_OVERTYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_OVERTYPE"
		);
	}
	jint SelectionEvent::ACTION_PASTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_PASTE"
		);
	}
	jint SelectionEvent::ACTION_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_RESET"
		);
	}
	jint SelectionEvent::ACTION_SELECT_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SELECT_ALL"
		);
	}
	jint SelectionEvent::ACTION_SHARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SHARE"
		);
	}
	jint SelectionEvent::ACTION_SMART_SHARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SMART_SHARE"
		);
	}
	__JniBaseClass SelectionEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.SelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SelectionEvent::EVENT_AUTO_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_AUTO_SELECTION"
		);
	}
	jint SelectionEvent::EVENT_SELECTION_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SELECTION_MODIFIED"
		);
	}
	jint SelectionEvent::EVENT_SELECTION_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SELECTION_STARTED"
		);
	}
	jint SelectionEvent::EVENT_SMART_SELECTION_MULTI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SMART_SELECTION_MULTI"
		);
	}
	jint SelectionEvent::EVENT_SMART_SELECTION_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SMART_SELECTION_SINGLE"
		);
	}
	jint SelectionEvent::INVOCATION_LINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_LINK"
		);
	}
	jint SelectionEvent::INVOCATION_MANUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_MANUAL"
		);
	}
	jint SelectionEvent::INVOCATION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	SelectionEvent::SelectionEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionActionEvent(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionActionEvent",
			"(III)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1,
			arg2
		);
	}
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionActionEvent(jint arg0, jint arg1, jint arg2, android::view::textclassifier::TextClassification arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionActionEvent",
			"(IIILandroid/view/textclassifier/TextClassification;)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionModifiedEvent",
			"(II)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1
		);
	}
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextClassification arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionModifiedEvent",
			"(IILandroid/view/textclassifier/TextClassification;)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextSelection arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionModifiedEvent",
			"(IILandroid/view/textclassifier/TextSelection;)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionStartedEvent(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionStartedEvent",
			"(II)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1
		);
	}
	jboolean SelectionEvent::isTerminal(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.textclassifier.SelectionEvent",
			"isTerminal",
			"(I)Z",
			arg0
		);
	}
	jint SelectionEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SelectionEvent::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong SelectionEvent::getDurationSincePreviousEvent()
	{
		return callMethod<jlong>(
			"getDurationSincePreviousEvent",
			"()J"
		);
	}
	jlong SelectionEvent::getDurationSinceSessionStart()
	{
		return callMethod<jlong>(
			"getDurationSinceSessionStart",
			"()J"
		);
	}
	jint SelectionEvent::getEnd()
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jstring SelectionEvent::getEntityType()
	{
		return callObjectMethod(
			"getEntityType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SelectionEvent::getEventIndex()
	{
		return callMethod<jint>(
			"getEventIndex",
			"()I"
		);
	}
	jlong SelectionEvent::getEventTime()
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint SelectionEvent::getEventType()
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jint SelectionEvent::getInvocationMethod()
	{
		return callMethod<jint>(
			"getInvocationMethod",
			"()I"
		);
	}
	jstring SelectionEvent::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SelectionEvent::getResultId()
	{
		return callObjectMethod(
			"getResultId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::view::textclassifier::TextClassificationSessionId SelectionEvent::getSessionId()
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/view/textclassifier/TextClassificationSessionId;"
		);
	}
	jint SelectionEvent::getSmartEnd()
	{
		return callMethod<jint>(
			"getSmartEnd",
			"()I"
		);
	}
	jint SelectionEvent::getSmartStart()
	{
		return callMethod<jint>(
			"getSmartStart",
			"()I"
		);
	}
	jint SelectionEvent::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jstring SelectionEvent::getWidgetType()
	{
		return callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SelectionEvent::getWidgetVersion()
	{
		return callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SelectionEvent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SelectionEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

