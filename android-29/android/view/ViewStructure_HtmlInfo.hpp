#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class ViewStructure_HtmlInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewStructure_HtmlInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure_HtmlInfo(QAndroidJniObject obj);
		
		// Constructors
		ViewStructure_HtmlInfo();
		
		// Methods
		__JniBaseClass getAttributes();
		jstring getTag();
	};
} // namespace android::view

