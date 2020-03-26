#pragma once

#ifndef ANDROID_GRAPHICS_BLENDMODE
#define ANDROID_GRAPHICS_BLENDMODE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class BlendMode : public __jni_impl::java::lang::Enum
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
		static QAndroidJniObject PLUS();
		static QAndroidJniObject MODULATE();
		static QAndroidJniObject SCREEN();
		static QAndroidJniObject OVERLAY();
		static QAndroidJniObject DARKEN();
		static QAndroidJniObject LIGHTEN();
		static QAndroidJniObject COLOR_DODGE();
		static QAndroidJniObject COLOR_BURN();
		static QAndroidJniObject HARD_LIGHT();
		static QAndroidJniObject SOFT_LIGHT();
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject EXCLUSION();
		static QAndroidJniObject MULTIPLY();
		static QAndroidJniObject HUE();
		static QAndroidJniObject SATURATION();
		static QAndroidJniObject COLOR();
		static QAndroidJniObject LUMINOSITY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject BlendMode::CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"CLEAR",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OVER",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_IN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_OUT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SRC_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SRC_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DST_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DST_ATOP",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"XOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::PLUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"PLUS",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::MODULATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"MODULATE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SCREEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::OVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"OVERLAY",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DARKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DARKEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::LIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"LIGHTEN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::COLOR_DODGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_DODGE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::COLOR_BURN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR_BURN",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::HARD_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"HARD_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SOFT_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SOFT_LIGHT",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"DIFFERENCE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::EXCLUSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"EXCLUSION",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::MULTIPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"MULTIPLY",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::HUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"HUE",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::SATURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"SATURATION",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"COLOR",
			"Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject BlendMode::LUMINOSITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlendMode",
			"LUMINOSITY",
			"Landroid/graphics/BlendMode;"
		);
	}
	
	// Constructors
	void BlendMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BlendMode",
			"(V)V");
	}
	
	// Methods
	jarray BlendMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlendMode",
			"values",
			"()[Landroid/graphics/BlendMode;"
		).object<jarray>();
	}
	QAndroidJniObject BlendMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlendMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlendMode;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BlendMode : public __jni_impl::android::graphics::BlendMode
	{
	public:
		BlendMode(QAndroidJniObject obj) { __thiz = obj; }
		BlendMode()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BLENDMODE

