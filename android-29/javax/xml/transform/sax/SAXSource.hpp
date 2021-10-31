#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace org::xml::sax
{
	class InputSource;
}

namespace javax::xml::transform::sax
{
	class SAXSource : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		SAXSource(QAndroidJniObject obj);
		// Constructors
		SAXSource();
		SAXSource(org::xml::sax::InputSource arg0);
		SAXSource(__JniBaseClass arg0, org::xml::sax::InputSource arg1);
		
		// Methods
		static QAndroidJniObject sourceToInputSource(__JniBaseClass arg0);
		QAndroidJniObject getInputSource();
		jstring getSystemId();
		QAndroidJniObject getXMLReader();
		jboolean isEmpty();
		void setInputSource(org::xml::sax::InputSource arg0);
		void setSystemId(jstring arg0);
		void setXMLReader(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform::sax

