#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../helpers/LocatorImpl.hpp"


namespace org::xml::sax::ext
{
	class Locator2Impl : public org::xml::sax::helpers::LocatorImpl
	{
	public:
		// Fields
		
		Locator2Impl(QAndroidJniObject obj);
		// Constructors
		Locator2Impl();
		Locator2Impl(__JniBaseClass &arg0);
		
		// Methods
		jstring getEncoding();
		jstring getXMLVersion();
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
		void setXMLVersion(jstring arg0);
		void setXMLVersion(const QString &arg0);
	};
} // namespace org::xml::sax::ext

