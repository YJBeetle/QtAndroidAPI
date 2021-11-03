#pragma once

#include "../../JObject.hpp"

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
	class ContentProviderOperation_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderOperation_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderOperation_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::ContentProviderOperation build();
		android::content::ContentProviderOperation_Builder withExpectedCount(jint arg0);
		android::content::ContentProviderOperation_Builder withSelection(jstring arg0, jarray arg1);
		android::content::ContentProviderOperation_Builder withSelectionBackReference(jint arg0, jint arg1);
		android::content::ContentProviderOperation_Builder withValue(jstring arg0, jobject arg1);
		android::content::ContentProviderOperation_Builder withValueBackReference(jstring arg0, jint arg1);
		android::content::ContentProviderOperation_Builder withValueBackReferences(android::content::ContentValues arg0);
		android::content::ContentProviderOperation_Builder withValues(android::content::ContentValues arg0);
		android::content::ContentProviderOperation_Builder withYieldAllowed(jboolean arg0);
	};
} // namespace android::content

