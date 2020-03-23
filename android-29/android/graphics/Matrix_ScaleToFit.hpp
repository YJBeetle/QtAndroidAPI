#pragma once

#ifndef ANDROID_GRAPHICS_MATRIX_SCALETOFIT
#define ANDROID_GRAPHICS_MATRIX_SCALETOFIT

#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Matrix_ScaleToFit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FILL();
		static QAndroidJniObject START();
		static QAndroidJniObject CENTER();
		static QAndroidJniObject END();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Matrix_ScaleToFit::FILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"FILL",
			"Landroid/graphics/Matrix$ScaleToFit;");
	}
	QAndroidJniObject Matrix_ScaleToFit::START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"START",
			"Landroid/graphics/Matrix$ScaleToFit;");
	}
	QAndroidJniObject Matrix_ScaleToFit::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"CENTER",
			"Landroid/graphics/Matrix$ScaleToFit;");
	}
	QAndroidJniObject Matrix_ScaleToFit::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"END",
			"Landroid/graphics/Matrix$ScaleToFit;");
	}
	
	// Constructors
	void Matrix_ScaleToFit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Matrix$ScaleToFit",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Matrix_ScaleToFit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"values",
			"()[Landroid/graphics/Matrix$ScaleToFit;");
	}
	QAndroidJniObject Matrix_ScaleToFit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Matrix_ScaleToFit : public __jni_impl::android::graphics::Matrix_ScaleToFit
	{
	public:
		Matrix_ScaleToFit(QAndroidJniObject obj) { __thiz = obj; }
		Matrix_ScaleToFit()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_MATRIX_SCALETOFIT

