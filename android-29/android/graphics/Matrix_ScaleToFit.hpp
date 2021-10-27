#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Matrix_ScaleToFit : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTER();
		static QAndroidJniObject END();
		static QAndroidJniObject FILL();
		static QAndroidJniObject START();
		
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
	QAndroidJniObject Matrix_ScaleToFit::CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"CENTER",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"END",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::FILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"FILL",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"START",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	
	// Constructors
	void Matrix_ScaleToFit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Matrix$ScaleToFit",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Matrix_ScaleToFit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			arg0
		);
	}
	QAndroidJniObject Matrix_ScaleToFit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Matrix_ScaleToFit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"values",
			"()[Landroid/graphics/Matrix$ScaleToFit;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Matrix_ScaleToFit : public __jni_impl::android::graphics::Matrix_ScaleToFit
	{
	public:
		Matrix_ScaleToFit(QAndroidJniObject obj) { __thiz = obj; }
		Matrix_ScaleToFit()
		{
			__constructor();
		}
	};
} // namespace android::graphics

