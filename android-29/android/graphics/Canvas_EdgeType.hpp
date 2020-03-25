#pragma once

#ifndef ANDROID_GRAPHICS_CANVAS_EDGETYPE
#define ANDROID_GRAPHICS_CANVAS_EDGETYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Canvas_EdgeType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BW();
		static QAndroidJniObject AA();
		
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
	QAndroidJniObject Canvas_EdgeType::BW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"BW",
			"Landroid/graphics/Canvas$EdgeType;");
	}
	QAndroidJniObject Canvas_EdgeType::AA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"AA",
			"Landroid/graphics/Canvas$EdgeType;");
	}
	
	// Constructors
	void Canvas_EdgeType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Canvas$EdgeType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Canvas_EdgeType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"values",
			"()[Landroid/graphics/Canvas$EdgeType;");
	}
	QAndroidJniObject Canvas_EdgeType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Canvas_EdgeType : public __jni_impl::android::graphics::Canvas_EdgeType
	{
	public:
		Canvas_EdgeType(QAndroidJniObject obj) { __thiz = obj; }
		Canvas_EdgeType()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_CANVAS_EDGETYPE

