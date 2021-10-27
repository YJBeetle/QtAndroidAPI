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
		
		SAXTransformerFactory(QAndroidJniObject obj);
		// Constructors
		SAXTransformerFactory() = default;
		
		// Methods
		QAndroidJniObject newTemplatesHandler();
		QAndroidJniObject newTransformerHandler();
		QAndroidJniObject newTransformerHandler(__JniBaseClass arg0);
		QAndroidJniObject newXMLFilter(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform::sax

