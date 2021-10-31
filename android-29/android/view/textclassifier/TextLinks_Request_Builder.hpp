#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TextLinks_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_Request_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_Request_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextLinks_Request_Builder(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDefaultLocales(android::os::LocaleList arg0);
		QAndroidJniObject setEntityConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

