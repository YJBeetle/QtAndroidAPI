#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}

namespace javax::xml::xpath
{
	class XPathFactory : public JObject
	{
	public:
		// Fields
		static jstring DEFAULT_OBJECT_MODEL_URI();
		static jstring DEFAULT_PROPERTY_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XPathFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XPathFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::xpath::XPathFactory newDefaultInstance();
		static javax::xml::xpath::XPathFactory newInstance();
		static javax::xml::xpath::XPathFactory newInstance(jstring arg0);
		static javax::xml::xpath::XPathFactory newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		jboolean getFeature(jstring arg0);
		jboolean isObjectModelSupported(jstring arg0);
		JObject newXPath();
		void setFeature(jstring arg0, jboolean arg1);
		void setXPathFunctionResolver(JObject arg0);
		void setXPathVariableResolver(JObject arg0);
	};
} // namespace javax::xml::xpath

