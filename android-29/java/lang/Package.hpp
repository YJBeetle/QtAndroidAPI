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
		
		Package(QAndroidJniObject obj);
		// Constructors
		Package() = default;
		
		// Methods
		static QAndroidJniObject getPackage(jstring arg0);
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
		jboolean isSealed();
		jboolean isSealed(java::net::URL arg0);
		jstring toString();
	};
} // namespace java::lang

