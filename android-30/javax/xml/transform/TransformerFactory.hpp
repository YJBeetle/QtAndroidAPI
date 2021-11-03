#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
		static javax::xml::transform::TransformerFactory newInstance(jstring arg0, java::lang::ClassLoader arg1);
		JObject getAssociatedStylesheet(JObject arg0, jstring arg1, jstring arg2, jstring arg3);
		jobject getAttribute(jstring arg0);
		JObject getErrorListener();
		jboolean getFeature(jstring arg0);
		JObject getURIResolver();
		JObject newTemplates(JObject arg0);
		javax::xml::transform::Transformer newTransformer();
		javax::xml::transform::Transformer newTransformer(JObject arg0);
		void setAttribute(jstring arg0, jobject arg1);
		void setErrorListener(JObject arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setURIResolver(JObject arg0);
	};
} // namespace javax::xml::transform

