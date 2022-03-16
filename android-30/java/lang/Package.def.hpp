#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Package(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Package(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::Package getPackage(JString arg0);
		static JArray getPackages();
		JObject getAnnotation(JClass arg0) const;
		JArray getAnnotations() const;
		JArray getAnnotationsByType(JClass arg0) const;
		JObject getDeclaredAnnotation(JClass arg0) const;
		JArray getDeclaredAnnotations() const;
		JArray getDeclaredAnnotationsByType(JClass arg0) const;
		JString getImplementationTitle() const;
		JString getImplementationVendor() const;
		JString getImplementationVersion() const;
		JString getName() const;
		JString getSpecificationTitle() const;
		JString getSpecificationVendor() const;
		JString getSpecificationVersion() const;
		jint hashCode() const;
		jboolean isAnnotationPresent(JClass arg0) const;
		jboolean isCompatibleWith(JString arg0) const;
		jboolean isSealed() const;
		jboolean isSealed(java::net::URL arg0) const;
		JString toString() const;
	};
} // namespace java::lang

