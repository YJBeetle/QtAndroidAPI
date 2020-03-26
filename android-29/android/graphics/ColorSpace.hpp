#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE
#define ANDROID_GRAPHICS_COLORSPACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class ColorSpace_Model;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_Named;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_Rgb_TransferParameters;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_Connector;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_RenderIntent;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_Adaptation;
}

namespace __jni_impl::android::graphics
{
	class ColorSpace : public __JniBaseClass
	{
	public:
		// Fields
		static jfloatArray ILLUMINANT_A();
		static jfloatArray ILLUMINANT_B();
		static jfloatArray ILLUMINANT_C();
		static jfloatArray ILLUMINANT_D50();
		static jfloatArray ILLUMINANT_D55();
		static jfloatArray ILLUMINANT_D60();
		static jfloatArray ILLUMINANT_D65();
		static jfloatArray ILLUMINANT_D75();
		static jfloatArray ILLUMINANT_E();
		static jint MAX_ID();
		static jint MIN_ID();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		static QAndroidJniObject get(__jni_impl::android::graphics::ColorSpace_Named arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		static QAndroidJniObject match(jfloatArray arg0, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg1);
		static QAndroidJniObject connect(__jni_impl::android::graphics::ColorSpace arg0, __jni_impl::android::graphics::ColorSpace_RenderIntent arg1);
		static QAndroidJniObject connect(__jni_impl::android::graphics::ColorSpace arg0);
		static QAndroidJniObject connect(__jni_impl::android::graphics::ColorSpace arg0, __jni_impl::android::graphics::ColorSpace arg1, __jni_impl::android::graphics::ColorSpace_RenderIntent arg2);
		static QAndroidJniObject connect(__jni_impl::android::graphics::ColorSpace arg0, __jni_impl::android::graphics::ColorSpace arg1);
		jint getId();
		static QAndroidJniObject adapt(__jni_impl::android::graphics::ColorSpace arg0, jfloatArray arg1, __jni_impl::android::graphics::ColorSpace_Adaptation arg2);
		static QAndroidJniObject adapt(__jni_impl::android::graphics::ColorSpace arg0, jfloatArray arg1);
		jboolean isWideGamut();
		jboolean isSrgb();
		jint getComponentCount();
		jfloat getMinValue(jint arg0);
		jfloat getMaxValue(jint arg0);
		jfloatArray toXyz(jfloat arg0, jfloat arg1, jfloat arg2);
		jfloatArray toXyz(jfloatArray arg0);
		jfloatArray fromXyz(jfloatArray arg0);
		jfloatArray fromXyz(jfloat arg0, jfloat arg1, jfloat arg2);
		QAndroidJniObject getModel();
	};
} // namespace __jni_impl::android::graphics

#include "ColorSpace_Model.hpp"
#include "ColorSpace_Named.hpp"
#include "ColorSpace_Rgb_TransferParameters.hpp"
#include "ColorSpace_Connector.hpp"
#include "ColorSpace_RenderIntent.hpp"
#include "ColorSpace_Adaptation.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jfloatArray ColorSpace::ILLUMINANT_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_A",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_B",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_C",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D50()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D50",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D55()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D55",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D60()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D60",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D65()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D65",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_D75()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_D75",
			"[F"
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::ILLUMINANT_E()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.ColorSpace",
			"ILLUMINANT_E",
			"[F"
		).object<jfloatArray>();
	}
	jint ColorSpace::MAX_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ColorSpace",
			"MAX_ID"
		);
	}
	jint ColorSpace::MIN_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ColorSpace",
			"MIN_ID"
		);
	}
	
	// Constructors
	void ColorSpace::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace",
			"(V)V");
	}
	
	// Methods
	jstring ColorSpace::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ColorSpace::get(__jni_impl::android::graphics::ColorSpace_Named arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"get",
			"(Landroid/graphics/ColorSpace$Named;)Landroid/graphics/ColorSpace;",
			arg0.__jniObject().object()
		);
	}
	jboolean ColorSpace::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ColorSpace::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ColorSpace::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ColorSpace::match(jfloatArray arg0, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"match",
			"([FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)Landroid/graphics/ColorSpace;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ColorSpace::connect(__jni_impl::android::graphics::ColorSpace arg0, __jni_impl::android::graphics::ColorSpace_RenderIntent arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace$RenderIntent;)Landroid/graphics/ColorSpace$Connector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ColorSpace::connect(__jni_impl::android::graphics::ColorSpace arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/ColorSpace$Connector;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ColorSpace::connect(__jni_impl::android::graphics::ColorSpace arg0, __jni_impl::android::graphics::ColorSpace arg1, __jni_impl::android::graphics::ColorSpace_RenderIntent arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace$RenderIntent;)Landroid/graphics/ColorSpace$Connector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ColorSpace::connect(__jni_impl::android::graphics::ColorSpace arg0, __jni_impl::android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"connect",
			"(Landroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;)Landroid/graphics/ColorSpace$Connector;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint ColorSpace::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject ColorSpace::adapt(__jni_impl::android::graphics::ColorSpace arg0, jfloatArray arg1, __jni_impl::android::graphics::ColorSpace_Adaptation arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[FLandroid/graphics/ColorSpace$Adaptation;)Landroid/graphics/ColorSpace;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ColorSpace::adapt(__jni_impl::android::graphics::ColorSpace arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ColorSpace",
			"adapt",
			"(Landroid/graphics/ColorSpace;[F)Landroid/graphics/ColorSpace;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ColorSpace::isWideGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	jboolean ColorSpace::isSrgb()
	{
		return __thiz.callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jint ColorSpace::getComponentCount()
	{
		return __thiz.callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	jfloat ColorSpace::getMinValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0
		);
	}
	jfloat ColorSpace::getMaxValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0
		);
	}
	jfloatArray ColorSpace::toXyz(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"toXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::toXyz(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::fromXyz(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace::fromXyz(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"fromXyz",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	QAndroidJniObject ColorSpace::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace : public __jni_impl::android::graphics::ColorSpace
	{
	public:
		ColorSpace(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE

