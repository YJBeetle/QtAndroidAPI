#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::view
{
	class ViewStructure_HtmlInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewStructure_HtmlInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure_HtmlInfo(QAndroidJniObject obj);
		
		// Constructors
		ViewStructure_HtmlInfo();
		
		// Methods
		JObject getAttributes() const;
		JString getTag() const;
	};
} // namespace android::view

