#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::xml::_namespace
{
	class QName;
}

namespace javax::xml::xpath
{
	class XPathConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BOOLEAN();
		static jstring DOM_OBJECT_MODEL();
		static QAndroidJniObject NODE();
		static QAndroidJniObject NODESET();
		static QAndroidJniObject NUMBER();
		static QAndroidJniObject STRING();
		
		XPathConstants(QAndroidJniObject obj);
		// Constructors
		XPathConstants() = default;
		
		// Methods
	};
} // namespace javax::xml::xpath

