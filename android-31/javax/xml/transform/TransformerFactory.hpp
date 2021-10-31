#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TransformerFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransformerFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TransformerFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::transform::TransformerFactory newDefaultInstance();
		static javax::xml::transform::TransformerFactory newInstance();
		static javax::xml::transform::TransformerFactory newInstance(jstring arg0, java::lang::ClassLoader arg1);
		__JniBaseClass getAssociatedStylesheet(__JniBaseClass arg0, jstring arg1, jstring arg2, jstring arg3);
		jobject getAttribute(jstring arg0);
		__JniBaseClass getErrorListener();
		jboolean getFeature(jstring arg0);
		__JniBaseClass getURIResolver();
		__JniBaseClass newTemplates(__JniBaseClass arg0);
		javax::xml::transform::Transformer newTransformer();
		javax::xml::transform::Transformer newTransformer(__JniBaseClass arg0);
		void setAttribute(jstring arg0, jobject arg1);
		void setErrorListener(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setURIResolver(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform

