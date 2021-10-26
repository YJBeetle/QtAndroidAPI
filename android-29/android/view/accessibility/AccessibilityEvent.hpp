#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT

#include "../../../__JniBaseClass.hpp"
#include "AccessibilityRecord.hpp"

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityRecord;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent : public __jni_impl::android::view::accessibility::AccessibilityRecord
	{
	public:
		// Fields
		static jint CONTENT_CHANGE_TYPE_CONTENT_DESCRIPTION();
		static jint CONTENT_CHANGE_TYPE_PANE_APPEARED();
		static jint CONTENT_CHANGE_TYPE_PANE_DISAPPEARED();
		static jint CONTENT_CHANGE_TYPE_PANE_TITLE();
		static jint CONTENT_CHANGE_TYPE_SUBTREE();
		static jint CONTENT_CHANGE_TYPE_TEXT();
		static jint CONTENT_CHANGE_TYPE_UNDEFINED();
		static QAndroidJniObject CREATOR();
		static jint INVALID_POSITION();
		static jint MAX_TEXT_LENGTH();
		static jint TYPES_ALL_MASK();
		static jint TYPE_ANNOUNCEMENT();
		static jint TYPE_ASSIST_READING_CONTEXT();
		static jint TYPE_GESTURE_DETECTION_END();
		static jint TYPE_GESTURE_DETECTION_START();
		static jint TYPE_NOTIFICATION_STATE_CHANGED();
		static jint TYPE_TOUCH_EXPLORATION_GESTURE_END();
		static jint TYPE_TOUCH_EXPLORATION_GESTURE_START();
		static jint TYPE_TOUCH_INTERACTION_END();
		static jint TYPE_TOUCH_INTERACTION_START();
		static jint TYPE_VIEW_ACCESSIBILITY_FOCUSED();
		static jint TYPE_VIEW_ACCESSIBILITY_FOCUS_CLEARED();
		static jint TYPE_VIEW_CLICKED();
		static jint TYPE_VIEW_CONTEXT_CLICKED();
		static jint TYPE_VIEW_FOCUSED();
		static jint TYPE_VIEW_HOVER_ENTER();
		static jint TYPE_VIEW_HOVER_EXIT();
		static jint TYPE_VIEW_LONG_CLICKED();
		static jint TYPE_VIEW_SCROLLED();
		static jint TYPE_VIEW_SELECTED();
		static jint TYPE_VIEW_TEXT_CHANGED();
		static jint TYPE_VIEW_TEXT_SELECTION_CHANGED();
		static jint TYPE_VIEW_TEXT_TRAVERSED_AT_MOVEMENT_GRANULARITY();
		static jint TYPE_WINDOWS_CHANGED();
		static jint TYPE_WINDOW_CONTENT_CHANGED();
		static jint TYPE_WINDOW_STATE_CHANGED();
		static jint WINDOWS_CHANGE_ACCESSIBILITY_FOCUSED();
		static jint WINDOWS_CHANGE_ACTIVE();
		static jint WINDOWS_CHANGE_ADDED();
		static jint WINDOWS_CHANGE_BOUNDS();
		static jint WINDOWS_CHANGE_CHILDREN();
		static jint WINDOWS_CHANGE_FOCUSED();
		static jint WINDOWS_CHANGE_LAYER();
		static jint WINDOWS_CHANGE_PARENT();
		static jint WINDOWS_CHANGE_PIP();
		static jint WINDOWS_CHANGE_REMOVED();
		static jint WINDOWS_CHANGE_TITLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jstring getPackageName();
		jlong getEventTime();
		jint getRecordCount();
		void appendRecord(__jni_impl::android::view::accessibility::AccessibilityRecord arg0);
		QAndroidJniObject getRecord(jint arg0);
		jint getEventType();
		jint getContentChangeTypes();
		void setContentChangeTypes(jint arg0);
		jint getWindowChanges();
		void setEventType(jint arg0);
		void setEventTime(jlong arg0);
		void setPackageName(jstring arg0);
		void setPackageName(const QString &arg0);
		void setMovementGranularity(jint arg0);
		jint getMovementGranularity();
		void initFromParcel(__jni_impl::android::os::Parcel arg0);
		static jstring eventTypeToString(jint arg0);
		jint getAction();
		static QAndroidJniObject obtain(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		static QAndroidJniObject obtain(jint arg0);
		static QAndroidJniObject obtain();
		void recycle();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void setAction(jint arg0);
	};
} // namespace __jni_impl::android::view::accessibility

#include "AccessibilityRecord.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::accessibility
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
	QAndroidJniObject AccessibilityEvent::CREATOR()
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
	
	// Constructors
	void AccessibilityEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityEvent",
			"(V)V");
	}
	
	// Methods
	jstring AccessibilityEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityEvent::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong AccessibilityEvent::getEventTime()
	{
		return __thiz.callMethod<jlong>(
			"getEventTime",
			"()J"
		);
	}
	jint AccessibilityEvent::getRecordCount()
	{
		return __thiz.callMethod<jint>(
			"getRecordCount",
			"()I"
		);
	}
	void AccessibilityEvent::appendRecord(__jni_impl::android::view::accessibility::AccessibilityRecord arg0)
	{
		__thiz.callMethod<void>(
			"appendRecord",
			"(Landroid/view/accessibility/AccessibilityRecord;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityEvent::getRecord(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRecord",
			"(I)Landroid/view/accessibility/AccessibilityRecord;",
			arg0
		);
	}
	jint AccessibilityEvent::getEventType()
	{
		return __thiz.callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jint AccessibilityEvent::getContentChangeTypes()
	{
		return __thiz.callMethod<jint>(
			"getContentChangeTypes",
			"()I"
		);
	}
	void AccessibilityEvent::setContentChangeTypes(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentChangeTypes",
			"(I)V",
			arg0
		);
	}
	jint AccessibilityEvent::getWindowChanges()
	{
		return __thiz.callMethod<jint>(
			"getWindowChanges",
			"()I"
		);
	}
	void AccessibilityEvent::setEventType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEventType",
			"(I)V",
			arg0
		);
	}
	void AccessibilityEvent::setEventTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setEventTime",
			"(J)V",
			arg0
		);
	}
	void AccessibilityEvent::setPackageName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityEvent::setPackageName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityEvent::setMovementGranularity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMovementGranularity",
			"(I)V",
			arg0
		);
	}
	jint AccessibilityEvent::getMovementGranularity()
	{
		return __thiz.callMethod<jint>(
			"getMovementGranularity",
			"()I"
		);
	}
	void AccessibilityEvent::initFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"initFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	jstring AccessibilityEvent::eventTypeToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"eventTypeToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AccessibilityEvent::getAction()
	{
		return __thiz.callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityEvent::obtain(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityEvent;)Landroid/view/accessibility/AccessibilityEvent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityEvent::obtain(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"(I)Landroid/view/accessibility/AccessibilityEvent;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityEvent::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityEvent",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityEvent;"
		);
	}
	void AccessibilityEvent::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jint AccessibilityEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AccessibilityEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityEvent::setAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAction",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityEvent : public __jni_impl::android::view::accessibility::AccessibilityEvent
	{
	public:
		AccessibilityEvent(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityEvent()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT

