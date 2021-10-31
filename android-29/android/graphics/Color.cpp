#include "./ColorSpace.hpp"
#include "./ColorSpace_Connector.hpp"
#include "./ColorSpace_Model.hpp"
#include "./Color.hpp"

namespace android::graphics
{
	// Fields
	jint Color::BLACK()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"BLACK"
		);
	}
	jint Color::BLUE()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"BLUE"
		);
	}
	jint Color::CYAN()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"CYAN"
		);
	}
	jint Color::DKGRAY()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"DKGRAY"
		);
	}
	jint Color::GRAY()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"GRAY"
		);
	}
	jint Color::GREEN()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"GREEN"
		);
	}
	jint Color::LTGRAY()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"LTGRAY"
		);
	}
	jint Color::MAGENTA()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"MAGENTA"
		);
	}
	jint Color::RED()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"RED"
		);
	}
	jint Color::TRANSPARENT()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"TRANSPARENT"
		);
	}
	jint Color::WHITE()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"WHITE"
		);
	}
	jint Color::YELLOW()
	{
		return getStaticField<jint>(
			"android.graphics.Color",
			"YELLOW"
		);
	}
	
	// QAndroidJniObject forward
	Color::Color(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Color::Color()
		: __JniBaseClass(
			"android.graphics.Color",
			"()V"
		) {}
	
	// Methods
	jint Color::HSVToColor(jfloatArray arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"([F)I",
			arg0
		);
	}
	jint Color::HSVToColor(jint arg0, jfloatArray arg1)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"(I[F)I",
			arg0,
			arg1
		);
	}
	void Color::RGBToHSV(jint arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		callStaticMethod<void>(
			"android.graphics.Color",
			"RGBToHSV",
			"(III[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat Color::alpha(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"alpha",
			"(J)F",
			arg0
		);
	}
	jint Color::alpha(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"alpha",
			"(I)I",
			arg0
		);
	}
	jint Color::argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	jint Color::argb(jint arg0, jint arg1, jint arg2, jint arg3)
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
	jfloat Color::blue(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"blue",
			"(J)F",
			arg0
		);
	}
	jint Color::blue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"blue",
			"(I)I",
			arg0
		);
	}
	android::graphics::ColorSpace Color::colorSpace(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"colorSpace",
			"(J)Landroid/graphics/ColorSpace;",
			arg0
		);
	}
	void Color::colorToHSV(jint arg0, jfloatArray arg1)
	{
		callStaticMethod<void>(
			"android.graphics.Color",
			"colorToHSV",
			"(I[F)V",
			arg0,
			arg1
		);
	}
	jlong Color::convert(jint arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(ILandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.object()
		);
	}
	jlong Color::convert(jlong arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.object()
		);
	}
	jlong Color::convert(jlong arg0, android::graphics::ColorSpace_Connector arg1)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1.object()
		);
	}
	jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace_Connector arg4)
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
	jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4, android::graphics::ColorSpace arg5)
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
	jfloat Color::green(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"green",
			"(J)F",
			arg0
		);
	}
	jint Color::green(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"green",
			"(I)I",
			arg0
		);
	}
	jboolean Color::isInColorSpace(jlong arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isInColorSpace",
			"(JLandroid/graphics/ColorSpace;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Color::isSrgb(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isSrgb",
			"(J)Z",
			arg0
		);
	}
	jboolean Color::isWideGamut(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isWideGamut",
			"(J)Z",
			arg0
		);
	}
	jfloat Color::luminance(jint arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(I)F",
			arg0
		);
	}
	jfloat Color::luminance(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(J)F",
			arg0
		);
	}
	jlong Color::pack(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(I)J",
			arg0
		);
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2)
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
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4)
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
	jint Color::parseColor(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"parseColor",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jfloat Color::red(jlong arg0)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.Color",
			"red",
			"(J)F",
			arg0
		);
	}
	jint Color::red(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"red",
			"(I)I",
			arg0
		);
	}
	jint Color::rgb(jfloat arg0, jfloat arg1, jfloat arg2)
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
	jint Color::rgb(jint arg0, jint arg1, jint arg2)
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
	jint Color::toArgb(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.graphics.Color",
			"toArgb",
			"(J)I",
			arg0
		);
	}
	android::graphics::Color Color::valueOf(jint arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(I)Landroid/graphics/Color;",
			arg0
		);
	}
	android::graphics::Color Color::valueOf(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(J)Landroid/graphics/Color;",
			arg0
		);
	}
	android::graphics::Color Color::valueOf(jfloatArray arg0, android::graphics::ColorSpace arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"([FLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0,
			arg1.object()
		);
	}
	android::graphics::Color Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2)
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
	android::graphics::Color Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	android::graphics::Color Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4)
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
	jfloat Color::alpha()
	{
		return callMethod<jfloat>(
			"alpha",
			"()F"
		);
	}
	jfloat Color::blue()
	{
		return callMethod<jfloat>(
			"blue",
			"()F"
		);
	}
	android::graphics::Color Color::convert(android::graphics::ColorSpace arg0)
	{
		return callObjectMethod(
			"convert",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0.object()
		);
	}
	jboolean Color::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::graphics::ColorSpace Color::getColorSpace()
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jfloat Color::getComponent(jint arg0)
	{
		return callMethod<jfloat>(
			"getComponent",
			"(I)F",
			arg0
		);
	}
	jint Color::getComponentCount()
	{
		return callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	jfloatArray Color::getComponents()
	{
		return callObjectMethod(
			"getComponents",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray Color::getComponents(jfloatArray arg0)
	{
		return callObjectMethod(
			"getComponents",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	android::graphics::ColorSpace_Model Color::getModel()
	{
		return callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
	jfloat Color::green()
	{
		return callMethod<jfloat>(
			"green",
			"()F"
		);
	}
	jint Color::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Color::isSrgb()
	{
		return callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jboolean Color::isWideGamut()
	{
		return callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	jfloat Color::luminance()
	{
		return callMethod<jfloat>(
			"luminance",
			"()F"
		);
	}
	jlong Color::pack()
	{
		return callMethod<jlong>(
			"pack",
			"()J"
		);
	}
	jfloat Color::red()
	{
		return callMethod<jfloat>(
			"red",
			"()F"
		);
	}
	jint Color::toArgb()
	{
		return callMethod<jint>(
			"toArgb",
			"()I"
		);
	}
	jstring Color::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics

