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
	class Contacts_Phones : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URL();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		
		Contacts_Phones(QAndroidJniObject obj);
		// Constructors
		Contacts_Phones() = default;
		
		// Methods
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2);
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, const QString &arg2);
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jstring arg2, jarray arg3);
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, const QString &arg2, jarray arg3);
	};
} // namespace android::provider

