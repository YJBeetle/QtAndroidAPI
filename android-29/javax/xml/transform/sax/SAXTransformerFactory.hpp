#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../TransformerFactory.hpp"


namespace javax::xml::transform::sax
{
	class SAXTransformerFactory : public javax::xml::transform::TransformerFactory
	{
	public:
		// Fields
		static jstring FEATURE();
		static jstring FEATURE_XMLFILTER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXTransformerFactory(const char *className, const char *sig, Ts...agv) : javax::xml::transform::TransformerFactory(className, sig, std::forward<Ts>(agv)...) {}
		SAXTransformerFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass newTemplatesHandler();
		__JniBaseClass newTransformerHandler();
		__JniBaseClass newTransformerHandler(__JniBaseClass arg0);
		__JniBaseClass newXMLFilter(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform::sax

