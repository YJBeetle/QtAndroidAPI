#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentProviderOperation;
}
namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}

namespace android::content
{
	class ContentProviderOperation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderOperation_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderOperation_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject withExpectedCount(jint arg0);
		QAndroidJniObject withSelection(jstring arg0, jarray arg1);
		QAndroidJniObject withSelectionBackReference(jint arg0, jint arg1);
		QAndroidJniObject withValue(jstring arg0, jobject arg1);
		QAndroidJniObject withValueBackReference(jstring arg0, jint arg1);
		QAndroidJniObject withValueBackReferences(android::content::ContentValues arg0);
		QAndroidJniObject withValues(android::content::ContentValues arg0);
		QAndroidJniObject withYieldAllowed(jboolean arg0);
	};
} // namespace android::content

