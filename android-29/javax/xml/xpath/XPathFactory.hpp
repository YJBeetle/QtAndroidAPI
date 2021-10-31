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
		
		XPathFactory(QAndroidJniObject obj);
		// Constructors
		XPathFactory() = default;
		
		// Methods
		static QAndroidJniObject newDefaultInstance();
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0);
		static QAndroidJniObject newInstance(jstring arg0, jstring arg1, java::lang::ClassLoader arg2);
		jboolean getFeature(jstring arg0);
		jboolean isObjectModelSupported(jstring arg0);
		QAndroidJniObject newXPath();
		void setFeature(jstring arg0, jboolean arg1);
		void setXPathFunctionResolver(__JniBaseClass arg0);
		void setXPathVariableResolver(__JniBaseClass arg0);
	};
} // namespace javax::xml::xpath

