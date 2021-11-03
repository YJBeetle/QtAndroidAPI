#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JObject;
class JString;

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
		android::content::ContentProviderOperation build() const;
		android::content::ContentProviderOperation_Builder withExpectedCount(jint arg0) const;
		android::content::ContentProviderOperation_Builder withSelection(JString arg0, JArray arg1) const;
		android::content::ContentProviderOperation_Builder withSelectionBackReference(jint arg0, jint arg1) const;
		android::content::ContentProviderOperation_Builder withValue(JString arg0, JObject arg1) const;
		android::content::ContentProviderOperation_Builder withValueBackReference(JString arg0, jint arg1) const;
		android::content::ContentProviderOperation_Builder withValueBackReferences(android::content::ContentValues arg0) const;
		android::content::ContentProviderOperation_Builder withValues(android::content::ContentValues arg0) const;
		android::content::ContentProviderOperation_Builder withYieldAllowed(jboolean arg0) const;
	};
} // namespace android::content

