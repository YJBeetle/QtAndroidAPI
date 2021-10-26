#pragma once

#ifndef ANDROID_GRAPHICS_PAINT_JOIN
#define ANDROID_GRAPHICS_PAINT_JOIN

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_Join : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MITER();
		static QAndroidJniObject ROUND();
		static QAndroidJniObject BEVEL();
		
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
	QAndroidJniObject Paint_Join::MITER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"MITER",
			"Landroid/graphics/Paint$Join;"
		);
	}
	QAndroidJniObject Paint_Join::ROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"ROUND",
			"Landroid/graphics/Paint$Join;"
		);
	}
	QAndroidJniObject Paint_Join::BEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Join",
			"BEVEL",
			"Landroid/graphics/Paint$Join;"
		);
	}
	
	// Constructors
	void Paint_Join::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$Join",
			"(V)V");
	}
	
	// Methods
	jarray Paint_Join::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"values",
			"()[Landroid/graphics/Paint$Join;"
		).object<jarray>();
	}
	QAndroidJniObject Paint_Join::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Join;",
			arg0
		);
	}
	QAndroidJniObject Paint_Join::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Join",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Join;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_Join : public __jni_impl::android::graphics::Paint_Join
	{
	public:
		Paint_Join(QAndroidJniObject obj) { __thiz = obj; }
		Paint_Join()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PAINT_JOIN

