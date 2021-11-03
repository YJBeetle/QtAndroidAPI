#pragma once


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
		Package(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Package getPackage(JString arg0);
		static JArray getPackages();
		JObject getAnnotation(JClass arg0);
		JArray getAnnotations();
		JArray getAnnotationsByType(JClass arg0);
		JObject getDeclaredAnnotation(JClass arg0);
		JArray getDeclaredAnnotations();
		JArray getDeclaredAnnotationsByType(JClass arg0);
		JString getImplementationTitle();
		JString getImplementationVendor();
		JString getImplementationVersion();
		JString getName();
		JString getSpecificationTitle();
		JString getSpecificationVendor();
		JString getSpecificationVersion();
		jint hashCode();
		jboolean isAnnotationPresent(JClass arg0);
		jboolean isCompatibleWith(JString arg0);
		jboolean isSealed();
		jboolean isSealed(java::net::URL arg0);
		JString toString();
	};
} // namespace java::lang

