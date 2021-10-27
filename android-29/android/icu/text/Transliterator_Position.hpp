#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class Transliterator_Position : public __JniBaseClass
	{
	public:
		// Fields
		jint contextLimit();
		jint contextStart();
		jint limit();
		jint start();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::icu::text::Transliterator_Position arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void set(__jni_impl::android::icu::text::Transliterator_Position arg0);
		jstring toString();
		void validate(jint arg0);
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	jint Transliterator_Position::contextLimit()
	{
		return __thiz.getField<jint>(
			"contextLimit"
		);
	}
	jint Transliterator_Position::contextStart()
	{
		return __thiz.getField<jint>(
			"contextStart"
		);
	}
	jint Transliterator_Position::limit()
	{
		return __thiz.getField<jint>(
			"limit"
		);
	}
	jint Transliterator_Position::start()
	{
		return __thiz.getField<jint>(
			"start"
		);
	}
	
	// Constructors
	void Transliterator_Position::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Transliterator$Position",
			"()V"
		);
	}
	void Transliterator_Position::__constructor(__jni_impl::android::icu::text::Transliterator_Position arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Transliterator$Position",
			"(Landroid/icu/text/Transliterator$Position;)V",
			arg0.__jniObject().object()
		);
	}
	void Transliterator_Position::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Transliterator$Position",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Transliterator_Position::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Transliterator$Position",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean Transliterator_Position::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Transliterator_Position::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Transliterator_Position::set(__jni_impl::android::icu::text::Transliterator_Position arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/icu/text/Transliterator$Position;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Transliterator_Position::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Transliterator_Position::validate(jint arg0)
	{
		__thiz.callMethod<void>(
			"validate",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Transliterator_Position : public __jni_impl::android::icu::text::Transliterator_Position
	{
	public:
		Transliterator_Position(QAndroidJniObject obj) { __thiz = obj; }
		Transliterator_Position()
		{
			__constructor();
		}
		Transliterator_Position(__jni_impl::android::icu::text::Transliterator_Position arg0)
		{
			__constructor(
				arg0);
		}
		Transliterator_Position(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Transliterator_Position(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::icu::text

