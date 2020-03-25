#pragma once

#ifndef ANDROID_GRAPHICS_COLOR
#define ANDROID_GRAPHICS_COLOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class ColorSpace;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_Connector;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_Model;
}

namespace __jni_impl::android::graphics
{
	class Color : public __JniBaseClass
	{
	public:
		// Fields
		static jint BLACK();
		static jint BLUE();
		static jint CYAN();
		static jint DKGRAY();
		static jint GRAY();
		static jint GREEN();
		static jint LTGRAY();
		static jint MAGENTA();
		static jint RED();
		static jint TRANSPARENT();
		static jint WHITE();
		static jint YELLOW();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject valueOf(jint arg0);
		static QAndroidJniObject valueOf(jlong arg0);
		static QAndroidJniObject valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace arg4);
		static QAndroidJniObject valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static QAndroidJniObject valueOf(jfloat arg0, jfloat arg1, jfloat arg2);
		static QAndroidJniObject valueOf(jfloatArray arg0, __jni_impl::android::graphics::ColorSpace arg1);
		static jint red(jint arg0);
		static jfloat red(jlong arg0);
		jfloat red();
		QAndroidJniObject convert(__jni_impl::android::graphics::ColorSpace arg0);
		static jlong convert(jint arg0, __jni_impl::android::graphics::ColorSpace arg1);
		static jlong convert(jlong arg0, __jni_impl::android::graphics::ColorSpace_Connector arg1);
		static jlong convert(jlong arg0, __jni_impl::android::graphics::ColorSpace arg1);
		static jlong convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace arg4, __jni_impl::android::graphics::ColorSpace arg5);
		static jlong convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace_Connector arg4);
		static jlong pack(jfloat arg0, jfloat arg1, jfloat arg2);
		static jlong pack(jint arg0);
		jlong pack();
		static jlong pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace arg4);
		static jlong pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static QAndroidJniObject colorSpace(jlong arg0);
		QAndroidJniObject getColorSpace();
		jfloat getComponent(jint arg0);
		static jint argb(jint arg0, jint arg1, jint arg2, jint arg3);
		static jint argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		static jint green(jint arg0);
		jfloat green();
		static jfloat green(jlong arg0);
		jfloat alpha();
		static jint alpha(jint arg0);
		static jfloat alpha(jlong arg0);
		static jfloat blue(jlong arg0);
		static jint blue(jint arg0);
		jfloat blue();
		QAndroidJniObject getModel();
		jboolean isWideGamut();
		static jboolean isWideGamut(jlong arg0);
		jboolean isSrgb();
		static jboolean isSrgb(jlong arg0);
		jint getComponentCount();
		static jint toArgb(jlong arg0);
		jint toArgb();
		QAndroidJniObject getComponents();
		QAndroidJniObject getComponents(jfloatArray arg0);
		static jfloat luminance(jint arg0);
		static jfloat luminance(jlong arg0);
		jfloat luminance();
		static jboolean isInColorSpace(jlong arg0, __jni_impl::android::graphics::ColorSpace arg1);
		static jint rgb(jfloat arg0, jfloat arg1, jfloat arg2);
		static jint rgb(jint arg0, jint arg1, jint arg2);
		static jint parseColor(jstring arg0);
		static void RGBToHSV(jint arg0, jint arg1, jint arg2, jfloatArray arg3);
		static void colorToHSV(jint arg0, jfloatArray arg1);
		static jint HSVToColor(jfloatArray arg0);
		static jint HSVToColor(jint arg0, jfloatArray arg1);
	};
} // namespace __jni_impl::android::graphics

