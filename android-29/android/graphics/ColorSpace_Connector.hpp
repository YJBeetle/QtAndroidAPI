#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_CONNECTOR
#define ANDROID_GRAPHICS_COLORSPACE_CONNECTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class ColorSpace;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace_RenderIntent;
}

namespace __jni_impl::android::graphics
{
	class ColorSpace_Connector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDestination();
		QAndroidJniObject getRenderIntent();
		QAndroidJniObject getSource();
		jfloatArray transform(jfloatArray arg0);
		jfloatArray transform(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace __jni_impl::android::graphics

#include "ColorSpace.hpp"
#include "ColorSpace_RenderIntent.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ColorSpace_Connector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Connector",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ColorSpace_Connector::getDestination()
	{
		return __thiz.callObjectMethod(
			"getDestination",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	QAndroidJniObject ColorSpace_Connector::getRenderIntent()
	{
		return __thiz.callObjectMethod(
			"getRenderIntent",
			"()Landroid/graphics/ColorSpace$RenderIntent;"
		);
	}
	QAndroidJniObject ColorSpace_Connector::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jfloatArray ColorSpace_Connector::transform(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"transform",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray ColorSpace_Connector::transform(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"transform",
			"(FFF)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_Connector : public __jni_impl::android::graphics::ColorSpace_Connector
	{
	public:
		ColorSpace_Connector(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_Connector()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_CONNECTOR

