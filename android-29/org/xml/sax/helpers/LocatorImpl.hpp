#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::xml::sax::helpers
{
	class LocatorImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		LocatorImpl(QAndroidJniObject obj);
		// Constructors
		LocatorImpl();
		LocatorImpl(__JniBaseClass arg0);
		
		// Methods
		jint getColumnNumber();
		jint getLineNumber();
		jstring getPublicId();
		jstring getSystemId();
		void setColumnNumber(jint arg0);
		void setLineNumber(jint arg0);
		void setPublicId(jstring arg0);
		void setSystemId(jstring arg0);
	};
} // namespace org::xml::sax::helpers

