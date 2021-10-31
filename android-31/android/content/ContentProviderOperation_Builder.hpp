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
namespace android::os
{
	class Bundle;
}

namespace android::content
{
	class ContentProviderOperation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentProviderOperation_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderOperation_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::ContentProviderOperation build();
		android::content::ContentProviderOperation_Builder withExceptionAllowed(jboolean arg0);
		android::content::ContentProviderOperation_Builder withExpectedCount(jint arg0);
		android::content::ContentProviderOperation_Builder withExtra(jstring arg0, jobject arg1);
		android::content::ContentProviderOperation_Builder withExtraBackReference(jstring arg0, jint arg1);
		android::content::ContentProviderOperation_Builder withExtraBackReference(jstring arg0, jint arg1, jstring arg2);
		android::content::ContentProviderOperation_Builder withExtras(android::os::Bundle arg0);
		android::content::ContentProviderOperation_Builder withSelection(jstring arg0, jarray arg1);
		android::content::ContentProviderOperation_Builder withSelectionBackReference(jint arg0, jint arg1);
		android::content::ContentProviderOperation_Builder withSelectionBackReference(jint arg0, jint arg1, jstring arg2);
		android::content::ContentProviderOperation_Builder withValue(jstring arg0, jobject arg1);
		android::content::ContentProviderOperation_Builder withValueBackReference(jstring arg0, jint arg1);
		android::content::ContentProviderOperation_Builder withValueBackReference(jstring arg0, jint arg1, jstring arg2);
		android::content::ContentProviderOperation_Builder withValueBackReferences(android::content::ContentValues arg0);
		android::content::ContentProviderOperation_Builder withValues(android::content::ContentValues arg0);
		android::content::ContentProviderOperation_Builder withYieldAllowed(jboolean arg0);
	};
} // namespace android::content

