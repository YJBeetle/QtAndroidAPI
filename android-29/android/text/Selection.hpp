#pragma once

#ifndef ANDROID_TEXT_SELECTION
#define ANDROID_TEXT_SELECTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class Layout;
}

namespace __jni_impl::android::text
{
	class Selection : public __JniBaseClass
	{
	public:
		// Fields
		static jobject SELECTION_END();
		static jobject SELECTION_START();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void setSelection(__jni_impl::__JniBaseClass arg0, jint arg1);
		static void setSelection(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		static jint getSelectionStart(jstring arg0);
		static jint getSelectionEnd(jstring arg0);
		static void selectAll(__jni_impl::__JniBaseClass arg0);
		static void extendSelection(__jni_impl::__JniBaseClass arg0, jint arg1);
		static void removeSelection(__jni_impl::__JniBaseClass arg0);
		static jboolean moveUp(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean moveDown(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean moveLeft(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean moveRight(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean extendUp(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean extendDown(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean extendLeft(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean extendRight(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean extendToLeftEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean extendToRightEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean moveToLeftEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
		static jboolean moveToRightEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1);
	};
} // namespace __jni_impl::android::text

#include "Layout.hpp"

namespace __jni_impl::android::text
{
	// Fields
	jobject Selection::SELECTION_END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Selection",
			"SELECTION_END",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Selection::SELECTION_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Selection",
			"SELECTION_START",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void Selection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Selection",
			"(V)V");
	}
	
	// Methods
	void Selection::setSelection(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.Selection",
			"setSelection",
			"(Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Selection::setSelection(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.Selection",
			"setSelection",
			"(Landroid/text/Spannable;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Selection::getSelectionStart(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.Selection",
			"getSelectionStart",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint Selection::getSelectionEnd(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.Selection",
			"getSelectionEnd",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	void Selection::selectAll(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.Selection",
			"selectAll",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	void Selection::extendSelection(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.Selection",
			"extendSelection",
			"(Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Selection::removeSelection(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.Selection",
			"removeSelection",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Selection::moveUp(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveUp",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::moveDown(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveDown",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::moveLeft(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveLeft",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::moveRight(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveRight",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::extendUp(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendUp",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::extendDown(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendDown",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::extendLeft(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendLeft",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::extendRight(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendRight",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::extendToLeftEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToLeftEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::extendToRightEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToRightEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::moveToLeftEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToLeftEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Selection::moveToRightEdge(__jni_impl::__JniBaseClass arg0, __jni_impl::android::text::Layout arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToRightEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Selection : public __jni_impl::android::text::Selection
	{
	public:
		Selection(QAndroidJniObject obj) { __thiz = obj; }
		Selection()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_SELECTION

