#pragma once

#ifndef ANDROID_GRAPHICS_BLURMASKFILTER_BLUR
#define ANDROID_GRAPHICS_BLURMASKFILTER_BLUR

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class BlurMaskFilter_Blur : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INNER();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject OUTER();
		static QAndroidJniObject SOLID();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject BlurMaskFilter_Blur::INNER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"INNER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"NORMAL",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::OUTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"OUTER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::SOLID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"SOLID",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	
	// Constructors
	void BlurMaskFilter_Blur::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BlurMaskFilter$Blur",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BlurMaskFilter_Blur::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			arg0
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray BlurMaskFilter_Blur::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"values",
			"()[Landroid/graphics/BlurMaskFilter$Blur;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BlurMaskFilter_Blur : public __jni_impl::android::graphics::BlurMaskFilter_Blur
	{
	public:
		BlurMaskFilter_Blur(QAndroidJniObject obj) { __thiz = obj; }
		BlurMaskFilter_Blur()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BLURMASKFILTER_BLUR

