#pragma once

#ifndef ANDROID_GRAPHICS_CANVAS_VERTEXMODE
#define ANDROID_GRAPHICS_CANVAS_VERTEXMODE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Canvas_VertexMode : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject TRIANGLES();
		static QAndroidJniObject TRIANGLE_FAN();
		static QAndroidJniObject TRIANGLE_STRIP();
		
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
	QAndroidJniObject Canvas_VertexMode::TRIANGLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLES",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	QAndroidJniObject Canvas_VertexMode::TRIANGLE_FAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_FAN",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	QAndroidJniObject Canvas_VertexMode::TRIANGLE_STRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$VertexMode",
			"TRIANGLE_STRIP",
			"Landroid/graphics/Canvas$VertexMode;"
		);
	}
	
	// Constructors
	void Canvas_VertexMode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Canvas$VertexMode",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Canvas_VertexMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;",
			arg0
		);
	}
	QAndroidJniObject Canvas_VertexMode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$VertexMode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Canvas_VertexMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$VertexMode",
			"values",
			"()[Landroid/graphics/Canvas$VertexMode;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Canvas_VertexMode : public __jni_impl::android::graphics::Canvas_VertexMode
	{
	public:
		Canvas_VertexMode(QAndroidJniObject obj) { __thiz = obj; }
		Canvas_VertexMode()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_CANVAS_VERTEXMODE

