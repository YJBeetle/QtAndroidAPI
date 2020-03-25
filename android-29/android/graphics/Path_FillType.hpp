#pragma once

#ifndef ANDROID_GRAPHICS_PATH_FILLTYPE
#define ANDROID_GRAPHICS_PATH_FILLTYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Path_FillType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject WINDING();
		static QAndroidJniObject EVEN_ODD();
		static QAndroidJniObject INVERSE_WINDING();
		static QAndroidJniObject INVERSE_EVEN_ODD();
		
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
	QAndroidJniObject Path_FillType::WINDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"WINDING",
			"Landroid/graphics/Path$FillType;");
	}
	QAndroidJniObject Path_FillType::EVEN_ODD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"EVEN_ODD",
			"Landroid/graphics/Path$FillType;");
	}
	QAndroidJniObject Path_FillType::INVERSE_WINDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_WINDING",
			"Landroid/graphics/Path$FillType;");
	}
	QAndroidJniObject Path_FillType::INVERSE_EVEN_ODD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_EVEN_ODD",
			"Landroid/graphics/Path$FillType;");
	}
	
	// Constructors
	void Path_FillType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path$FillType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Path_FillType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"values",
			"()[Landroid/graphics/Path$FillType;");
	}
	QAndroidJniObject Path_FillType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$FillType;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Path_FillType : public __jni_impl::android::graphics::Path_FillType
	{
	public:
		Path_FillType(QAndroidJniObject obj) { __thiz = obj; }
		Path_FillType()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATH_FILLTYPE

