#pragma once

#ifndef ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYRECORD
#define ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYRECORD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view::accessibility
{
	class AccessibilityRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getClassName();
		jboolean isEnabled();
		jint getItemCount();
		QAndroidJniObject getSource();
		QAndroidJniObject getText();
		void setSource(__jni_impl::android::view::View arg0, jint arg1);
		void setSource(__jni_impl::android::view::View arg0);
		void setClassName(jstring arg0);
		void setPassword(jboolean arg0);
		QAndroidJniObject getContentDescription();
		void setContentDescription(jstring arg0);
		void setEnabled(jboolean arg0);
		void setScrollX(jint arg0);
		void setScrollY(jint arg0);
		jint getScrollX();
		jint getScrollY();
		jint getWindowId();
		jboolean isChecked();
		void setChecked(jboolean arg0);
		jboolean isPassword();
		jboolean isFullScreen();
		void setFullScreen(jboolean arg0);
		jboolean isScrollable();
		void setScrollable(jboolean arg0);
		void setItemCount(jint arg0);
		jint getCurrentItemIndex();
		void setCurrentItemIndex(jint arg0);
		jint getFromIndex();
		void setFromIndex(jint arg0);
		jint getToIndex();
		void setToIndex(jint arg0);
		jint getScrollDeltaX();
		void setScrollDeltaX(jint arg0);
		jint getScrollDeltaY();
		void setScrollDeltaY(jint arg0);
		jint getMaxScrollX();
		void setMaxScrollX(jint arg0);
		jint getMaxScrollY();
		void setMaxScrollY(jint arg0);
		jint getAddedCount();
		void setAddedCount(jint arg0);
		jint getRemovedCount();
		void setRemovedCount(jint arg0);
		QAndroidJniObject getBeforeText();
		void setBeforeText(jstring arg0);
		QAndroidJniObject getParcelableData();
		void setParcelableData(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject obtain(__jni_impl::android::view::accessibility::AccessibilityRecord arg0);
		static QAndroidJniObject obtain();
		void recycle();
	};
} // namespace __jni_impl::android::view::accessibility

#include "AccessibilityNodeInfo.hpp"
#include "../View.hpp"

namespace __jni_impl::android::view::accessibility
{
	// Fields
	
	// Constructors
	void AccessibilityRecord::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.accessibility.AccessibilityRecord",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AccessibilityRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject AccessibilityRecord::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;");
	}
	jboolean AccessibilityRecord::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	jint AccessibilityRecord::getItemCount()
	{
		return __thiz.callMethod<jint>(
			"getItemCount",
			"()I");
	}
	QAndroidJniObject AccessibilityRecord::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;");
	}
	QAndroidJniObject AccessibilityRecord::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/util/List;");
	}
	void AccessibilityRecord::setSource(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void AccessibilityRecord::setSource(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void AccessibilityRecord::setClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void AccessibilityRecord::setPassword(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject AccessibilityRecord::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;");
	}
	void AccessibilityRecord::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	void AccessibilityRecord::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0);
	}
	void AccessibilityRecord::setScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0);
	}
	void AccessibilityRecord::setScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getScrollX()
	{
		return __thiz.callMethod<jint>(
			"getScrollX",
			"()I");
	}
	jint AccessibilityRecord::getScrollY()
	{
		return __thiz.callMethod<jint>(
			"getScrollY",
			"()I");
	}
	jint AccessibilityRecord::getWindowId()
	{
		return __thiz.callMethod<jint>(
			"getWindowId",
			"()I");
	}
	jboolean AccessibilityRecord::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z");
	}
	void AccessibilityRecord::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0);
	}
	jboolean AccessibilityRecord::isPassword()
	{
		return __thiz.callMethod<jboolean>(
			"isPassword",
			"()Z");
	}
	jboolean AccessibilityRecord::isFullScreen()
	{
		return __thiz.callMethod<jboolean>(
			"isFullScreen",
			"()Z");
	}
	void AccessibilityRecord::setFullScreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFullScreen",
			"(Z)V",
			arg0);
	}
	jboolean AccessibilityRecord::isScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollable",
			"()Z");
	}
	void AccessibilityRecord::setScrollable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0);
	}
	void AccessibilityRecord::setItemCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setItemCount",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getCurrentItemIndex()
	{
		return __thiz.callMethod<jint>(
			"getCurrentItemIndex",
			"()I");
	}
	void AccessibilityRecord::setCurrentItemIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentItemIndex",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getFromIndex()
	{
		return __thiz.callMethod<jint>(
			"getFromIndex",
			"()I");
	}
	void AccessibilityRecord::setFromIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFromIndex",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getToIndex()
	{
		return __thiz.callMethod<jint>(
			"getToIndex",
			"()I");
	}
	void AccessibilityRecord::setToIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setToIndex",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getScrollDeltaX()
	{
		return __thiz.callMethod<jint>(
			"getScrollDeltaX",
			"()I");
	}
	void AccessibilityRecord::setScrollDeltaX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollDeltaX",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getScrollDeltaY()
	{
		return __thiz.callMethod<jint>(
			"getScrollDeltaY",
			"()I");
	}
	void AccessibilityRecord::setScrollDeltaY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollDeltaY",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getMaxScrollX()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollX",
			"()I");
	}
	void AccessibilityRecord::setMaxScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxScrollX",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getMaxScrollY()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollY",
			"()I");
	}
	void AccessibilityRecord::setMaxScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxScrollY",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getAddedCount()
	{
		return __thiz.callMethod<jint>(
			"getAddedCount",
			"()I");
	}
	void AccessibilityRecord::setAddedCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAddedCount",
			"(I)V",
			arg0);
	}
	jint AccessibilityRecord::getRemovedCount()
	{
		return __thiz.callMethod<jint>(
			"getRemovedCount",
			"()I");
	}
	void AccessibilityRecord::setRemovedCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRemovedCount",
			"(I)V",
			arg0);
	}
	QAndroidJniObject AccessibilityRecord::getBeforeText()
	{
		return __thiz.callObjectMethod(
			"getBeforeText",
			"()Ljava/lang/CharSequence;");
	}
	void AccessibilityRecord::setBeforeText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject AccessibilityRecord::getParcelableData()
	{
		return __thiz.callObjectMethod(
			"getParcelableData",
			"()Landroid/os/Parcelable;");
	}
	void AccessibilityRecord::setParcelableData(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParcelableData",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessibilityRecord::obtain(__jni_impl::android::view::accessibility::AccessibilityRecord arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AccessibilityRecord::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityRecord;");
	}
	void AccessibilityRecord::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V");
	}
} // namespace __jni_impl::android::view::accessibility

namespace android::view::accessibility
{
	class AccessibilityRecord : public __jni_impl::android::view::accessibility::AccessibilityRecord
	{
	public:
		AccessibilityRecord(QAndroidJniObject obj) { __thiz = obj; }
		AccessibilityRecord()
		{
			__constructor();
		}
	};
} // namespace android::view::accessibility

#endif // ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYRECORD

