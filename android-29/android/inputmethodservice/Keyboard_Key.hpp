#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::inputmethodservice
{
	class Keyboard_Row;
}

namespace __jni_impl::android::inputmethodservice
{
	class Keyboard_Key : public __JniBaseClass
	{
	public:
		// Fields
		jintArray codes();
		jint edgeFlags();
		jint gap();
		jint height();
		QAndroidJniObject icon();
		QAndroidJniObject iconPreview();
		jstring label();
		jboolean modifier();
		jboolean on();
		jstring popupCharacters();
		jint popupResId();
		jboolean pressed();
		jboolean repeatable();
		jboolean sticky();
		jstring text();
		jint width();
		jint x();
		jint y();
		
		// Constructors
		void __constructor(__jni_impl::android::inputmethodservice::Keyboard_Row arg0);
		void __constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		
		// Methods
		jintArray getCurrentDrawableState();
		jboolean isInside(jint arg0, jint arg1);
		void onPressed();
		void onReleased(jboolean arg0);
		jint squaredDistanceFrom(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../content/res/Resources.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./Keyboard_Row.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	jintArray Keyboard_Key::codes()
	{
		return __thiz.getObjectField(
			"codes",
			"[I"
		).object<jintArray>();
	}
	jint Keyboard_Key::edgeFlags()
	{
		return __thiz.getField<jint>(
			"edgeFlags"
		);
	}
	jint Keyboard_Key::gap()
	{
		return __thiz.getField<jint>(
			"gap"
		);
	}
	jint Keyboard_Key::height()
	{
		return __thiz.getField<jint>(
			"height"
		);
	}
	QAndroidJniObject Keyboard_Key::icon()
	{
		return __thiz.getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Keyboard_Key::iconPreview()
	{
		return __thiz.getObjectField(
			"iconPreview",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring Keyboard_Key::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Keyboard_Key::modifier()
	{
		return __thiz.getField<jboolean>(
			"modifier"
		);
	}
	jboolean Keyboard_Key::on()
	{
		return __thiz.getField<jboolean>(
			"on"
		);
	}
	jstring Keyboard_Key::popupCharacters()
	{
		return __thiz.getObjectField(
			"popupCharacters",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Keyboard_Key::popupResId()
	{
		return __thiz.getField<jint>(
			"popupResId"
		);
	}
	jboolean Keyboard_Key::pressed()
	{
		return __thiz.getField<jboolean>(
			"pressed"
		);
	}
	jboolean Keyboard_Key::repeatable()
	{
		return __thiz.getField<jboolean>(
			"repeatable"
		);
	}
	jboolean Keyboard_Key::sticky()
	{
		return __thiz.getField<jboolean>(
			"sticky"
		);
	}
	jstring Keyboard_Key::text()
	{
		return __thiz.getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Keyboard_Key::width()
	{
		return __thiz.getField<jint>(
			"width"
		);
	}
	jint Keyboard_Key::x()
	{
		return __thiz.getField<jint>(
			"x"
		);
	}
	jint Keyboard_Key::y()
	{
		return __thiz.getField<jint>(
			"y"
		);
	}
	
	// Constructors
	void Keyboard_Key::__constructor(__jni_impl::android::inputmethodservice::Keyboard_Row arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard$Key",
			"(Landroid/inputmethodservice/Keyboard$Row;)V",
			arg0.__jniObject().object()
		);
	}
	void Keyboard_Key::__constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard$Key",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard$Row;IILandroid/content/res/XmlResourceParser;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	jintArray Keyboard_Key::getCurrentDrawableState()
	{
		return __thiz.callObjectMethod(
			"getCurrentDrawableState",
			"()[I"
		).object<jintArray>();
	}
	jboolean Keyboard_Key::isInside(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isInside",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void Keyboard_Key::onPressed()
	{
		__thiz.callMethod<void>(
			"onPressed",
			"()V"
		);
	}
	void Keyboard_Key::onReleased(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onReleased",
			"(Z)V",
			arg0
		);
	}
	jint Keyboard_Key::squaredDistanceFrom(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"squaredDistanceFrom",
			"(II)I",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class Keyboard_Key : public __jni_impl::android::inputmethodservice::Keyboard_Key
	{
	public:
		Keyboard_Key(QAndroidJniObject obj) { __thiz = obj; }
		Keyboard_Key(__jni_impl::android::inputmethodservice::Keyboard_Row arg0)
		{
			__constructor(
				arg0);
		}
		Keyboard_Key(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
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

