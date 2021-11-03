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

namespace android::view::textclassifier
{
	class TextLanguage_Request_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLanguage_Request_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLanguage_Request_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextLanguage_Request_Builder(jstring arg0);
		
		// Methods
		android::view::textclassifier::TextLanguage_Request build();
		android::view::textclassifier::TextLanguage_Request_Builder setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

