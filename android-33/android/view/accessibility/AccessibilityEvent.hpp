#pragma once

#include "../../os/Parcel.def.hpp"
#include "./AccessibilityRecord.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./AccessibilityEvent.def.hpp"

namespace android::view::accessibility
{
	// Fields
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_DRAG_CANCELLED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_DRAG_CANCELLED"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_DRAG_DROPPED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_DRAG_DROPPED"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_DRAG_STARTED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_DRAG_STARTED"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_PANE_APPEARED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_PANE_APPEARED"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_PANE_DISAPPEARED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_PANE_DISAPPEARED"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_PANE_TITLE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_PANE_TITLE"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_STATE_DESCRIPTION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_STATE_DESCRIPTION"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_SUBTREE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_SUBTREE"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_TEXT"
		);
	}
	inline jint AccessibilityEvent::CONTENT_CHANGE_TYPE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_UNDEFINED"
		);
	}
	inline JObject AccessibilityEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.accessibility.AccessibilityEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AccessibilityEvent::INVALID_POSITION()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"INVALID_POSITION"
		);
	}
	inline jint AccessibilityEvent::MAX_TEXT_LENGTH()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"MAX_TEXT_LENGTH"
		);
	}
	inline jint AccessibilityEvent::SPEECH_STATE_LISTENING_END()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"SPEECH_STATE_LISTENING_END"
		);
	}
	inline jint AccessibilityEvent::SPEECH_STATE_LISTENING_START()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"SPEECH_STATE_LISTENING_START"
		);
	}
	inline jint AccessibilityEvent::SPEECH_STATE_SPEAKING_END()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"SPEECH_STATE_SPEAKING_END"
		);
	}
	inline jint AccessibilityEvent::SPEECH_STATE_SPEAKING_START()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"SPEECH_STATE_SPEAKING_START"
		);
	}
	inline jint AccessibilityEvent::TYPES_ALL_MASK()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPES_ALL_MASK"
		);
	}
	inline jint AccessibilityEvent::TYPE_ANNOUNCEMENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_ANNOUNCEMENT"
		);
	}
	inline jint AccessibilityEvent::TYPE_ASSIST_READING_CONTEXT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_ASSIST_READING_CONTEXT"
		);
	}
	inline jint AccessibilityEvent::TYPE_GESTURE_DETECTION_END()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_GESTURE_DETECTION_END"
		);
	}
	inline jint AccessibilityEvent::TYPE_GESTURE_DETECTION_START()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_GESTURE_DETECTION_START"
		);
	}
	inline jint AccessibilityEvent::TYPE_NOTIFICATION_STATE_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_NOTIFICATION_STATE_CHANGED"
		);
	}
	inline jint AccessibilityEvent::TYPE_SPEECH_STATE_CHANGE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_SPEECH_STATE_CHANGE"
		);
	}
	inline jint AccessibilityEvent::TYPE_TOUCH_EXPLORATION_GESTURE_END()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_EXPLORATION_GESTURE_END"
		);
	}
	inline jint AccessibilityEvent::TYPE_TOUCH_EXPLORATION_GESTURE_START()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_EXPLORATION_GESTURE_START"
		);
	}
	inline jint AccessibilityEvent::TYPE_TOUCH_INTERACTION_END()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_INTERACTION_END"
		);
	}
	inline jint AccessibilityEvent::TYPE_TOUCH_INTERACTION_START()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_INTERACTION_START"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_ACCESSIBILITY_FOCUSED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_ACCESSIBILITY_FOCUSED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_CLICKED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_CLICKED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_CONTEXT_CLICKED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_CONTEXT_CLICKED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_FOCUSED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_FOCUSED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_HOVER_ENTER()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_HOVER_ENTER"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_HOVER_EXIT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_HOVER_EXIT"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_LONG_CLICKED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_LONG_CLICKED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_SCROLLED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_SCROLLED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_SELECTED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_SELECTED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_TEXT_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_TEXT_CHANGED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_TEXT_SELECTION_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_TEXT_SELECTION_CHANGED"
		);
	}
	inline jint AccessibilityEvent::TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY"
		);
	}
	inline jint AccessibilityEvent::TYPE_WINDOWS_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_WINDOWS_CHANGED"
		);
	}
	inline jint AccessibilityEvent::TYPE_WINDOW_CONTENT_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_WINDOW_CONTENT_CHANGED"
		);
	}
	inline jint AccessibilityEvent::TYPE_WINDOW_STATE_CHANGED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_WINDOW_STATE_CHANGED"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_ACCESSIBILITY_FOCUSED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_ACCESSIBILITY_FOCUSED"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_ACTIVE"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_ADDED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_ADDED"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_BOUNDS()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_BOUNDS"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_CHILDREN()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_CHILDREN"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_FOCUSED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_FOCUSED"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_LAYER()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_LAYER"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_PARENT()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_PARENT"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_PIP()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_PIP"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_REMOVED()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_REMOVED"
		);
	}
	inline jint AccessibilityEvent::WINDOWS_CHANGE_TITLE()
	{
		return getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_TITLE"
		);
	}
	
	// Constructors
	inline AccessibilityEvent::AccessibilityEvent()
		: android::view::accessibility::AccessibilityRecord(
			"android.view.accessibility.AccessibilityEvent",
			"()V"
		) {}
	inline AccessibilityEvent::AccessibilityEvent(android::view::accessibility::AccessibilityEvent &arg0)
		: android::view::accessibility::AccessibilityRecord(
			"android.view.accessibility.AccessibilityEvent",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		) {}
	inline AccessibilityEvent::AccessibilityEvent(jint arg0)
		: android::view::accessibility::AccessibilityRecord(
			"android.view.accessibility.AccessibilityEvent",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JString AccessibilityEvent::eventTypeToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"eventTypeToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::view::accessibility::AccessibilityEvent AccessibilityEvent::obtain()
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityEvent;"
		);
	}
	inline android::view::accessibility::AccessibilityEvent AccessibilityEvent::obtain(android::view::accessibility::AccessibilityEvent arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityEvent;)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.object()
		);
	}
	inline android::view::accessibility::AccessibilityEvent AccessibilityEvent::obtain(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"(I)Landroid/view/accessibility/AccessibilityEvent;",
			arg0
		);
	}
	inline void AccessibilityEvent::appendRecord(android::view::accessibility::AccessibilityRecord arg0) const
	{
		callMethod<void>(
			"appendRecord",
			"(Landroid/view/accessibility/AccessibilityRecord;)V",
			arg0.object()
		);
	}
	inline jint AccessibilityEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AccessibilityEvent::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	inline jint AccessibilityEvent::getContentChangeTypes() const
	{
		return callMethod<jint>(
			"getContentChangeTypes",
			"()I"
		);
	}
	inline jlong AccessibilityEvent::getEventTime() const
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	inline jint AccessibilityEvent::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline jint AccessibilityEvent::getMovementGranularity() const
	{
		return callMethod<jint>(
			"getMovementGranularity",
			"()I"
		);
	}
	inline JString AccessibilityEvent::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::accessibility::AccessibilityRecord AccessibilityEvent::getRecord(jint arg0) const
	{
		return callObjectMethod(
			"getRecord",
			"(I)Landroid/view/accessibility/AccessibilityRecord;",
			arg0
		);
	}
	inline jint AccessibilityEvent::getRecordCount() const
	{
		return callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	inline jint AccessibilityEvent::getSpeechStateChangeTypes() const
	{
		return callMethod<jint>(
			"getSpeechStateChangeTypes",
			"()I"
		);
	}
	inline jint AccessibilityEvent::getWindowChanges() const
	{
		return callMethod<jint>(
			"getWindowChanges",
			"()I"
		);
	}
	inline void AccessibilityEvent::initFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"initFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void AccessibilityEvent::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline void AccessibilityEvent::setAction(jint arg0) const
	{
		callMethod<void>(
			"setAction",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityEvent::setContentChangeTypes(jint arg0) const
	{
		callMethod<void>(
			"setContentChangeTypes",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityEvent::setEventTime(jlong arg0) const
	{
		callMethod<void>(
			"setEventTime",
			"(J)V",
			arg0
		);
	}
	inline void AccessibilityEvent::setEventType(jint arg0) const
	{
		callMethod<void>(
			"setEventType",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityEvent::setMovementGranularity(jint arg0) const
	{
		callMethod<void>(
			"setMovementGranularity",
			"(I)V",
			arg0
		);
	}
	inline void AccessibilityEvent::setPackageName(JString arg0) const
	{
		callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AccessibilityEvent::setSpeechStateChangeTypes(jint arg0) const
	{
		callMethod<void>(
			"setSpeechStateChangeTypes",
			"(I)V",
			arg0
		);
	}
	inline JString AccessibilityEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AccessibilityEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

// Base class headers
#include "./AccessibilityRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::accessibility;
#endif
