#pragma once

#ifndef ANDROID_WIDGET_LISTPOPUPWINDOW
#define ANDROID_WIDGET_LISTPOPUPWINDOW

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::widget
{
	class ListView;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::widget
{
	class ListPopupWindow : public __JniBaseClass
	{
	public:
		// Fields
		static jint INPUT_METHOD_FROM_FOCUSABLE();
		static jint INPUT_METHOD_NEEDED();
		static jint INPUT_METHOD_NOT_NEEDED();
		static jint MATCH_PARENT();
		static jint POSITION_PROMPT_ABOVE();
		static jint POSITION_PROMPT_BELOW();
		static jint WRAP_CONTENT();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void show();
		void setWidth(jint arg0);
		void setHeight(jint arg0);
		jint getWidth();
		jint getHeight();
		jboolean isShowing();
		void dismiss();
		void setOnDismissListener(__jni_impl::__JniBaseClass arg0);
		void setOnItemClickListener(__jni_impl::__JniBaseClass arg0);
		jboolean performItemClick(jint arg0);
		void setOnItemSelectedListener(__jni_impl::__JniBaseClass arg0);
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		jint getSelectedItemPosition();
		jlong getSelectedItemId();
		QAndroidJniObject getSelectedView();
		QAndroidJniObject getSelectedItem();
		void setSelection(jint arg0);
		jboolean onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		void setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getBackground();
		void setAnchorView(__jni_impl::android::view::View arg0);
		void clearListSelection();
		jint getInputMethodMode();
		void setInputMethodMode(jint arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		QAndroidJniObject getListView();
		void setSoftInputMode(jint arg0);
		void setPromptPosition(jint arg0);
		jint getPromptPosition();
		void setModal(jboolean arg0);
		jboolean isModal();
		jint getSoftInputMode();
		void setListSelector(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setAnimationStyle(jint arg0);
		jint getAnimationStyle();
		QAndroidJniObject getAnchorView();
		jint getHorizontalOffset();
		void setHorizontalOffset(jint arg0);
		jint getVerticalOffset();
		void setVerticalOffset(jint arg0);
		void setEpicenterBounds(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getEpicenterBounds();
		void setDropDownGravity(jint arg0);
		void setContentWidth(jint arg0);
		void setWindowLayoutType(jint arg0);
		void setPromptView(__jni_impl::android::view::View arg0);
		void postShow();
		jboolean isInputMethodNotNeeded();
		QAndroidJniObject createDragToOpenListener(__jni_impl::android::view::View arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/KeyEvent.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "ListView.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint ListPopupWindow::INPUT_METHOD_FROM_FOCUSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE");
	}
	jint ListPopupWindow::INPUT_METHOD_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NEEDED");
	}
	jint ListPopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NOT_NEEDED");
	}
	jint ListPopupWindow::MATCH_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"MATCH_PARENT");
	}
	jint ListPopupWindow::POSITION_PROMPT_ABOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_ABOVE");
	}
	jint ListPopupWindow::POSITION_PROMPT_BELOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_BELOW");
	}
	jint ListPopupWindow::WRAP_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"WRAP_CONTENT");
	}
	
	// Constructors
	void ListPopupWindow::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ListPopupWindow::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ListPopupWindow::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ListPopupWindow::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void ListPopupWindow::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V");
	}
	void ListPopupWindow::setWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(I)V",
			arg0);
	}
	void ListPopupWindow::setHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHeight",
			"(I)V",
			arg0);
	}
	jint ListPopupWindow::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint ListPopupWindow::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	jboolean ListPopupWindow::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z");
	}
	void ListPopupWindow::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V");
	}
	void ListPopupWindow::setOnDismissListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.__jniObject().object());
	}
	void ListPopupWindow::setOnItemClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object());
	}
	jboolean ListPopupWindow::performItemClick(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(I)Z",
			arg0);
	}
	void ListPopupWindow::setOnItemSelectedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.__jniObject().object());
	}
	void ListPopupWindow::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object());
	}
	jint ListPopupWindow::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I");
	}
	jlong ListPopupWindow::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J");
	}
	QAndroidJniObject ListPopupWindow::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;");
	}
	QAndroidJniObject ListPopupWindow::getSelectedItem()
	{
		return __thiz.callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;");
	}
	void ListPopupWindow::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0);
	}
	jboolean ListPopupWindow::onKeyPreIme(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void ListPopupWindow::setBackgroundDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ListPopupWindow::getBackground()
	{
		return __thiz.callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void ListPopupWindow::setAnchorView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ListPopupWindow::clearListSelection()
	{
		__thiz.callMethod<void>(
			"clearListSelection",
			"()V");
	}
	jint ListPopupWindow::getInputMethodMode()
	{
		return __thiz.callMethod<jint>(
			"getInputMethodMode",
			"()I");
	}
	void ListPopupWindow::setInputMethodMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0);
	}
	jboolean ListPopupWindow::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean ListPopupWindow::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ListPopupWindow::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;");
	}
	void ListPopupWindow::setSoftInputMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0);
	}
	void ListPopupWindow::setPromptPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPromptPosition",
			"(I)V",
			arg0);
	}
	jint ListPopupWindow::getPromptPosition()
	{
		return __thiz.callMethod<jint>(
			"getPromptPosition",
			"()I");
	}
	void ListPopupWindow::setModal(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setModal",
			"(Z)V",
			arg0);
	}
	jboolean ListPopupWindow::isModal()
	{
		return __thiz.callMethod<jboolean>(
			"isModal",
			"()Z");
	}
	jint ListPopupWindow::getSoftInputMode()
	{
		return __thiz.callMethod<jint>(
			"getSoftInputMode",
			"()I");
	}
	void ListPopupWindow::setListSelector(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setListSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void ListPopupWindow::setAnimationStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0);
	}
	jint ListPopupWindow::getAnimationStyle()
	{
		return __thiz.callMethod<jint>(
			"getAnimationStyle",
			"()I");
	}
	QAndroidJniObject ListPopupWindow::getAnchorView()
	{
		return __thiz.callObjectMethod(
			"getAnchorView",
			"()Landroid/view/View;");
	}
	jint ListPopupWindow::getHorizontalOffset()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalOffset",
			"()I");
	}
	void ListPopupWindow::setHorizontalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalOffset",
			"(I)V",
			arg0);
	}
	jint ListPopupWindow::getVerticalOffset()
	{
		return __thiz.callMethod<jint>(
			"getVerticalOffset",
			"()I");
	}
	void ListPopupWindow::setVerticalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalOffset",
			"(I)V",
			arg0);
	}
	void ListPopupWindow::setEpicenterBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setEpicenterBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ListPopupWindow::getEpicenterBounds()
	{
		return __thiz.callObjectMethod(
			"getEpicenterBounds",
			"()Landroid/graphics/Rect;");
	}
	void ListPopupWindow::setDropDownGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownGravity",
			"(I)V",
			arg0);
	}
	void ListPopupWindow::setContentWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentWidth",
			"(I)V",
			arg0);
	}
	void ListPopupWindow::setWindowLayoutType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0);
	}
	void ListPopupWindow::setPromptView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setPromptView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ListPopupWindow::postShow()
	{
		__thiz.callMethod<void>(
			"postShow",
			"()V");
	}
	jboolean ListPopupWindow::isInputMethodNotNeeded()
	{
		return __thiz.callMethod<jboolean>(
			"isInputMethodNotNeeded",
			"()Z");
	}
	QAndroidJniObject ListPopupWindow::createDragToOpenListener(__jni_impl::android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"createDragToOpenListener",
			"(Landroid/view/View;)Landroid/view/View$OnTouchListener;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ListPopupWindow : public __jni_impl::android::widget::ListPopupWindow
	{
	public:
		ListPopupWindow(QAndroidJniObject obj) { __thiz = obj; }
		ListPopupWindow(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ListPopupWindow(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ListPopupWindow(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ListPopupWindow(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_LISTPOPUPWINDOW

