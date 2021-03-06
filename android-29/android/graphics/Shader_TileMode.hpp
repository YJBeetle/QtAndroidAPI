#pragma once

#ifndef ANDROID_GRAPHICS_SHADER_TILEMODE
#define ANDROID_GRAPHICS_SHADER_TILEMODE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Shader_TileMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLAMP();
		static QAndroidJniObject REPEAT();
		static QAndroidJniObject MIRROR();
		
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
	QAndroidJniObject Shader_TileMode::CLAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"CLAMP",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	QAndroidJniObject Shader_TileMode::REPEAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"REPEAT",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	QAndroidJniObject Shader_TileMode::MIRROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Shader$TileMode",
			"MIRROR",
			"Landroid/graphics/Shader$TileMode;"
		);
	}
	
	// Constructors
	void Shader_TileMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Shader$TileMode",
			"(V)V");
	}
	
	// Methods
	jarray Shader_TileMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"values",
			"()[Landroid/graphics/Shader$TileMode;"
		).object<jarray>();
	}
	QAndroidJniObject Shader_TileMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Shader$TileMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Shader_TileMode : public __jni_impl::android::graphics::Shader_TileMode
	{
	public:
		Shader_TileMode(QAndroidJniObject obj) { __thiz = obj; }
		Shader_TileMode()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_SHADER_TILEMODE

