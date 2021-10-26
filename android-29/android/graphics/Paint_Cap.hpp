#pragma once

#ifndef ANDROID_GRAPHICS_PAINT_CAP
#define ANDROID_GRAPHICS_PAINT_CAP

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_Cap : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BUTT();
		static QAndroidJniObject ROUND();
		static QAndroidJniObject SQUARE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Paint_Cap::BUTT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Cap",
			"BUTT",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	QAndroidJniObject Paint_Cap::ROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Cap",
			"ROUND",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	QAndroidJniObject Paint_Cap::SQUARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Cap",
			"SQUARE",
			"Landroid/graphics/Paint$Cap;"
		);
	}
	
	// Constructors
	void Paint_Cap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$Cap",
			"(V)V");
	}
	
	// Methods
	jarray Paint_Cap::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"values",
			"()[Landroid/graphics/Paint$Cap;"
		).object<jarray>();
	}
	QAndroidJniObject Paint_Cap::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Cap;",
			arg0
		);
	}
	QAndroidJniObject Paint_Cap::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Cap",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Cap;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_Cap : public __jni_impl::android::graphics::Paint_Cap
	{
	public:
		Paint_Cap(QAndroidJniObject obj) { __thiz = obj; }
		Paint_Cap()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PAINT_CAP

