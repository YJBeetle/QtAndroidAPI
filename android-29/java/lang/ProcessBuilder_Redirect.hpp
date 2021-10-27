#pragma once

#ifndef JAVA_LANG_PROCESSBUILDER_REDIRECT
#define JAVA_LANG_PROCESSBUILDER_REDIRECT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::lang
{
	class ProcessBuilder_Redirect_Type;
}

namespace __jni_impl::java::lang
{
	class ProcessBuilder_Redirect : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DISCARD();
		static QAndroidJniObject INHERIT();
		static QAndroidJniObject PIPE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject appendTo(__jni_impl::java::io::File arg0);
		static QAndroidJniObject from(__jni_impl::java::io::File arg0);
		static QAndroidJniObject to(__jni_impl::java::io::File arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject file();
		jint hashCode();
		QAndroidJniObject type();
	};
} // namespace __jni_impl::java::lang

#include "../io/File.hpp"
#include "ProcessBuilder_Redirect_Type.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject ProcessBuilder_Redirect::DISCARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"DISCARD",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect::INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"INHERIT",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect::PIPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"PIPE",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	
	// Constructors
	void ProcessBuilder_Redirect::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ProcessBuilder$Redirect",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ProcessBuilder_Redirect::appendTo(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"appendTo",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect::from(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"from",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect::to(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"to",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.__jniObject().object()
		);
	}
	jboolean ProcessBuilder_Redirect::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect::file()
	{
		return __thiz.callObjectMethod(
			"file",
			"()Ljava/io/File;"
		);
	}
	jint ProcessBuilder_Redirect::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ProcessBuilder_Redirect::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ProcessBuilder_Redirect : public __jni_impl::java::lang::ProcessBuilder_Redirect
	{
	public:
		ProcessBuilder_Redirect(QAndroidJniObject obj) { __thiz = obj; }
		ProcessBuilder_Redirect()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_PROCESSBUILDER_REDIRECT

