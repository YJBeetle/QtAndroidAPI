#pragma once

#ifndef ANDROID_ICU_MATH_MATHCONTEXT
#define ANDROID_ICU_MATH_MATHCONTEXT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::math
{
	class MathContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		static jint ENGINEERING();
		static jint PLAIN();
		static jint ROUND_CEILING();
		static jint ROUND_DOWN();
		static jint ROUND_FLOOR();
		static jint ROUND_HALF_DOWN();
		static jint ROUND_HALF_EVEN();
		static jint ROUND_HALF_UP();
		static jint ROUND_UNNECESSARY();
		static jint ROUND_UP();
		static jint SCIENTIFIC();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jboolean arg2, jint arg3);
		void __constructor(jint arg0, jint arg1, jboolean arg2);
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0);
		
		// Methods
		jstring toString();
		jint getRoundingMode();
		jint getDigits();
		jint getForm();
		jboolean getLostDigits();
	};
} // namespace __jni_impl::android::icu::math


namespace __jni_impl::android::icu::math
{
	// Fields
	QAndroidJniObject MathContext::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.math.MathContext",
			"DEFAULT",
			"Landroid/icu/math/MathContext;"
		);
	}
	jint MathContext::ENGINEERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ENGINEERING"
		);
	}
	jint MathContext::PLAIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"PLAIN"
		);
	}
	jint MathContext::ROUND_CEILING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_CEILING"
		);
	}
	jint MathContext::ROUND_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_DOWN"
		);
	}
	jint MathContext::ROUND_FLOOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_FLOOR"
		);
	}
	jint MathContext::ROUND_HALF_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_DOWN"
		);
	}
	jint MathContext::ROUND_HALF_EVEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_EVEN"
		);
	}
	jint MathContext::ROUND_HALF_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_HALF_UP"
		);
	}
	jint MathContext::ROUND_UNNECESSARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UNNECESSARY"
		);
	}
	jint MathContext::ROUND_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"ROUND_UP"
		);
	}
	jint MathContext::SCIENTIFIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.math.MathContext",
			"SCIENTIFIC"
		);
	}
	
	// Constructors
	void MathContext::__constructor(jint arg0, jint arg1, jboolean arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(IIZI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void MathContext::__constructor(jint arg0, jint arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MathContext::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MathContext::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.math.MathContext",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring MathContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MathContext::getRoundingMode()
	{
		return __thiz.callMethod<jint>(
			"getRoundingMode",
			"()I"
		);
	}
	jint MathContext::getDigits()
	{
		return __thiz.callMethod<jint>(
			"getDigits",
			"()I"
		);
	}
	jint MathContext::getForm()
	{
		return __thiz.callMethod<jint>(
			"getForm",
			"()I"
		);
	}
	jboolean MathContext::getLostDigits()
	{
		return __thiz.callMethod<jboolean>(
			"getLostDigits",
			"()Z"
		);
	}
} // namespace __jni_impl::android::icu::math

namespace android::icu::math
{
	class MathContext : public __jni_impl::android::icu::math::MathContext
	{
	public:
		MathContext(QAndroidJniObject obj) { __thiz = obj; }
		MathContext(jint arg0, jint arg1, jboolean arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		MathContext(jint arg0, jint arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MathContext(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MathContext(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::math

#endif // ANDROID_ICU_MATH_MATHCONTEXT

