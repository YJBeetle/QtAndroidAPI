#pragma once

#ifndef ANDROID_GRAPHICS_PATHDASHPATHEFFECT_STYLE
#define ANDROID_GRAPHICS_PATHDASHPATHEFFECT_STYLE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class PathDashPathEffect_Style : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MORPH();
		static QAndroidJniObject ROTATE();
		static QAndroidJniObject TRANSLATE();
		
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
	QAndroidJniObject PathDashPathEffect_Style::MORPH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"MORPH",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	QAndroidJniObject PathDashPathEffect_Style::ROTATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"ROTATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	QAndroidJniObject PathDashPathEffect_Style::TRANSLATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PathDashPathEffect$Style",
			"TRANSLATE",
			"Landroid/graphics/PathDashPathEffect$Style;"
		);
	}
	
	// Constructors
	void PathDashPathEffect_Style::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PathDashPathEffect$Style",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PathDashPathEffect_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;",
			arg0
		);
	}
	QAndroidJniObject PathDashPathEffect_Style::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray PathDashPathEffect_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PathDashPathEffect$Style",
			"values",
			"()[Landroid/graphics/PathDashPathEffect$Style;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PathDashPathEffect_Style : public __jni_impl::android::graphics::PathDashPathEffect_Style
	{
	public:
		PathDashPathEffect_Style(QAndroidJniObject obj) { __thiz = obj; }
		PathDashPathEffect_Style()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATHDASHPATHEFFECT_STYLE

