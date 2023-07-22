#pragma once

#include "../../../JArray.hpp"
#include "./ColorStateList.def.hpp"
#include "./Resources.def.hpp"
#include "../../graphics/Typeface.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../util/TypedValue.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./TypedArray.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TypedArray::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean TypedArray::getBoolean(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	inline jint TypedArray::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline jint TypedArray::getColor(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getColor",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline android::content::res::ColorStateList TypedArray::getColorStateList(jint arg0) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	inline jfloat TypedArray::getDimension(jint arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getDimension",
			"(IF)F",
			arg0,
			arg1
		);
	}
	inline jint TypedArray::getDimensionPixelOffset(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getDimensionPixelOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint TypedArray::getDimensionPixelSize(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getDimensionPixelSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline android::graphics::drawable::Drawable TypedArray::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline jfloat TypedArray::getFloat(jint arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(IF)F",
			arg0,
			arg1
		);
	}
	inline android::graphics::Typeface TypedArray::getFont(jint arg0) const
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	inline jfloat TypedArray::getFraction(jint arg0, jint arg1, jint arg2, jfloat arg3) const
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
	inline jint TypedArray::getIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getIndex",
			"(I)I",
			arg0
		);
	}
	inline jint TypedArray::getIndexCount() const
	{
		return callMethod<jint>(
			"getIndexCount",
			"()I"
		);
	}
	inline jint TypedArray::getInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint TypedArray::getInteger(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInteger",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint TypedArray::getLayoutDimension(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getLayoutDimension",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint TypedArray::getLayoutDimension(jint arg0, JString arg1) const
	{
		return callMethod<jint>(
			"getLayoutDimension",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline JString TypedArray::getNonResourceString(jint arg0) const
	{
		return callObjectMethod(
			"getNonResourceString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TypedArray::getPositionDescription() const
	{
		return callObjectMethod(
			"getPositionDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint TypedArray::getResourceId(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline android::content::res::Resources TypedArray::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline jint TypedArray::getSourceResourceId(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getSourceResourceId",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JString TypedArray::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TypedArray::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline JArray TypedArray::getTextArray(jint arg0) const
	{
		return callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline jint TypedArray::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	inline jboolean TypedArray::getValue(jint arg0, android::util::TypedValue arg1) const
	{
		return callMethod<jboolean>(
			"getValue",
			"(ILandroid/util/TypedValue;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean TypedArray::hasValue(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasValue",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TypedArray::hasValueOrEmpty(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasValueOrEmpty",
			"(I)Z",
			arg0
		);
	}
	inline jint TypedArray::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline android::util::TypedValue TypedArray::peekValue(jint arg0) const
	{
		return callObjectMethod(
			"peekValue",
			"(I)Landroid/util/TypedValue;",
			arg0
		);
	}
	inline void TypedArray::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline JString TypedArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::content::res

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
