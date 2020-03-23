#pragma once

#ifndef ANDROID_GRAPHICS_REGION_OP
#define ANDROID_GRAPHICS_REGION_OP

#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Region_Op : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject INTERSECT();
		static QAndroidJniObject UNION();
		static QAndroidJniObject XOR();
		static QAndroidJniObject REVERSE_DIFFERENCE();
		static QAndroidJniObject REPLACE();
		
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
	QAndroidJniObject Region_Op::DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"DIFFERENCE",
			"Landroid/graphics/Region$Op;");
	}
	QAndroidJniObject Region_Op::INTERSECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"INTERSECT",
			"Landroid/graphics/Region$Op;");
	}
	QAndroidJniObject Region_Op::UNION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"UNION",
			"Landroid/graphics/Region$Op;");
	}
	QAndroidJniObject Region_Op::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"XOR",
			"Landroid/graphics/Region$Op;");
	}
	QAndroidJniObject Region_Op::REVERSE_DIFFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"REVERSE_DIFFERENCE",
			"Landroid/graphics/Region$Op;");
	}
	QAndroidJniObject Region_Op::REPLACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Region$Op",
			"REPLACE",
			"Landroid/graphics/Region$Op;");
	}
	
	// Constructors
	void Region_Op::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Region$Op",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Region_Op::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Region$Op",
			"values",
			"()[Landroid/graphics/Region$Op;");
	}
	QAndroidJniObject Region_Op::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Region$Op",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Region$Op;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Region_Op : public __jni_impl::android::graphics::Region_Op
	{
	public:
		Region_Op(QAndroidJniObject obj) { __thiz = obj; }
		Region_Op()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_REGION_OP

