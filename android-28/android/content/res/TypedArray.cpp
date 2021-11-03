#include "./ColorStateList.hpp"
#include "./Resources.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../util/TypedValue.hpp"
#include "./TypedArray.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	TypedArray::TypedArray(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TypedArray::getBoolean(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint TypedArray::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint TypedArray::getColor(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getColor",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::content::res::ColorStateList TypedArray::getColorStateList(jint arg0)
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jfloat TypedArray::getDimension(jint arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getDimension",
			"(IF)F",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelOffset(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getDimensionPixelOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelSize(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getDimensionPixelSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::graphics::drawable::Drawable TypedArray::getDrawable(jint arg0)
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jfloat TypedArray::getFloat(jint arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(IF)F",
			arg0,
			arg1
		);
	}
	android::graphics::Typeface TypedArray::getFont(jint arg0)
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jfloat TypedArray::getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3)
	{
		return callMethod<jfloat>(
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
		return callMethod<jint>(
			"getIndex",
			"(I)I",
			arg0
		);
	}
	jint TypedArray::getIndexCount()
	{
		return callMethod<jint>(
			"getIndexCount",
			"()I"
		);
	}
	jint TypedArray::getInt(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getInteger(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInteger",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getLayoutDimension",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, jstring arg1)
	{
		return callMethod<jint>(
			"getLayoutDimension",
			"(ILjava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jstring TypedArray::getNonResourceString(jint arg0)
	{
		return callObjectMethod(
			"getNonResourceString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TypedArray::getPositionDescription()
	{
		return callObjectMethod(
			"getPositionDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TypedArray::getResourceId(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::content::res::Resources TypedArray::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jstring TypedArray::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TypedArray::getText(jint arg0)
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jarray TypedArray::getTextArray(jint arg0)
	{
		return callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	jint TypedArray::getType(jint arg0)
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean TypedArray::getValue(jint arg0, android::util::TypedValue arg1)
	{
		return callMethod<jboolean>(
			"getValue",
			"(ILandroid/util/TypedValue;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TypedArray::hasValue(jint arg0)
	{
		return callMethod<jboolean>(
			"hasValue",
			"(I)Z",
			arg0
		);
	}
	jboolean TypedArray::hasValueOrEmpty(jint arg0)
	{
		return callMethod<jboolean>(
			"hasValueOrEmpty",
			"(I)Z",
			arg0
		);
	}
	jint TypedArray::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	android::util::TypedValue TypedArray::peekValue(jint arg0)
	{
		return callObjectMethod(
			"peekValue",
			"(I)Landroid/util/TypedValue;",
			arg0
		);
	}
	void TypedArray::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jstring TypedArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::content::res

