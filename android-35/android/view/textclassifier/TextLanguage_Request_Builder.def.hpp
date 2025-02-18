#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::textclassifier
{
	class TextLanguage_Request;
}
class JString;

namespace android::view::textclassifier
{
	class TextLanguage_Request_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextLanguage_Request_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLanguage_Request_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextLanguage_Request_Builder(JString arg0);
		
		// Methods
		android::view::textclassifier::TextLanguage_Request build() const;
		android::view::textclassifier::TextLanguage_Request_Builder setExtras(android::os::Bundle arg0) const;
	};
} // namespace android::view::textclassifier

