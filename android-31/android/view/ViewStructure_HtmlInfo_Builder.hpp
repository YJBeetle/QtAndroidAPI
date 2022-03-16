#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class ViewStructure_HtmlInfo;
}
class JString;

namespace android::view
{
	class ViewStructure_HtmlInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewStructure_HtmlInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure_HtmlInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ViewStructure_HtmlInfo_Builder();
		
		// Methods
		android::view::ViewStructure_HtmlInfo_Builder addAttribute(JString arg0, JString arg1) const;
		android::view::ViewStructure_HtmlInfo build() const;
	};
} // namespace android::view

