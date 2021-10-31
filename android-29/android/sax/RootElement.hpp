#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Element.hpp"


namespace android::sax
{
	class RootElement : public android::sax::Element
	{
	public:
		// Fields
		
		RootElement(QAndroidJniObject obj);
		// Constructors
		RootElement(jstring arg0);
		RootElement(jstring arg0, jstring arg1);
		RootElement() = default;
		
		// Methods
		QAndroidJniObject getContentHandler();
	};
} // namespace android::sax

