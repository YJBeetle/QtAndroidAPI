#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::xml::transform::dom
{
	class DOMResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DOMResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DOMResult(QAndroidJniObject obj);
		
		// Constructors
		DOMResult();
		DOMResult(__JniBaseClass arg0);
		DOMResult(__JniBaseClass arg0, jstring arg1);
		DOMResult(__JniBaseClass arg0, __JniBaseClass arg1);
		DOMResult(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2);
		
		// Methods
		__JniBaseClass getNextSibling();
		__JniBaseClass getNode();
		jstring getSystemId();
		void setNextSibling(__JniBaseClass arg0);
		void setNode(__JniBaseClass arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::dom

