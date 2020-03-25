#pragma once

#ifndef ANDROID_GRAPHICS_PAINT_ALIGN
#define ANDROID_GRAPHICS_PAINT_ALIGN

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_Align : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LEFT();
		static QAndroidJniObject CENTER();
		static QAndroidJniObject RIGHT();
		
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
	QAndroidJniObject Paint_Align::LEFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"LEFT",
			"Landroid/graphics/Paint$Align;");
	}
	QAndroidJniObject Paint_Align::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"CENTER",
			"Landroid/graphics/Paint$Align;");
	}
	QAndroidJniObject Paint_Align::RIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Align",
			"RIGHT",
			"Landroid/graphics/Paint$Align;");
	}
	
	// Constructors
	void Paint_Align::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$Align",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Paint_Align::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"values",
			"()[Landroid/graphics/Paint$Align;");
	}
	QAndroidJniObject Paint_Align::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Align",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Align;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_Align : public __jni_impl::android::graphics::Paint_Align
	{
	public:
		Paint_Align(QAndroidJniObject obj) { __thiz = obj; }
		Paint_Align()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PAINT_ALIGN

