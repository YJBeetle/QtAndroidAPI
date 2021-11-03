#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace javax::xml::transform
{
	class Transformer;
}

namespace javax::xml::transform
{
	class TransformerFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransformerFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransformerFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::transform::TransformerFactory newDefaultInstance();
		static javax::xml::transform::TransformerFactory newInstance();
		static javax::xml::transform::TransformerFactory newInstance(JString arg0, java::lang::ClassLoader arg1);
		JObject getAssociatedStylesheet(JObject arg0, JString arg1, JString arg2, JString arg3);
		JObject getAttribute(JString arg0);
		JObject getErrorListener();
		jboolean getFeature(JString arg0);
		JObject getURIResolver();
		JObject newTemplates(JObject arg0);
		javax::xml::transform::Transformer newTransformer();
		javax::xml::transform::Transformer newTransformer(JObject arg0);
		void setAttribute(JString arg0, JObject arg1);
		void setErrorListener(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setURIResolver(JObject arg0);
	};
} // namespace javax::xml::transform

