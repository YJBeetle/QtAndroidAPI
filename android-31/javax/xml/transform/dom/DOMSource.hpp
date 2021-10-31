#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::xml::transform::dom
{
	class DOMSource : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DOMSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DOMSource(QAndroidJniObject obj);
		
		// Constructors
		DOMSource();
		DOMSource(__JniBaseClass arg0);
		DOMSource(__JniBaseClass arg0, jstring arg1);
		
		// Methods
		__JniBaseClass getNode();
		jstring getSystemId();
		jboolean isEmpty();
		void setNode(__JniBaseClass arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::dom

