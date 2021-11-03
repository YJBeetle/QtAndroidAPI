#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::net
{
	class URL;
}

namespace java::lang
{
	class Package : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Package(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Package(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Package getPackage(jstring arg0);
		static jarray getPackages();
		JObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		JObject getDeclaredAnnotation(jclass arg0);
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
		jboolean isSealed();
		jboolean isSealed(java::net::URL arg0);
		jstring toString();
	};
} // namespace java::lang

