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
	class TextClassification_Request;
}
namespace java::time
{
	class ZonedDateTime;
}

namespace android::view::textclassifier
{
	class TextClassification_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassification_Request_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Request_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassification_Request_Builder(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDefaultLocales(android::os::LocaleList arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setReferenceTime(java::time::ZonedDateTime arg0);
	};
} // namespace android::view::textclassifier

