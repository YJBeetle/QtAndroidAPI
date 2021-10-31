#include "./ColorStateList.hpp"
#include "./Resources.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../util/TypedValue.hpp"
#include "./TypedArray.hpp"

namespace android::content::res
{
	// Fields
	
	TypedArray::TypedArray(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean TypedArray::getBoolean(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint TypedArray::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint TypedArray::getColor(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TypedArray::getColorStateList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jfloat TypedArray::getDimension(jint arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getDimension",
			"(IF)F",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelOffset(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelSize(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TypedArray::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jfloat TypedArray::getFloat(jint arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(IF)F",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TypedArray::getFont(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jfloat TypedArray::getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3)
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"(IIIF)F",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint TypedArray::getIndex(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(I)I",
			arg0
		);
	}
	jint TypedArray::getIndexCount()
	{
		return __thiz.callMethod<jint>(
			"getIndexCount",
			"()I"
		);
	}
	jint TypedArray::getInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getInteger(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInteger",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getLayoutDimension",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getLayoutDimension",
			"(ILjava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jstring TypedArray::getNonResourceString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getNonResourceString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TypedArray::getPositionDescription()
	{
		return __thiz.callObjectMethod(
			"getPositionDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TypedArray::getResourceId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TypedArray::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jint TypedArray::getSourceResourceId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getSourceResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	jstring TypedArray::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TypedArray::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jarray TypedArray::getTextArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	jint TypedArray::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean TypedArray::getValue(jint arg0, android::util::TypedValue arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getValue",
			"(ILandroid/util/TypedValue;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean TypedArray::hasValue(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasValue",
			"(I)Z",
			arg0
		);
	}
	jboolean TypedArray::hasValueOrEmpty(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasValueOrEmpty",
			"(I)Z",
			arg0
		);
	}
	jint TypedArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	QAndroidJniObject TypedArray::peekValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"peekValue",
			"(I)Landroid/util/TypedValue;",
			arg0
		);
	}
	void TypedArray::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jstring TypedArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::content::res

