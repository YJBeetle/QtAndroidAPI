#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Package : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Package(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Package(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Package getPackage(jstring arg0);
		static jarray getPackages();
		__JniBaseClass getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		__JniBaseClass getDeclaredAnnotation(jclass arg0);
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

