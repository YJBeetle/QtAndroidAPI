#include "../../os/Parcel.hpp"
#include "./AccessibilityRecord.hpp"
#include "./AccessibilityEvent.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION"
		);
	}
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_PANE_APPEARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_PANE_APPEARED"
		);
	}
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_PANE_DISAPPEARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_PANE_DISAPPEARED"
		);
	}
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_PANE_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_PANE_TITLE"
		);
	}
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_SUBTREE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_SUBTREE"
		);
	}
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_TEXT"
		);
	}
	jint AccessibilityEvent::CONTENT_CHANGE_TYPE_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"CONTENT_CHANGE_TYPE_UNDEFINED"
		);
	}
	__JniBaseClass AccessibilityEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AccessibilityEvent::INVALID_POSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"INVALID_POSITION"
		);
	}
	jint AccessibilityEvent::MAX_TEXT_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"MAX_TEXT_LENGTH"
		);
	}
	jint AccessibilityEvent::TYPES_ALL_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPES_ALL_MASK"
		);
	}
	jint AccessibilityEvent::TYPE_ANNOUNCEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_ANNOUNCEMENT"
		);
	}
	jint AccessibilityEvent::TYPE_ASSIST_READING_CONTEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_ASSIST_READING_CONTEXT"
		);
	}
	jint AccessibilityEvent::TYPE_GESTURE_DETECTION_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_GESTURE_DETECTION_END"
		);
	}
	jint AccessibilityEvent::TYPE_GESTURE_DETECTION_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_GESTURE_DETECTION_START"
		);
	}
	jint AccessibilityEvent::TYPE_NOTIFICATION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_NOTIFICATION_STATE_CHANGED"
		);
	}
	jint AccessibilityEvent::TYPE_TOUCH_EXPLORATION_GESTURE_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_EXPLORATION_GESTURE_END"
		);
	}
	jint AccessibilityEvent::TYPE_TOUCH_EXPLORATION_GESTURE_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_EXPLORATION_GESTURE_START"
		);
	}
	jint AccessibilityEvent::TYPE_TOUCH_INTERACTION_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_INTERACTION_END"
		);
	}
	jint AccessibilityEvent::TYPE_TOUCH_INTERACTION_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_TOUCH_INTERACTION_START"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_ACCESSIBILITY_FOCUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_ACCESSIBILITY_FOCUSED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_CLICKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_CLICKED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_CONTEXT_CLICKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_CONTEXT_CLICKED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_FOCUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_FOCUSED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_HOVER_ENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_HOVER_ENTER"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_HOVER_EXIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_HOVER_EXIT"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_LONG_CLICKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_LONG_CLICKED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_SCROLLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_SCROLLED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_SELECTED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_TEXT_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_TEXT_CHANGED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_TEXT_SELECTION_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_TEXT_SELECTION_CHANGED"
		);
	}
	jint AccessibilityEvent::TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityEvent::TYPE_WINDOWS_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_WINDOWS_CHANGED"
		);
	}
	jint AccessibilityEvent::TYPE_WINDOW_CONTENT_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_WINDOW_CONTENT_CHANGED"
		);
	}
	jint AccessibilityEvent::TYPE_WINDOW_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"TYPE_WINDOW_STATE_CHANGED"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_ACCESSIBILITY_FOCUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_ACCESSIBILITY_FOCUSED"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_ACTIVE"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_ADDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_ADDED"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_BOUNDS"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_CHILDREN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_CHILDREN"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_FOCUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_FOCUSED"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_LAYER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_LAYER"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_PARENT"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_PIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_PIP"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_REMOVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_REMOVED"
		);
	}
	jint AccessibilityEvent::WINDOWS_CHANGE_TITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityEvent",
			"WINDOWS_CHANGE_TITLE"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityEvent::AccessibilityEvent(QAndroidJniObject obj) : android::view::accessibility::AccessibilityRecord(obj) {}
	
	// Constructors
	
	// Methods
	jstring AccessibilityEvent::eventTypeToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"eventTypeToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityEvent AccessibilityEvent::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityEvent;"
		);
	}
	android::view::accessibility::AccessibilityEvent AccessibilityEvent::obtain(android::view::accessibility::AccessibilityEvent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityEvent;)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.object()
		);
	}
	android::view::accessibility::AccessibilityEvent AccessibilityEvent::obtain(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"(I)Landroid/view/accessibility/AccessibilityEvent;",
			arg0
		);
	}
	void AccessibilityEvent::appendRecord(android::view::accessibility::AccessibilityRecord arg0)
	{
		callMethod<void>(
			"appendRecord",
			"(Landroid/view/accessibility/AccessibilityRecord;)V",
			arg0.object()
		);
	}
	jint AccessibilityEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AccessibilityEvent::getAction()
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	jint AccessibilityEvent::getContentChangeTypes()
	{
		return callMethod<jint>(
			"getContentChangeTypes",
			"()I"
		);
	}
	jlong AccessibilityEvent::getEventTime()
	{
		return callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint AccessibilityEvent::getEventType()
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jint AccessibilityEvent::getMovementGranularity()
	{
		return callMethod<jint>(
			"getMovementGranularity",
			"()I"
		);
	}
	jstring AccessibilityEvent::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::accessibility::AccessibilityRecord AccessibilityEvent::getRecord(jint arg0)
	{
		return callObjectMethod(
			"getRecord",
			"(I)Landroid/view/accessibility/AccessibilityRecord;",
			arg0
		);
	}
	jint AccessibilityEvent::getRecordCount()
	{
		return callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	jint AccessibilityEvent::getWindowChanges()
	{
		return callMethod<jint>(
			"getWindowChanges",
			"()I"
		);
	}
	void AccessibilityEvent::initFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"initFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void AccessibilityEvent::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void AccessibilityEvent::setAction(jint arg0)
	{
		callMethod<void>(
			"setAction",
			"(I)V",
			arg0
		);
	}
	void AccessibilityEvent::setContentChangeTypes(jint arg0)
	{
		callMethod<void>(
			"setContentChangeTypes",
			"(I)V",
			arg0
		);
	}
	void AccessibilityEvent::setEventTime(jlong arg0)
	{
		callMethod<void>(
			"setEventTime",
			"(J)V",
			arg0
		);
	}
	void AccessibilityEvent::setEventType(jint arg0)
	{
		callMethod<void>(
			"setEventType",
			"(I)V",
			arg0
		);
	}
	void AccessibilityEvent::setMovementGranularity(jint arg0)
	{
		callMethod<void>(
			"setMovementGranularity",
			"(I)V",
			arg0
		);
	}
	void AccessibilityEvent::setPackageName(jstring arg0)
	{
		callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring AccessibilityEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AccessibilityEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

