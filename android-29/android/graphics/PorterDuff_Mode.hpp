#pragma once

#ifndef ANDROID_GRAPHICS_PORTERDUFF_MODE
#define ANDROID_GRAPHICS_PORTERDUFF_MODE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLEAR();
		static QAndroidJniObject SRC();
		static QAndroidJniObject DST();
		static QAndroidJniObject SRC_OVER();
		static QAndroidJniObject DST_OVER();
		static QAndroidJniObject SRC_IN();
		static QAndroidJniObject DST_IN();
		static QAndroidJniObject SRC_OUT();
		static QAndroidJniObject DST_OUT();
		static QAndroidJniObject SRC_ATOP();
		static QAndroidJniObject DST_ATOP();
		static QAndroidJniObject XOR();
		static QAndroidJniObject DARKEN();
		static QAndroidJniObject LIGHTEN();
		static QAndroidJniObject MULTIPLY();
		static QAndroidJniObject SCREEN();
		static QAndroidJniObject ADD();
		static QAndroidJniObject OVERLAY();
		
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
	QAndroidJniObject PorterDuff_Mode::CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"CLEAR",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::SRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::DST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::SRC_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OVER",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::DST_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OVER",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::SRC_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_IN",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::DST_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_IN",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::SRC_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OUT",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::DST_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OUT",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::SRC_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_ATOP",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::DST_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_ATOP",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"XOR",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::DARKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DARKEN",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::LIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"LIGHTEN",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::MULTIPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"MULTIPLY",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SCREEN",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::ADD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"ADD",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::OVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"OVERLAY",
			"Landroid/graphics/PorterDuff$Mode;");
	}
	
	// Constructors
	void PorterDuff_Mode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuff$Mode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PorterDuff_Mode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"values",
			"()[Landroid/graphics/PorterDuff$Mode;");
	}
	QAndroidJniObject PorterDuff_Mode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PorterDuff$Mode;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PorterDuff_Mode : public __jni_impl::android::graphics::PorterDuff_Mode
	{
	public:
		PorterDuff_Mode(QAndroidJniObject obj) { __thiz = obj; }
		PorterDuff_Mode()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PORTERDUFF_MODE

