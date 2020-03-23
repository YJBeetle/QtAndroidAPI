#pragma once

#ifndef ANDROID_GRAPHICS_PATH_OP
#define ANDROID_GRAPHICS_PATH_OP

#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Path_Op : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject INTERSECT();
		static QAndroidJniObject UNION();
		static QAndroidJniObject XOR();
		static QAndroidJniObject REVERSE_DIFFERENCE();
		
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
	QAndroidJniObject Path_Op::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"DIFFERENCE",
			"Landroid/graphics/Path$Op;");
	}
	QAndroidJniObject Path_Op::INTERSECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"INTERSECT",
			"Landroid/graphics/Path$Op;");
	}
	QAndroidJniObject Path_Op::UNION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"UNION",
			"Landroid/graphics/Path$Op;");
	}
	QAndroidJniObject Path_Op::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"XOR",
			"Landroid/graphics/Path$Op;");
	}
	QAndroidJniObject Path_Op::REVERSE_DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Path$Op;");
	}
	
	// Constructors
	void Path_Op::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path$Op",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Path_Op::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Op",
			"values",
			"()[Landroid/graphics/Path$Op;");
	}
	QAndroidJniObject Path_Op::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Op;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Path_Op : public __jni_impl::android::graphics::Path_Op
	{
	public:
		Path_Op(QAndroidJniObject obj) { __thiz = obj; }
		Path_Op()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATH_OP

