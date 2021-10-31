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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XPathConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XPathConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::xpath