#include "ColorSpace.hpp"
#include "ColorSpace_Connector.hpp"
#include "ColorSpace_Model.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint Color::BLACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"BLACK");
	}
	jint Color::BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"BLUE");
	}
	jint Color::CYAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"CYAN");
	}
	jint Color::DKGRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"DKGRAY");
	}
	jint Color::GRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"GRAY");
	}
	jint Color::GREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"GREEN");
	}
	jint Color::LTGRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"LTGRAY");
	}
	jint Color::MAGENTA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"MAGENTA");
	}
	jint Color::RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"RED");
	}
	jint Color::TRANSPARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"TRANSPARENT");
	}
	jint Color::WHITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"WHITE");
	}
	jint Color::YELLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"YELLOW");
	}
	
	// Constructors
	void Color::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Color",
			"()V");
	}
	
	// Methods
	jboolean Color::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Color::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Color::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Color::valueOf(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(I)Landroid/graphics/Color;",
			arg0);
	}
	QAndroidJniObject Color::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(J)Landroid/graphics/Color;",
			arg0);
	}
	QAndroidJniObject Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFFFLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFFF)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFF)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Color::valueOf(jfloatArray arg0, __jni_impl::android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"([FLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0,
			arg1.__jniObject().object());
	}
	jint Color::red(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"red",
			"(I)I",
			arg0);
	}
	jfloat Color::red(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"red",
			"(J)F",
			arg0);
	}
	jfloat Color::red()
	{
		return __thiz.callMethod<jfloat>(
			"red",
			"()F");
	}
	QAndroidJniObject Color::convert(__jni_impl::android::graphics::ColorSpace arg0)
	{
		return __thiz.callObjectMethod(
			"convert",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0.__jniObject().object());
	}
	jlong Color::convert(jint arg0, __jni_impl::android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(ILandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong Color::convert(jlong arg0, __jni_impl::android::graphics::ColorSpace_Connector arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong Color::convert(jlong arg0, __jni_impl::android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace arg4, __jni_impl::android::graphics::ColorSpace arg5)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(FFFFLandroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace_Connector arg4)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(FFFFLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFF)J",
			arg0,
			arg1,
			arg2);
	}
	jlong Color::pack(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(I)J",
			arg0);
	}
	jlong Color::pack()
	{
		return __thiz.callMethod<jlong>(
			"pack",
			"()J");
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::ColorSpace arg4)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFFFLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFFF)J",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject Color::colorSpace(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"colorSpace",
			"(J)Landroid/graphics/ColorSpace;",
			arg0);
	}
	QAndroidJniObject Color::getColorSpace()
	{
		return __thiz.callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;");
	}
	jfloat Color::getComponent(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getComponent",
			"(I)F",
			arg0);
	}
	jint Color::argb(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"argb",
			"(IIII)I",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint Color::argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"argb",
			"(FFFF)I",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	jint Color::green(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"green",
			"(I)I",
			arg0);
	}
	jfloat Color::green()
	{
		return __thiz.callMethod<jfloat>(
			"green",
			"()F");
	}
	jfloat Color::green(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"green",
			"(J)F",
			arg0);
	}
	jfloat Color::alpha()
	{
		return __thiz.callMethod<jfloat>(
			"alpha",
			"()F");
	}
	jint Color::alpha(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"alpha",
			"(I)I",
			arg0);
	}
	jfloat Color::alpha(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"alpha",
			"(J)F",
			arg0);
	}
	jfloat Color::blue(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"blue",
			"(J)F",
			arg0);
	}
	jint Color::blue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"blue",
			"(I)I",
			arg0);
	}
	jfloat Color::blue()
	{
		return __thiz.callMethod<jfloat>(
			"blue",
			"()F");
	}
	QAndroidJniObject Color::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;");
	}
	jboolean Color::isWideGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideGamut",
			"()Z");
	}
	jboolean Color::isWideGamut(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isWideGamut",
			"(J)Z",
			arg0);
	}
	jboolean Color::isSrgb()
	{
		return __thiz.callMethod<jboolean>(
			"isSrgb",
			"()Z");
	}
	jboolean Color::isSrgb(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isSrgb",
			"(J)Z",
			arg0);
	}
	jint Color::getComponentCount()
	{
		return __thiz.callMethod<jint>(
			"getComponentCount",
			"()I");
	}
	jint Color::toArgb(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"toArgb",
			"(J)I",
			arg0);
	}
	jint Color::toArgb()
	{
		return __thiz.callMethod<jint>(
			"toArgb",
			"()I");
	}
	QAndroidJniObject Color::getComponents()
	{
		return __thiz.callObjectMethod(
			"getComponents",
			"()[F");
	}
	QAndroidJniObject Color::getComponents(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getComponents",
			"([F)[F",
			arg0);
	}
	jfloat Color::luminance(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(I)F",
			arg0);
	}
	jfloat Color::luminance(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(J)F",
			arg0);
	}
	jfloat Color::luminance()
	{
		return __thiz.callMethod<jfloat>(
			"luminance",
			"()F");
	}
	jboolean Color::isInColorSpace(jlong arg0, __jni_impl::android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isInColorSpace",
			"(JLandroid/graphics/ColorSpace;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jint Color::rgb(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"rgb",
			"(FFF)I",
			arg0,
			arg1,
			arg2);
	}
	jint Color::rgb(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"rgb",
			"(III)I",
			arg0,
			arg1,
			arg2);
	}
	jint Color::parseColor(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"parseColor",
			"(Ljava/lang/String;)I",
			arg0);
	}
	void Color::RGBToHSV(jint arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.graphics.Color",
			"RGBToHSV",
			"(III[F)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Color::colorToHSV(jint arg0, jfloatArray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.graphics.Color",
			"colorToHSV",
			"(I[F)V",
			arg0,
			arg1);
	}
	jint Color::HSVToColor(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"([F)I",
			arg0);
	}
	jint Color::HSVToColor(jint arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"(I[F)I",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Color : public __jni_impl::android::graphics::Color
	{
	public:
		Color(QAndroidJniObject obj) { __thiz = obj; }
		Color()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLOR

