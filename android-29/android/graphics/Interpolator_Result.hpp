#pragma once

#ifndef ANDROID_GRAPHICS_INTERPOLATOR_RESULT
#define ANDROID_GRAPHICS_INTERPOLATOR_RESULT

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Interpolator_Result : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject FREEZE_START();
		static QAndroidJniObject FREEZE_END();
		
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
	QAndroidJniObject Interpolator_Result::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"NORMAL",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	QAndroidJniObject Interpolator_Result::FREEZE_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_START",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	QAndroidJniObject Interpolator_Result::FREEZE_END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_END",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	
	// Constructors
	void Interpolator_Result::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Interpolator$Result",
			"(V)V");
	}
	
	// Methods
	jarray Interpolator_Result::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"values",
			"()[Landroid/graphics/Interpolator$Result;"
		).object<jarray>();
	}
	QAndroidJniObject Interpolator_Result::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;",
			arg0
		);
	}
	QAndroidJniObject Interpolator_Result::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Interpolator_Result : public __jni_impl::android::graphics::Interpolator_Result
	{
	public:
		Interpolator_Result(QAndroidJniObject obj) { __thiz = obj; }
		Interpolator_Result()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_INTERPOLATOR_RESULT

