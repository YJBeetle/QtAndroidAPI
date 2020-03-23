#pragma once

#ifndef ANDROID_WIDGET_ADAPTERVIEWANIMATOR
#define ANDROID_WIDGET_ADAPTERVIEWANIMATOR

#include "AdapterView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::animation
{
	class ObjectAnimator;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::widget
{
	class AdapterViewAnimator : public __jni_impl::android::widget::AdapterView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void advance();
		QAndroidJniObject getAdapter();
		jint getDisplayedChild();
		QAndroidJniObject getInAnimation();
		void setInAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		void setInAnimation(__jni_impl::android::animation::ObjectAnimator arg0);
		QAndroidJniObject getOutAnimation();
		void setOutAnimation(__jni_impl::android::animation::ObjectAnimator arg0);
		void setOutAnimation(__jni_impl::android::content::Context arg0, jint arg1);
		void setAnimateFirstView(jboolean arg0);
		void showNext();
		void showPrevious();
		void setDisplayedChild(jint arg0);
		void fyiWillBeAdvancedByHostKThx();
		void setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0);
		void deferNotifyDataSetChanged();
		jboolean onRemoteAdapterConnected();
		void onRemoteAdapterDisconnected();
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getSelectedView();
		void setSelection(jint arg0);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject getAccessibilityClassName();
		jint getBaseline();
		QAndroidJniObject getCurrentView();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../animation/ObjectAnimator.hpp"
#include "../content/Intent.hpp"
#include "../view/View.hpp"
#include "../view/MotionEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void AdapterViewAnimator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void AdapterViewAnimator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void AdapterViewAnimator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AdapterViewAnimator::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AdapterViewAnimator::advance()
	{
		__thiz.callMethod<void>(
			"advance",
			"()V");
	}
	QAndroidJniObject AdapterViewAnimator::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;");
	}
	jint AdapterViewAnimator::getDisplayedChild()
	{
		return __thiz.callMethod<jint>(
			"getDisplayedChild",
			"()I");
	}
	QAndroidJniObject AdapterViewAnimator::getInAnimation()
	{
		return __thiz.callObjectMethod(
			"getInAnimation",
			"()Landroid/animation/ObjectAnimator;");
	}
	void AdapterViewAnimator::setInAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void AdapterViewAnimator::setInAnimation(__jni_impl::android::animation::ObjectAnimator arg0)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AdapterViewAnimator::getOutAnimation()
	{
		return __thiz.callObjectMethod(
			"getOutAnimation",
			"()Landroid/animation/ObjectAnimator;");
	}
	void AdapterViewAnimator::setOutAnimation(__jni_impl::android::animation::ObjectAnimator arg0)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.__jniObject().object());
	}
	void AdapterViewAnimator::setOutAnimation(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void AdapterViewAnimator::setAnimateFirstView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0);
	}
	void AdapterViewAnimator::showNext()
	{
		__thiz.callMethod<void>(
			"showNext",
			"()V");
	}
	void AdapterViewAnimator::showPrevious()
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"()V");
	}
	void AdapterViewAnimator::setDisplayedChild(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0);
	}
	void AdapterViewAnimator::fyiWillBeAdvancedByHostKThx()
	{
		__thiz.callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V");
	}
	void AdapterViewAnimator::setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void AdapterViewAnimator::deferNotifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V");
	}
	jboolean AdapterViewAnimator::onRemoteAdapterConnected()
	{
		return __thiz.callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z");
	}
	void AdapterViewAnimator::onRemoteAdapterDisconnected()
	{
		__thiz.callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V");
	}
	void AdapterViewAnimator::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AdapterViewAnimator::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;");
	}
	void AdapterViewAnimator::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0);
	}
	void AdapterViewAnimator::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AdapterViewAnimator::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;");
	}
	jboolean AdapterViewAnimator::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AdapterViewAnimator::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	jint AdapterViewAnimator::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I");
	}
	QAndroidJniObject AdapterViewAnimator::getCurrentView()
	{
		return __thiz.callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AdapterViewAnimator : public __jni_impl::android::widget::AdapterViewAnimator
	{
	public:
		AdapterViewAnimator(QAndroidJniObject obj) { __thiz = obj; }
		AdapterViewAnimator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		AdapterViewAnimator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AdapterViewAnimator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AdapterViewAnimator(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ADAPTERVIEWANIMATOR

