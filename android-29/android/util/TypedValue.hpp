#pragma once

#ifndef ANDROID_UTIL_TYPEDVALUE
#define ANDROID_UTIL_TYPEDVALUE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class DisplayMetrics;
}

namespace __jni_impl::android::util
{
	class TypedValue : public __JniBaseClass
	{
	public:
		// Fields
		static jint COMPLEX_MANTISSA_MASK();
		static jint COMPLEX_MANTISSA_SHIFT();
		static jint COMPLEX_RADIX_0p23();
		static jint COMPLEX_RADIX_16p7();
		static jint COMPLEX_RADIX_23p0();
		static jint COMPLEX_RADIX_8p15();
		static jint COMPLEX_RADIX_MASK();
		static jint COMPLEX_RADIX_SHIFT();
		static jint COMPLEX_UNIT_DIP();
		static jint COMPLEX_UNIT_FRACTION();
		static jint COMPLEX_UNIT_FRACTION_PARENT();
		static jint COMPLEX_UNIT_IN();
		static jint COMPLEX_UNIT_MASK();
		static jint COMPLEX_UNIT_MM();
		static jint COMPLEX_UNIT_PT();
		static jint COMPLEX_UNIT_PX();
		static jint COMPLEX_UNIT_SHIFT();
		static jint COMPLEX_UNIT_SP();
		static jint DATA_NULL_EMPTY();
		static jint DATA_NULL_UNDEFINED();
		static jint DENSITY_DEFAULT();
		static jint DENSITY_NONE();
		static jint TYPE_ATTRIBUTE();
		static jint TYPE_DIMENSION();
		static jint TYPE_FIRST_COLOR_INT();
		static jint TYPE_FIRST_INT();
		static jint TYPE_FLOAT();
		static jint TYPE_FRACTION();
		static jint TYPE_INT_BOOLEAN();
		static jint TYPE_INT_COLOR_ARGB4();
		static jint TYPE_INT_COLOR_ARGB8();
		static jint TYPE_INT_COLOR_RGB4();
		static jint TYPE_INT_COLOR_RGB8();
		static jint TYPE_INT_DEC();
		static jint TYPE_INT_HEX();
		static jint TYPE_LAST_COLOR_INT();
		static jint TYPE_LAST_INT();
		static jint TYPE_NULL();
		static jint TYPE_REFERENCE();
		static jint TYPE_STRING();
		jint assetCookie();
		jint changingConfigurations();
		jint data();
		jint density();
		jint resourceId();
		jint sourceResourceId();
		jstring string();
		jint type();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jfloat getFloat();
		jfloat getDimension(__jni_impl::android::util::DisplayMetrics arg0);
		jfloat getFraction(jfloat arg0, jfloat arg1);
		void setTo(__jni_impl::android::util::TypedValue arg0);
		jboolean isColorType();
		static jfloat complexToFloat(jint arg0);
		static jfloat complexToDimension(jint arg0, __jni_impl::android::util::DisplayMetrics arg1);
		static jint complexToDimensionPixelOffset(jint arg0, __jni_impl::android::util::DisplayMetrics arg1);
		static jint complexToDimensionPixelSize(jint arg0, __jni_impl::android::util::DisplayMetrics arg1);
		jint getComplexUnit();
		static jfloat applyDimension(jint arg0, jfloat arg1, __jni_impl::android::util::DisplayMetrics arg2);
		static jfloat complexToFraction(jint arg0, jfloat arg1, jfloat arg2);
		static jstring coerceToString(jint arg0, jint arg1);
		jstring coerceToString();
	};
} // namespace __jni_impl::android::util

#include "DisplayMetrics.hpp"

