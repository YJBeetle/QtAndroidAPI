#pragma once

#include "../../JFloatArray.hpp"
#include "./ColorSpace.def.hpp"
#include "./ColorSpace_Connector.def.hpp"
#include "./ColorSpace_Model.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Color.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint Color::BLACK()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"BLACK"
		);
	}
	inline jint Color::BLUE()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"BLUE"
		);
	}
	inline jint Color::CYAN()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"CYAN"
		);
	}
	inline jint Color::DKGRAY()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"DKGRAY"
		);
	}
	inline jint Color::GRAY()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"GRAY"
		);
	}
	inline jint Color::GREEN()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"GREEN"
		);
	}
	inline jint Color::LTGRAY()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"LTGRAY"
		);
	}
	inline jint Color::MAGENTA()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"MAGENTA"
		);
	}
	inline jint Color::RED()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"RED"
		);
	}
	inline jint Color::TRANSPARENT()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"TRANSPARENT"
		);
	}
	inline jint Color::WHITE()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"WHITE"
		);
	}
	inline jint Color::YELLOW()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"YELLOW"
		);
	}
	
	// Constructors
	inline Color::Color()
		: JObject(
			"android.graphics.Color",
			"()V"
		) {}
	
	// Methods
	inline jint Color::HSVToColor(JFloatArray arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"([F)I",
			arg0.object<jfloatArray>()
		);
	}
	inline jint Color::HSVToColor(jint arg0, JFloatArray arg1)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"(I[F)I",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
	inline void Color::RGBToHSV(jint arg0, jint arg1, jint arg2, JFloatArray arg3)
	{
		callStaticMethod<void>(
			"android.graphics.Color",
			"RGBToHSV",
			"(III[F)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>()
		);
	}
	inline jfloat Color::alpha(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"alpha",
			"(J)F",
			arg0
		);
	}
	inline jint Color::alpha(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"alpha",
			"(I)I",
			arg0
		);
	}
	inline jint Color::argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"argb",
			"(FFFF)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Color::argb(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"argb",
			"(IIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jfloat Color::blue(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"blue",
			"(J)F",
			arg0
		);
	}
	inline jint Color::blue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"blue",
			"(I)I",
			arg0
		);
	}
	inline android::graphics::ColorSpace Color::colorSpace(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"colorSpace",
			"(J)Landroid/graphics/ColorSpace;",
			arg0
		);
	}
	inline void Color::colorToHSV(jint arg0, JFloatArray arg1)
	{
		callStaticMethod<void>(
			"android.graphics.Color",
			"colorToHSV",
			"(I[F)V",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
	inline jlong Color::convert(jint arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(ILandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong Color::convert(jlong arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong Color::convert(jlong arg0, android::graphics::ColorSpace_Connector arg1)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace_Connector arg4)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(FFFFLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4, android::graphics::ColorSpace arg5)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(FFFFLandroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		);
	}
	inline jfloat Color::green(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"green",
			"(J)F",
			arg0
		);
	}
	inline jint Color::green(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"green",
			"(I)I",
			arg0
		);
	}
	inline jboolean Color::isInColorSpace(jlong arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isInColorSpace",
			"(JLandroid/graphics/ColorSpace;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Color::isSrgb(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isSrgb",
			"(J)Z",
			arg0
		);
	}
	inline jboolean Color::isWideGamut(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isWideGamut",
			"(J)Z",
			arg0
		);
	}
	inline jfloat Color::luminance(jint arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(I)F",
			arg0
		);
	}
	inline jfloat Color::luminance(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(J)F",
			arg0
		);
	}
	inline jlong Color::pack(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(I)J",
			arg0
		);
	}
	inline jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFF)J",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFFF)J",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFFFLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline jint Color::parseColor(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"parseColor",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jfloat Color::red(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"red",
			"(J)F",
			arg0
		);
	}
	inline jint Color::red(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"red",
			"(I)I",
			arg0
		);
	}
	inline jint Color::rgb(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"rgb",
			"(FFF)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Color::rgb(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"rgb",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint Color::toArgb(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"toArgb",
			"(J)I",
			arg0
		);
	}
	inline android::graphics::Color Color::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(I)Landroid/graphics/Color;",
			arg0
		);
	}
	inline android::graphics::Color Color::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(J)Landroid/graphics/Color;",
			arg0
		);
	}
	inline android::graphics::Color Color::valueOf(JFloatArray arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"([FLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0.object<jfloatArray>(),
			arg1.object()
		);
	}
	inline android::graphics::Color Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFF)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::graphics::Color Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFFF)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline android::graphics::Color Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFFFLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline jfloat Color::alpha() const
	{
		return callMethod<jfloat>(
			"alpha",
			"()F"
		);
	}
	inline jfloat Color::blue() const
	{
		return callMethod<jfloat>(
			"blue",
			"()F"
		);
	}
	inline android::graphics::Color Color::convert(android::graphics::ColorSpace arg0) const
	{
		return callObjectMethod(
			"convert",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0.object()
		);
	}
	inline jboolean Color::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::ColorSpace Color::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline jfloat Color::getComponent(jint arg0) const
	{
		return callMethod<jfloat>(
			"getComponent",
			"(I)F",
			arg0
		);
	}
	inline jint Color::getComponentCount() const
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	inline JFloatArray Color::getComponents() const
	{
		return callObjectMethod(
			"getComponents",
			"()[F"
		);
	}
	inline JFloatArray Color::getComponents(JFloatArray arg0) const
	{
		return callObjectMethod(
			"getComponents",
			"([F)[F",
			arg0.object<jfloatArray>()
		);
	}
	inline android::graphics::ColorSpace_Model Color::getModel() const
	{
		return callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
	inline jfloat Color::green() const
	{
		return callMethod<jfloat>(
			"green",
			"()F"
		);
	}
	inline jint Color::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Color::isSrgb() const
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	inline jboolean Color::isWideGamut() const
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	inline jfloat Color::luminance() const
	{
		return callMethod<jfloat>(
			"luminance",
			"()F"
		);
	}
	inline jlong Color::pack() const
	{
		return callMethod<jlong>(
			"pack",
			"()J"
		);
	}
	inline jfloat Color::red() const
	{
		return callMethod<jfloat>(
			"red",
			"()F"
		);
	}
	inline jint Color::toArgb() const
	{
		return callMethod<jint>(
			"toArgb",
			"()I"
		);
	}
	inline JString Color::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics

// Base class headers

