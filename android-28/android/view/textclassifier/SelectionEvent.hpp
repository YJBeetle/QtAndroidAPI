#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TextClassification.def.hpp"
#include "./TextClassificationSessionId.def.hpp"
#include "./TextSelection.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SelectionEvent.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline jint SelectionEvent::ACTION_ABANDON()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_ABANDON"
		);
	}
	inline jint SelectionEvent::ACTION_COPY()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_COPY"
		);
	}
	inline jint SelectionEvent::ACTION_CUT()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_CUT"
		);
	}
	inline jint SelectionEvent::ACTION_DRAG()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_DRAG"
		);
	}
	inline jint SelectionEvent::ACTION_OTHER()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_OTHER"
		);
	}
	inline jint SelectionEvent::ACTION_OVERTYPE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_OVERTYPE"
		);
	}
	inline jint SelectionEvent::ACTION_PASTE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_PASTE"
		);
	}
	inline jint SelectionEvent::ACTION_RESET()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_RESET"
		);
	}
	inline jint SelectionEvent::ACTION_SELECT_ALL()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SELECT_ALL"
		);
	}
	inline jint SelectionEvent::ACTION_SHARE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SHARE"
		);
	}
	inline jint SelectionEvent::ACTION_SMART_SHARE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"ACTION_SMART_SHARE"
		);
	}
	inline JObject SelectionEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.SelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SelectionEvent::EVENT_AUTO_SELECTION()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_AUTO_SELECTION"
		);
	}
	inline jint SelectionEvent::EVENT_SELECTION_MODIFIED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SELECTION_MODIFIED"
		);
	}
	inline jint SelectionEvent::EVENT_SELECTION_STARTED()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SELECTION_STARTED"
		);
	}
	inline jint SelectionEvent::EVENT_SMART_SELECTION_MULTI()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SMART_SELECTION_MULTI"
		);
	}
	inline jint SelectionEvent::EVENT_SMART_SELECTION_SINGLE()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"EVENT_SMART_SELECTION_SINGLE"
		);
	}
	inline jint SelectionEvent::INVOCATION_LINK()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_LINK"
		);
	}
	inline jint SelectionEvent::INVOCATION_MANUAL()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_MANUAL"
		);
	}
	inline jint SelectionEvent::INVOCATION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.textclassifier.SelectionEvent",
			"INVOCATION_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionActionEvent(jint arg0, jint arg1, jint arg2)
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
	inline android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionActionEvent(jint arg0, jint arg1, jint arg2, android::view::textclassifier::TextClassification arg3)
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
	inline android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionModifiedEvent",
			"(II)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1
		);
	}
	inline android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextClassification arg2)
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
	inline android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionModifiedEvent(jint arg0, jint arg1, android::view::textclassifier::TextSelection arg2)
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
	inline android::view::textclassifier::SelectionEvent SelectionEvent::createSelectionStartedEvent(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.view.textclassifier.SelectionEvent",
			"createSelectionStartedEvent",
			"(II)Landroid/view/textclassifier/SelectionEvent;",
			arg0,
			arg1
		);
	}
	inline jboolean SelectionEvent::isTerminal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.textclassifier.SelectionEvent",
			"isTerminal",
			"(I)Z",
			arg0
		);
	}
	inline jint SelectionEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SelectionEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong SelectionEvent::getDurationSincePreviousEvent() const
	{
		return callMethod<jlong>(
			"getDurationSincePreviousEvent",
			"()J"
		);
	}
	inline jlong SelectionEvent::getDurationSinceSessionStart() const
	{
		return callMethod<jlong>(
			"getDurationSinceSessionStart",
			"()J"
		);
	}
	inline jint SelectionEvent::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	inline JString SelectionEvent::getEntityType() const
	{
		return callObjectMethod(
			"getEntityType",
			"()Ljava/lang/String;"
		);
	}
	inline jint SelectionEvent::getEventIndex() const
	{
		return callMethod<jint>(
			"getEventIndex",
			"()I"
		);
	}
	inline jlong SelectionEvent::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	inline jint SelectionEvent::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline jint SelectionEvent::getInvocationMethod() const
	{
		return callMethod<jint>(
			"getInvocationMethod",
			"()I"
		);
	}
	inline JString SelectionEvent::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SelectionEvent::getResultId() const
	{
		return callObjectMethod(
			"getResultId",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::textclassifier::TextClassificationSessionId SelectionEvent::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Landroid/view/textclassifier/TextClassificationSessionId;"
		);
	}
	inline jint SelectionEvent::getSmartEnd() const
	{
		return callMethod<jint>(
			"getSmartEnd",
			"()I"
		);
	}
	inline jint SelectionEvent::getSmartStart() const
	{
		return callMethod<jint>(
			"getSmartStart",
			"()I"
		);
	}
	inline jint SelectionEvent::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline JString SelectionEvent::getWidgetType() const
	{
		return callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		);
	}
	inline JString SelectionEvent::getWidgetVersion() const
	{
		return callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jint SelectionEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SelectionEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SelectionEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
