#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
class JString;

namespace javax::xml::xpath
{
	class XPathFactory : public JObject
	{
	public:
		// Fields
		static JString DEFAULT_OBJECT_MODEL_URI();
		static JString DEFAULT_PROPERTY_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XPathFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::xpath::XPathFactory newDefaultInstance();
		static javax::xml::xpath::XPathFactory newInstance();
		static javax::xml::xpath::XPathFactory newInstance(JString arg0);
		static javax::xml::xpath::XPathFactory newInstance(JString arg0, JString arg1, java::lang::ClassLoader arg2);
		jboolean getFeature(JString arg0) const;
		jboolean isObjectModelSupported(JString arg0) const;
		JObject newXPath() const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setXPathFunctionResolver(JObject arg0) const;
		void setXPathVariableResolver(JObject arg0) const;
	};
} // namespace javax::xml::xpath

