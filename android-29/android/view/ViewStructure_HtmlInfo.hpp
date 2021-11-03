#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::view
{
	class ViewStructure_HtmlInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewStructure_HtmlInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewStructure_HtmlInfo(QJniObject obj);
		
		// Constructors
		ViewStructure_HtmlInfo();
		
		// Methods
		JObject getAttributes() const;
		JString getTag() const;
	};
} // namespace android::view

