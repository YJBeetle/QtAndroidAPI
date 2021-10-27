#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
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
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(__jni_impl::android::view::accessibility::AccessibilityRecord arg0);
		jint getAddedCount();
		jstring getBeforeText();
		jstring getClassName();
		jstring getContentDescription();
		jint getCurrentItemIndex();
		jint getFromIndex();
		jint getItemCount();
		jint getMaxScrollX();
		jint getMaxScrollY();
		QAndroidJniObject getParcelableData();
		jint getRemovedCount();
		jint getScrollDeltaX();
		jint getScrollDeltaY();
		jint getScrollX();
		jint getScrollY();
		QAndroidJniObject getSource();
		QAndroidJniObject getText();
		jint getToIndex();
		jint getWindowId();
		jboolean isChecked();
		jboolean isEnabled();
		jboolean isFullScreen();
		jboolean isPassword();
		jboolean isScrollable();
		void recycle();
		void setAddedCount(jint arg0);
		void setBeforeText(jstring arg0);
		void setBeforeText(const QString &arg0);
		void setChecked(jboolean arg0);
		void setClassName(jstring arg0);
		void setClassName(const QString &arg0);
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
		void setCurrentItemIndex(jint arg0);
		void setEnabled(jboolean arg0);
		void setFromIndex(jint arg0);
		void setFullScreen(jboolean arg0);
		void setItemCount(jint arg0);
		void setMaxScrollX(jint arg0);
		void setMaxScrollY(jint arg0);
		void setParcelableData(__jni_impl::__JniBaseClass arg0);
		void setPassword(jboolean arg0);
		void setRemovedCount(jint arg0);
		void setScrollDeltaX(jint arg0);
		void setScrollDeltaY(jint arg0);
		void setScrollX(jint arg0);
		void setScrollY(jint arg0);
		void setScrollable(jboolean arg0);
		void setSource(__jni_impl::android::view::View arg0);
		void setSource(__jni_impl::android::view::View arg0, jint arg1);
		void setToIndex(jint arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::view::accessibility

#include "../View.hpp"
#include "./AccessibilityNodeInfo.hpp"

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
	QAndroidJniObject AccessibilityRecord::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityRecord;"
		);
	}
	QAndroidJniObject AccessibilityRecord::obtain(__jni_impl::android::view::accessibility::AccessibilityRecord arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityRecord",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;",
			arg0.__jniObject().object()
		);
	}
	jint AccessibilityRecord::getAddedCount()
	{
		return __thiz.callMethod<jint>(
			"getAddedCount",
			"()I"
		);
	}
	jstring AccessibilityRecord::getBeforeText()
	{
		return __thiz.callObjectMethod(
			"getBeforeText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityRecord::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityRecord::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityRecord::getCurrentItemIndex()
	{
		return __thiz.callMethod<jint>(
			"getCurrentItemIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getFromIndex()
	{
		return __thiz.callMethod<jint>(
			"getFromIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getItemCount()
	{
		return __thiz.callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollX()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getMaxScrollY()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollY",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityRecord::getParcelableData()
	{
		return __thiz.callObjectMethod(
			"getParcelableData",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AccessibilityRecord::getRemovedCount()
	{
		return __thiz.callMethod<jint>(
			"getRemovedCount",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaX()
	{
		return __thiz.callMethod<jint>(
			"getScrollDeltaX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollDeltaY()
	{
		return __thiz.callMethod<jint>(
			"getScrollDeltaY",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollX()
	{
		return __thiz.callMethod<jint>(
			"getScrollX",
			"()I"
		);
	}
	jint AccessibilityRecord::getScrollY()
	{
		return __thiz.callMethod<jint>(
			"getScrollY",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityRecord::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityRecord::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityRecord::getToIndex()
	{
		return __thiz.callMethod<jint>(
			"getToIndex",
			"()I"
		);
	}
	jint AccessibilityRecord::getWindowId()
	{
		return __thiz.callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jboolean AccessibilityRecord::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isFullScreen()
	{
		return __thiz.callMethod<jboolean>(
			"isFullScreen",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isPassword()
	{
		return __thiz.callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityRecord::isScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	void AccessibilityRecord::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void AccessibilityRecord::setAddedCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAddedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setBeforeText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setBeforeText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setBeforeText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityRecord::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setClassName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityRecord::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityRecord::setContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityRecord::setCurrentItemIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentItemIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setFromIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFromIndex",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setFullScreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFullScreen",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setItemCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setItemCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setMaxScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setParcelableData(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParcelableData",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityRecord::setPassword(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setRemovedCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRemovedCount",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollDeltaX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollDeltaY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollDeltaY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollX",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollY",
			"(I)V",
			arg0
		);
	}
	void AccessibilityRecord::setScrollable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityRecord::setSource(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityRecord::setSource(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityRecord::setToIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setToIndex",
			"(I)V",
			arg0
		);
	}
	jstring AccessibilityRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

