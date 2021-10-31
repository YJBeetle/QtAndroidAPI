#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}

namespace javax::xml::xpath
{
	class XPathFactory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DEFAULT_OBJECT_MODEL_URI();
		static jstring DEFAULT_PROPERTY_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XPathFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::xpath::XPathFactory newDefaultInstance();
		static javax::xml::xpath::XPathFactory newInstance();
		static javax::xml::xpath::XPathFactory newInstance(jstring arg0);
		static javax::xml::xpath::XPathFactory newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		jboolean getFeature(jstring arg0);
		jboolean isObjectModelSupported(jstring arg0);
		__JniBaseClass newXPath();
		void setFeature(jstring arg0, jboolean arg1);
		void setXPathFunctionResolver(__JniBaseClass arg0);
		void setXPathVariableResolver(__JniBaseClass arg0);
	};
} // namespace javax::xml::xpath

