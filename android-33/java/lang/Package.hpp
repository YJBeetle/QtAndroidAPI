#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "./ClassLoader.def.hpp"
#include "../../JString.hpp"
#include "../net/URL.def.hpp"
#include "./Package.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::Package Package::getPackage(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Package",
			"getPackage",
			"(Ljava/lang/String;)Ljava/lang/Package;",
			arg0.object<jstring>()
		);
	}
	inline JArray Package::getPackages()
	{
		return callStaticObjectMethod(
			"java.lang.Package",
			"getPackages",
			"()[Ljava/lang/Package;"
		);
	}
	inline JObject Package::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Package::getAnnotations() const
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JArray Package::getAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JObject Package::getDeclaredAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Package::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JArray Package::getDeclaredAnnotationsByType(JClass arg0) const
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JString Package::getImplementationTitle() const
	{
		return callObjectMethod(
			"getImplementationTitle",
			"()Ljava/lang/String;"
		);
	}
	inline JString Package::getImplementationVendor() const
	{
		return callObjectMethod(
			"getImplementationVendor",
			"()Ljava/lang/String;"
		);
	}
	inline JString Package::getImplementationVersion() const
	{
		return callObjectMethod(
			"getImplementationVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JString Package::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Package::getSpecificationTitle() const
	{
		return callObjectMethod(
			"getSpecificationTitle",
			"()Ljava/lang/String;"
		);
	}
	inline JString Package::getSpecificationVendor() const
	{
		return callObjectMethod(
			"getSpecificationVendor",
			"()Ljava/lang/String;"
		);
	}
	inline JString Package::getSpecificationVersion() const
	{
		return callObjectMethod(
			"getSpecificationVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jint Package::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Package::isAnnotationPresent(JClass arg0) const
	{
		return callMethod<jboolean>(
			"isAnnotationPresent",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	inline jboolean Package::isCompatibleWith(JString arg0) const
	{
		return callMethod<jboolean>(
			"isCompatibleWith",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Package::isSealed() const
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	inline jboolean Package::isSealed(java::net::URL arg0) const
	{
		return callMethod<jboolean>(
			"isSealed",
			"(Ljava/net/URL;)Z",
			arg0.object()
		);
	}
	inline JString Package::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
