#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_Organizations : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		Contacts_Organizations(QAndroidJniObject obj);
		// Constructors
		Contacts_Organizations() = default;
		
		// Methods
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2);
	};
} // namespace android::provider

