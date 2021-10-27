#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::inputmethodservice
{
	class Keyboard_Key;
}
namespace __jni_impl::android::inputmethodservice
{
	class Keyboard_Row;
}

namespace __jni_impl::android::inputmethodservice
{
	class Keyboard : public __JniBaseClass
	{
	public:
		// Fields
		static jint EDGE_BOTTOM();
		static jint EDGE_LEFT();
		static jint EDGE_RIGHT();
		static jint EDGE_TOP();
		static jint KEYCODE_ALT();
		static jint KEYCODE_CANCEL();
		static jint KEYCODE_DELETE();
		static jint KEYCODE_DONE();
		static jint KEYCODE_MODE_CHANGE();
		static jint KEYCODE_SHIFT();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, const QString &arg2, jint arg3, jint arg4);
		
		// Methods
		jint getHeight();
		QAndroidJniObject getKeys();
		jint getMinWidth();
		QAndroidJniObject getModifierKeys();
		jintArray getNearestKeys(jint arg0, jint arg1);
		jint getShiftKeyIndex();
		jboolean isShifted();
		jboolean setShifted(jboolean arg0);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "./Keyboard_Key.hpp"
#include "./Keyboard_Row.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	jint Keyboard::EDGE_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_BOTTOM"
		);
	}
	jint Keyboard::EDGE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_LEFT"
		);
	}
	jint Keyboard::EDGE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_RIGHT"
		);
	}
	jint Keyboard::EDGE_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_TOP"
		);
	}
	jint Keyboard::KEYCODE_ALT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_ALT"
		);
	}
	jint Keyboard::KEYCODE_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_CANCEL"
		);
	}
	jint Keyboard::KEYCODE_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DELETE"
		);
	}
	jint Keyboard::KEYCODE_DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DONE"
		);
	}
	jint Keyboard::KEYCODE_MODE_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_MODE_CHANGE"
		);
	}
	jint Keyboard::KEYCODE_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_SHIFT"
		);
	}
	
	// Constructors
	void Keyboard::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Keyboard::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Keyboard::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Keyboard::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;ILjava/lang/CharSequence;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Keyboard::__constructor(__jni_impl::android::content::Context arg0, jint arg1, const QString &arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;ILjava/lang/CharSequence;II)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	
	// Methods
	jint Keyboard::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	QAndroidJniObject Keyboard::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	jint Keyboard::getMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	QAndroidJniObject Keyboard::getModifierKeys()
	{
		return __thiz.callObjectMethod(
			"getModifierKeys",
			"()Ljava/util/List;"
		);
	}
	jintArray Keyboard::getNearestKeys(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getNearestKeys",
			"(II)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jint Keyboard::getShiftKeyIndex()
	{
		return __thiz.callMethod<jint>(
			"getShiftKeyIndex",
			"()I"
		);
	}
	jboolean Keyboard::isShifted()
	{
		return __thiz.callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	jboolean Keyboard::setShifted(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class Keyboard : public __jni_impl::android::inputmethodservice::Keyboard
	{
	public:
		Keyboard(QAndroidJniObject obj) { __thiz = obj; }
		Keyboard(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Keyboard(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Keyboard(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		Keyboard(__jni_impl::android::content::Context arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::inputmethodservice

