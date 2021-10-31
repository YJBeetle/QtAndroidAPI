#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class ViewStructure_HtmlInfo;
}

namespace android::view
{
	class ViewStructure_HtmlInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewStructure_HtmlInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure_HtmlInfo_Builder(QJniObject obj);
		
		// Constructors
		ViewStructure_HtmlInfo_Builder();
		
		// Methods
		android::view::ViewStructure_HtmlInfo_Builder addAttribute(jstring arg0, jstring arg1);
		android::view::ViewStructure_HtmlInfo build();
	};
} // namespace android::view

