#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::view::textclassifier
{
	class TextClassifier_EntityConfig;
}
namespace android::view::textclassifier
{
	class TextLinks_Request;
}

namespace android::view::textclassifier
{
	class TextLinks_Request_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Request_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Request_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextLinks_Request_Builder(jstring arg0);
		
		// Methods
		android::view::textclassifier::TextLinks_Request build();
		android::view::textclassifier::TextLinks_Request_Builder setDefaultLocales(android::os::LocaleList arg0);
		android::view::textclassifier::TextLinks_Request_Builder setEntityConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0);
		android::view::textclassifier::TextLinks_Request_Builder setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

