#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::net
{
	class URL;
}

namespace __jni_impl::java::lang
{
	class Package : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getPackage(jstring arg0);
		static QAndroidJniObject getPackage(const QString &arg0);
		static jarray getPackages();
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		QAndroidJniObject getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		jstring getImplementationTitle();
		jstring getImplementationVendor();
		jstring getImplementationVersion();
		jstring getName();
		jstring getSpecificationTitle();
		jstring getSpecificationVendor();
		jstring getSpecificationVersion();
		jint hashCode();
		jboolean isAnnotationPresent(jclass arg0);
		jboolean isCompatibleWith(jstring arg0);
		jboolean isCompatibleWith(const QString &arg0);
		jboolean isSealed();
		jboolean isSealed(__jni_impl::java::net::URL arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::lang

#include "ClassLoader.hpp"
#include "../net/URL.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Package::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Package",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Package::getPackage(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Package",
			"getPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0
		);
	}
	QAndroidJniObject Package::getPackage(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Package",
			"getPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Package::getPackages()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Package",
			"getPackages",
			"()[Ljava/lang/Package;"
		).object<jarray>();
	}
	QAndroidJniObject Package::getAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Package::getAnnotations()
	{
		return __thiz.callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Package::getAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Package::getDeclaredAnnotation(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Package::getDeclaredAnnotations()
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Package::getDeclaredAnnotationsByType(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jstring Package::getImplementationTitle()
	{
		return __thiz.callObjectMethod(
			"getImplementationTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getImplementationVendor()
	{
		return __thiz.callObjectMethod(
			"getImplementationVendor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getImplementationVersion()
	{
		return __thiz.callObjectMethod(
			"getImplementationVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getSpecificationTitle()
	{
		return __thiz.callObjectMethod(
			"getSpecificationTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getSpecificationVendor()
	{
		return __thiz.callObjectMethod(
			"getSpecificationVendor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getSpecificationVersion()
	{
		return __thiz.callObjectMethod(
			"getSpecificationVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Package::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Package::isAnnotationPresent(jclass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean Package::isCompatibleWith(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCompatibleWith",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Package::isCompatibleWith(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCompatibleWith",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Package::isSealed()
	{
		return __thiz.callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	jboolean Package::isSealed(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSealed",
			"(Ljava/net/URL;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring Package::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Package : public __jni_impl::java::lang::Package
	{
	public:
		Package(QAndroidJniObject obj) { __thiz = obj; }
		Package()
		{
			__constructor();
		}
	};
} // namespace java::lang

