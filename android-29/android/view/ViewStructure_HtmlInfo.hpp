#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class ViewStructure_HtmlInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewStructure_HtmlInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure_HtmlInfo(QJniObject obj);
		
		// Constructors
		ViewStructure_HtmlInfo();
		
		// Methods
		__JniBaseClass getAttributes();
		jstring getTag();
	};
} // namespace android::view

