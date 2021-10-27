#pragma once

#ifndef ANDROID_RENDERSCRIPT_SAMPLER_VALUE
#define ANDROID_RENDERSCRIPT_SAMPLER_VALUE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class Sampler_Value : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLAMP();
		static QAndroidJniObject LINEAR();
		static QAndroidJniObject LINEAR_MIP_LINEAR();
		static QAndroidJniObject LINEAR_MIP_NEAREST();
		static QAndroidJniObject MIRRORED_REPEAT();
		static QAndroidJniObject NEAREST();
		static QAndroidJniObject WRAP();
		
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
	QAndroidJniObject Sampler_Value::CLAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"CLAMP",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler_Value::LINEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"LINEAR",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler_Value::LINEAR_MIP_LINEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"LINEAR_MIP_LINEAR",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler_Value::LINEAR_MIP_NEAREST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"LINEAR_MIP_NEAREST",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler_Value::MIRRORED_REPEAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"MIRRORED_REPEAT",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler_Value::NEAREST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"NEAREST",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler_Value::WRAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Sampler$Value",
			"WRAP",
			"Landroid/renderscript/Sampler$Value;"
		);
	}
	
	// Constructors
	void Sampler_Value::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Sampler$Value",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Sampler_Value::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler$Value",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Sampler$Value;",
			arg0
		);
	}
	QAndroidJniObject Sampler_Value::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler$Value",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Sampler$Value;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Sampler_Value::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler$Value",
			"values",
			"()[Landroid/renderscript/Sampler$Value;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Sampler_Value : public __jni_impl::android::renderscript::Sampler_Value
	{
	public:
		Sampler_Value(QAndroidJniObject obj) { __thiz = obj; }
		Sampler_Value()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SAMPLER_VALUE

