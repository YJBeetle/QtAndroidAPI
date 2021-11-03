#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "./ClassLoader.hpp"
#include "../../JString.hpp"
#include "../net/URL.hpp"
#include "./Package.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	Package::Package(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::Package Package::getPackage(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Package",
			"getPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0.object<jstring>()
		);
	}
	JArray Package::getPackages()
	{
		return callStaticObjectMethod(
			"java.lang.Package",
			"getPackages",
			"()[Ljava/lang/Package;"
		);
	}
	JObject Package::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Package::getAnnotations() const
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JArray Package::getAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JObject Package::getDeclaredAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Package::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JArray Package::getDeclaredAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JString Package::getImplementationTitle() const
	{
		return callObjectMethod(
			"getImplementationTitle",
			"()Ljava/lang/String;"
		);
	}
	JString Package::getImplementationVendor() const
	{
		return callObjectMethod(
			"getImplementationVendor",
			"()Ljava/lang/String;"
		);
	}
	JString Package::getImplementationVersion() const
	{
		return callObjectMethod(
			"getImplementationVersion",
			"()Ljava/lang/String;"
		);
	}
	JString Package::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString Package::getSpecificationTitle() const
	{
		return callObjectMethod(
			"getSpecificationTitle",
			"()Ljava/lang/String;"
		);
	}
	JString Package::getSpecificationVendor() const
	{
		return callObjectMethod(
			"getSpecificationVendor",
			"()Ljava/lang/String;"
		);
	}
	JString Package::getSpecificationVersion() const
	{
		return callObjectMethod(
			"getSpecificationVersion",
			"()Ljava/lang/String;"
		);
	}
	jint Package::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Package::isAnnotationPresent(JClass arg0) const
	{
		return callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	jboolean Package::isCompatibleWith(JString arg0) const
	{
		return callMethod<jboolean>(
			"isCompatibleWith",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Package::isSealed() const
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	jboolean Package::isSealed(java::net::URL arg0) const
	{
		return callMethod<jboolean>(
			"isSealed",
			"(Ljava/net/URL;)Z",
			arg0.object()
		);
	}
	JString Package::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