namespace __jni_impl::android::util
{
	// Fields
	jint TypedValue::COMPLEX_MANTISSA_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_MANTISSA_MASK"
		);
	}
	jint TypedValue::COMPLEX_MANTISSA_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_MANTISSA_SHIFT"
		);
	}
	jint TypedValue::COMPLEX_RADIX_0p23()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_0p23"
		);
	}
	jint TypedValue::COMPLEX_RADIX_16p7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_16p7"
		);
	}
	jint TypedValue::COMPLEX_RADIX_23p0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_23p0"
		);
	}
	jint TypedValue::COMPLEX_RADIX_8p15()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_8p15"
		);
	}
	jint TypedValue::COMPLEX_RADIX_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_MASK"
		);
	}
	jint TypedValue::COMPLEX_RADIX_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_RADIX_SHIFT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_DIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_DIP"
		);
	}
	jint TypedValue::COMPLEX_UNIT_FRACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_FRACTION"
		);
	}
	jint TypedValue::COMPLEX_UNIT_FRACTION_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_FRACTION_PARENT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_IN"
		);
	}
	jint TypedValue::COMPLEX_UNIT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_MASK"
		);
	}
	jint TypedValue::COMPLEX_UNIT_MM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_MM"
		);
	}
	jint TypedValue::COMPLEX_UNIT_PT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_PT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_PX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_PX"
		);
	}
	jint TypedValue::COMPLEX_UNIT_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_SHIFT"
		);
	}
	jint TypedValue::COMPLEX_UNIT_SP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"COMPLEX_UNIT_SP"
		);
	}
	jint TypedValue::DATA_NULL_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"DATA_NULL_EMPTY"
		);
	}
	jint TypedValue::DATA_NULL_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"DATA_NULL_UNDEFINED"
		);
	}
	jint TypedValue::DENSITY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"DENSITY_DEFAULT"
		);
	}
	jint TypedValue::DENSITY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"DENSITY_NONE"
		);
	}
	jint TypedValue::TYPE_ATTRIBUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_ATTRIBUTE"
		);
	}
	jint TypedValue::TYPE_DIMENSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_DIMENSION"
		);
	}
	jint TypedValue::TYPE_FIRST_COLOR_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FIRST_COLOR_INT"
		);
	}
	jint TypedValue::TYPE_FIRST_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FIRST_INT"
		);
	}
	jint TypedValue::TYPE_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FLOAT"
		);
	}
	jint TypedValue::TYPE_FRACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_FRACTION"
		);
	}
	jint TypedValue::TYPE_INT_BOOLEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_BOOLEAN"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_ARGB4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_ARGB4"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_ARGB8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_ARGB8"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_RGB4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_RGB4"
		);
	}
	jint TypedValue::TYPE_INT_COLOR_RGB8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_COLOR_RGB8"
		);
	}
	jint TypedValue::TYPE_INT_DEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_DEC"
		);
	}
	jint TypedValue::TYPE_INT_HEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_INT_HEX"
		);
	}
	jint TypedValue::TYPE_LAST_COLOR_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_LAST_COLOR_INT"
		);
	}
	jint TypedValue::TYPE_LAST_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_LAST_INT"
		);
	}
	jint TypedValue::TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_NULL"
		);
	}
	jint TypedValue::TYPE_REFERENCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_REFERENCE"
		);
	}
	jint TypedValue::TYPE_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.TypedValue",
			"TYPE_STRING"
		);
	}
	jint TypedValue::assetCookie()
	{
		return __thiz.getField<jint>(
			"assetCookie"
		);
	}
	jint TypedValue::changingConfigurations()
	{
		return __thiz.getField<jint>(
			"changingConfigurations"
		);
	}
	jint TypedValue::data()
	{
		return __thiz.getField<jint>(
			"data"
		);
	}
	jint TypedValue::density()
	{
		return __thiz.getField<jint>(
			"density"
		);
	}
	jint TypedValue::resourceId()
	{
		return __thiz.getField<jint>(
			"resourceId"
		);
	}
	jint TypedValue::sourceResourceId()
	{
		return __thiz.getField<jint>(
			"sourceResourceId"
		);
	}
	jstring TypedValue::string()
	{
		return __thiz.getObjectField(
			"string",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TypedValue::type()
	{
		return __thiz.getField<jint>(
			"type"
		);
	}
	
	// Constructors
	void TypedValue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.TypedValue",
			"()V"
		);
	}
	
	// Methods
	jstring TypedValue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat TypedValue::getFloat()
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	jfloat TypedValue::getDimension(__jni_impl::android::util::DisplayMetrics arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getDimension",
			"(Landroid/util/DisplayMetrics;)F",
			arg0.__jniObject().object()
		);
	}
	jfloat TypedValue::getFraction(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"(FF)F",
			arg0,
			arg1
		);
	}
	void TypedValue::setTo(__jni_impl::android::util::TypedValue arg0)
	{
		__thiz.callMethod<void>(
			"setTo",
			"(Landroid/util/TypedValue;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TypedValue::isColorType()
	{
		return __thiz.callMethod<jboolean>(
			"isColorType",
			"()Z"
		);
	}
	jfloat TypedValue::complexToFloat(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToFloat",
			"(I)F",
			arg0
		);
	}
	jfloat TypedValue::complexToDimension(jint arg0, __jni_impl::android::util::DisplayMetrics arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToDimension",
			"(ILandroid/util/DisplayMetrics;)F",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TypedValue::complexToDimensionPixelOffset(jint arg0, __jni_impl::android::util::DisplayMetrics arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.TypedValue",
			"complexToDimensionPixelOffset",
			"(ILandroid/util/DisplayMetrics;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TypedValue::complexToDimensionPixelSize(jint arg0, __jni_impl::android::util::DisplayMetrics arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.TypedValue",
			"complexToDimensionPixelSize",
			"(ILandroid/util/DisplayMetrics;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TypedValue::getComplexUnit()
	{
		return __thiz.callMethod<jint>(
			"getComplexUnit",
			"()I"
		);
	}
	jfloat TypedValue::applyDimension(jint arg0, jfloat arg1, __jni_impl::android::util::DisplayMetrics arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"applyDimension",
			"(IFLandroid/util/DisplayMetrics;)F",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jfloat TypedValue::complexToFraction(jint arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.util.TypedValue",
			"complexToFraction",
			"(IFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	jstring TypedValue::coerceToString(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.TypedValue",
			"coerceToString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TypedValue::coerceToString()
	{
		return __thiz.callObjectMethod(
			"coerceToString",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class TypedValue : public __jni_impl::android::util::TypedValue
	{
	public:
		TypedValue(QAndroidJniObject obj) { __thiz = obj; }
		TypedValue()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_TYPEDVALUE

