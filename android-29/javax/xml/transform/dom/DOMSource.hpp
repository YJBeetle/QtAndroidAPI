#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::xml::transform::dom
{
	class DOMSource : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		DOMSource(QAndroidJniObject obj);
		// Constructors
		DOMSource();
		DOMSource(__JniBaseClass &arg0);
		DOMSource(__JniBaseClass &arg0, jstring &arg1);
		DOMSource(__JniBaseClass &arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject getNode();
		jstring getSystemId();
		jboolean isEmpty();
		void setNode(__JniBaseClass arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
	};
} // namespace javax::xml::transform::dom

