#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TextLanguage_Request_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TextLanguage_Request_Builder(QAndroidJniObject obj);
		// Constructors
		TextLanguage_Request_Builder(jstring arg0);
		TextLanguage_Request_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(android::os::Bundle arg0);
	};
} // namespace android::view::textclassifier

