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
		
		TextClassification_Request_Builder(QAndroidJniObject obj);
		// Constructors
		TextClassification_Request_Builder(jstring &arg0, jint &arg1, jint &arg2);
		TextClassification_Request_Builder(const QString &arg0, jint &arg1, jint &arg2);
		TextClassification_Request_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDefaultLocales(android::os::LocaleList arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setReferenceTime(java::time::ZonedDateTime arg0);
	};
} // namespace android::view::textclassifier

