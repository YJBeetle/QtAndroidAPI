#pragma once

#ifndef ANDROID_RENDERSCRIPT_TYPE_CUBEMAPFACE
#define ANDROID_RENDERSCRIPT_TYPE_CUBEMAPFACE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class Type_CubemapFace : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject POSITIVE_X();
		static QAndroidJniObject NEGATIVE_X();
		static QAndroidJniObject POSITIVE_Y();
		static QAndroidJniObject NEGATIVE_Y();
		static QAndroidJniObject POSITIVE_Z();
		static QAndroidJniObject NEGATIVE_Z();
		static QAndroidJniObject POSITVE_X();
		static QAndroidJniObject POSITVE_Y();
		static QAndroidJniObject POSITVE_Z();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	QAndroidJniObject Type_CubemapFace::POSITIVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::NEGATIVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITIVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::NEGATIVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITIVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::NEGATIVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"NEGATIVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITVE_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_X",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITVE_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Y",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	QAndroidJniObject Type_CubemapFace::POSITVE_Z()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Type$CubemapFace",
			"POSITVE_Z",
			"Landroid/renderscript/Type$CubemapFace;"
		);
	}
	
	// Constructors
	void Type_CubemapFace::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Type$CubemapFace",
			"(V)V");
	}
	
	// Methods
	jarray Type_CubemapFace::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"values",
			"()[Landroid/renderscript/Type$CubemapFace;"
		).object<jarray>();
	}
	QAndroidJniObject Type_CubemapFace::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;",
			arg0
		);
	}
	QAndroidJniObject Type_CubemapFace::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type$CubemapFace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Type$CubemapFace;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Type_CubemapFace : public __jni_impl::android::renderscript::Type_CubemapFace
	{
	public:
		Type_CubemapFace(QAndroidJniObject obj) { __thiz = obj; }
		Type_CubemapFace()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_TYPE_CUBEMAPFACE

