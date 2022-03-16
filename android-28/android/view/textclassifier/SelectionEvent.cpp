#include "../../os/Parcel.hpp"
#include "./TextClassification.hpp"
#include "./TextClassificationSessionId.hpp"
#include "./TextSelection.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SelectionEvent.hpp"

namespace android::view::textclassifier
{
	// Fields
	jint SelectionEvent::ACTION_ABANDON()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_ABANDON"
		);
	}
	jint SelectionEvent::ACTION_COPY()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_COPY"
		);
	}
	jint SelectionEvent::ACTION_CUT()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_CUT"
		);
	}
	jint SelectionEvent::ACTION_DRAG()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_DRAG"
		);
	}
	jint SelectionEvent::ACTION_OTHER()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_OTHER"
		);
	}
	jint SelectionEvent::ACTION_OVERTYPE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_OVERTYPE"
		);
	}
	jint SelectionEvent::ACTION_PASTE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_PASTE"
		);
	}
	jint SelectionEvent::ACTION_RESET()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_RESET"
		);
	}
	jint SelectionEvent::ACTION_SELECT_ALL()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SELECT_ALL"
		);
	}
	jint SelectionEvent::ACTION_SHARE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SHARE"
		);
	}
	jint SelectionEvent::ACTION_SMART_SHARE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SMART_SHARE"
		);
	}
	JObject SelectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.SelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SelectionEvent::EVENT_AUTO_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_AUTO_SELECTION"
		);
	}
	jint SelectionEvent::EVENT_SELECTION_MODIFIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SELECTION_MODIFIED"
		);
	}
	jint SelectionEvent::EVENT_SELECTION_STARTED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SELECTION_STARTED"
		);
	}
	jint SelectionEvent::EVENT_SMART_SELECTION_MULTI()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SMART_SELECTION_MULTI"
		);
	}
	jint SelectionEvent::EVENT_SMART_SELECTION_SINGLE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SMART_SELECTION_SINGLE"
		);
	}
	jint SelectionEvent::INVOCATION_LINK()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_LINK"
		);
	}
	jint SelectionEvent::INVOCATION_MANUAL()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_MANUAL"
		);
	}
	jint SelectionEvent::INVOCATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionActionEvent(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
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
		return callStaticObjectMethod(
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
		return callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionModifiedEvent",
			"(II)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1
		);
	}
	android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextClassification arg2)
	{
		return callStaticObjectMethod(
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
		return callStaticObjectMethod(
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
		return callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionStartedEvent",
			"(II)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1
		);
	}
	jboolean SelectionEvent::isTerminal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.textclassifier.SelectionEvent",
			"isTerminal",
			"(I)Z",
			arg0
		);
	}
	jint SelectionEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SelectionEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong SelectionEvent::getDurationSincePreviousEvent() const
	{
		return callMethod<jlong>(
			"getDurationSincePreviousEvent",
			"()J"
		);
	}
	jlong SelectionEvent::getDurationSinceSessionStart() const
	{
		return callMethod<jlong>(
			"getDurationSinceSessionStart",
			"()J"
		);
	}
	jint SelectionEvent::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	JString SelectionEvent::getEntityType() const
	{
		return callObjectMethod(
			"getEntityType",
			"()Ljava/lang/String;"
		);
	}
	jint SelectionEvent::getEventIndex() const
	{
		return callMethod<jint>(
			"getEventIndex",
			"()I"
		);
	}
	jlong SelectionEvent::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint SelectionEvent::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jint SelectionEvent::getInvocationMethod() const
	{
		return callMethod<jint>(
			"getInvocationMethod",
			"()I"
		);
	}
	JString SelectionEvent::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString SelectionEvent::getResultId() const
	{
		return callObjectMethod(
			"getResultId",
			"()Ljava/lang/String;"
		);
	}
	android::view::textclassifier::TextClassificationSessionId SelectionEvent::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/view/textclassifier/TextClassificationSessionId;"
		);
	}
	jint SelectionEvent::getSmartEnd() const
	{
		return callMethod<jint>(
			"getSmartEnd",
			"()I"
		);
	}
	jint SelectionEvent::getSmartStart() const
	{
		return callMethod<jint>(
			"getSmartStart",
			"()I"
		);
	}
	jint SelectionEvent::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	JString SelectionEvent::getWidgetType() const
	{
		return callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		);
	}
	JString SelectionEvent::getWidgetVersion() const
	{
		return callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		);
	}
	jint SelectionEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SelectionEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

