#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class Element_DataKind : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PIXEL_A();
		static QAndroidJniObject PIXEL_DEPTH();
		static QAndroidJniObject PIXEL_L();
		static QAndroidJniObject PIXEL_LA();
		static QAndroidJniObject PIXEL_RGB();
		static QAndroidJniObject PIXEL_RGBA();
		static QAndroidJniObject PIXEL_YUV();
		static QAndroidJniObject USER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	QAndroidJniObject Element_DataKind::PIXEL_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_A",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::PIXEL_DEPTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_DEPTH",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::PIXEL_L()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_L",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::PIXEL_LA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_LA",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::PIXEL_RGB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_RGB",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::PIXEL_RGBA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_RGBA",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::PIXEL_YUV()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"PIXEL_YUV",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element_DataKind::USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataKind",
			"USER",
			"Landroid/renderscript/Element$DataKind;"
		);
	}
	
	// Constructors
	void Element_DataKind::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Element$DataKind",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Element_DataKind::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element$DataKind",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Element$DataKind;",
			arg0
		);
	}
	QAndroidJniObject Element_DataKind::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element$DataKind",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Element$DataKind;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Element_DataKind::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element$DataKind",
			"values",
			"()[Landroid/renderscript/Element$DataKind;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Element_DataKind : public __jni_impl::android::renderscript::Element_DataKind
	{
	public:
		Element_DataKind(QAndroidJniObject obj) { __thiz = obj; }
		Element_DataKind()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

