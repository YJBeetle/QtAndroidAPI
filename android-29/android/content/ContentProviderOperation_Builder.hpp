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
		
		ContentProviderOperation_Builder(QAndroidJniObject obj);
		// Constructors
		ContentProviderOperation_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject withExpectedCount(jint arg0);
		QAndroidJniObject withSelection(jstring arg0, jarray arg1);
		QAndroidJniObject withSelection(const QString &arg0, jarray arg1);
		QAndroidJniObject withSelectionBackReference(jint arg0, jint arg1);
		QAndroidJniObject withValue(jstring arg0, jobject arg1);
		QAndroidJniObject withValue(const QString &arg0, jobject arg1);
		QAndroidJniObject withValueBackReference(jstring arg0, jint arg1);
		QAndroidJniObject withValueBackReference(const QString &arg0, jint arg1);
		QAndroidJniObject withValueBackReferences(android::content::ContentValues arg0);
		QAndroidJniObject withValues(android::content::ContentValues arg0);
		QAndroidJniObject withYieldAllowed(jboolean arg0);
	};
} // namespace android::content

