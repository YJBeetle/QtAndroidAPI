#pragma once

#ifndef ANDROID_GRAPHICS_PATH_DIRECTION
#define ANDROID_GRAPHICS_PATH_DIRECTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Path_Direction : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CCW();
		static QAndroidJniObject CW();
		
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
	QAndroidJniObject Path_Direction::CCW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Direction",
			"CCW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	QAndroidJniObject Path_Direction::CW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$Direction",
			"CW",
			"Landroid/graphics/Path$Direction;"
		);
	}
	
	// Constructors
	void Path_Direction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path$Direction",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Path_Direction::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Direction;",
			arg0
		);
	}
	QAndroidJniObject Path_Direction::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$Direction;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Path_Direction::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$Direction",
			"values",
			"()[Landroid/graphics/Path$Direction;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Path_Direction : public __jni_impl::android::graphics::Path_Direction
	{
	public:
		Path_Direction(QAndroidJniObject obj) { __thiz = obj; }
		Path_Direction()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATH_DIRECTION

