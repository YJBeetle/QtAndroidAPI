#include "../../../JArray.hpp"
#include "./ColorStateList.hpp"
#include "./Resources.hpp"
#include "../../graphics/Typeface.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../util/TypedValue.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TypedArray.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean TypedArray::getBoolean(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jint TypedArray::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jint TypedArray::getColor(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getColor",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::content::res::ColorStateList TypedArray::getColorStateList(jint arg0) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jfloat TypedArray::getDimension(jint arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getDimension",
			"(IF)F",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelOffset(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getDimensionPixelOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getDimensionPixelSize(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getDimensionPixelSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::graphics::drawable::Drawable TypedArray::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jfloat TypedArray::getFloat(jint arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(IF)F",
			arg0,
			arg1
		);
	}
	android::graphics::Typeface TypedArray::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jfloat TypedArray::getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3) const
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
	jint TypedArray::getIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(I)I",
			arg0
		);
	}
	jint TypedArray::getIndexCount() const
	{
		return callMethod<jint>(
			"getIndexCount",
			"()I"
		);
	}
	jint TypedArray::getInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getInteger(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInteger",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getLayoutDimension",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint TypedArray::getLayoutDimension(jint arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getLayoutDimension",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	JString TypedArray::getNonResourceString(jint arg0) const
	{
		return callObjectMethod(
			"getNonResourceString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TypedArray::getPositionDescription() const
	{
		return callObjectMethod(
			"getPositionDescription",
			"()Ljava/lang/String;"
		);
	}
	jint TypedArray::getResourceId(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::content::res::Resources TypedArray::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	JString TypedArray::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString TypedArray::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	JArray TypedArray::getTextArray(jint arg0) const
	{
		return callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		);
	}
	jint TypedArray::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean TypedArray::getValue(jint arg0, android::util::TypedValue arg1) const
	{
		return callMethod<jboolean>(
			"getValue",
			"(ILandroid/util/TypedValue;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean TypedArray::hasValue(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasValue",
			"(I)Z",
			arg0
		);
	}
	jboolean TypedArray::hasValueOrEmpty(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasValueOrEmpty",
			"(I)Z",
			arg0
		);
	}
	jint TypedArray::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	android::util::TypedValue TypedArray::peekValue(jint arg0) const
	{
		return callObjectMethod(
			"peekValue",
			"(I)Landroid/util/TypedValue;",
			arg0
		);
	}
	void TypedArray::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	JString TypedArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content::res

