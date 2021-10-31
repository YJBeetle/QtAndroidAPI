#include "./ClassLoader.hpp"
#include "../net/URL.hpp"
#include "./Package.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Package::Package(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
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
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Package::getAnnotations()
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Package::getAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Package::getDeclaredAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Package::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Package::getDeclaredAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	jstring Package::getImplementationTitle()
	{
		return callObjectMethod(
			"getImplementationTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getImplementationVendor()
	{
		return callObjectMethod(
			"getImplementationVendor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getImplementationVersion()
	{
		return callObjectMethod(
			"getImplementationVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getSpecificationTitle()
	{
		return callObjectMethod(
			"getSpecificationTitle",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getSpecificationVendor()
	{
		return callObjectMethod(
			"getSpecificationVendor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Package::getSpecificationVersion()
	{
		return callObjectMethod(
			"getSpecificationVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Package::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Package::isAnnotationPresent(jclass arg0)
	{
		return callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean Package::isCompatibleWith(jstring arg0)
	{
		return callMethod<jboolean>(
			"isCompatibleWith",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Package::isSealed()
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	jboolean Package::isSealed(java::net::URL arg0)
	{
		return callMethod<jboolean>(
			"isSealed",
			"(Ljava/net/URL;)Z",
			arg0.object()
		);
	}
	jstring Package::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

