#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::content
{
	class ContentProvider;
}
namespace android::content
{
	class ContentProviderOperation_Builder;
}
namespace android::content
{
	class ContentProviderResult;
}
namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content
{
	class ContentProviderOperation : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderOperation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderOperation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::ContentProviderOperation_Builder newAssertQuery(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newDelete(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newInsert(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newUpdate(android::net::Uri arg0);
		android::content::ContentProviderResult apply(android::content::ContentProvider arg0, JArray arg1, jint arg2);
		jint describeContents();
		android::net::Uri getUri();
		jboolean isAssertQuery();
		jboolean isDelete();
		jboolean isInsert();
		jboolean isReadOperation();
		jboolean isUpdate();
		jboolean isWriteOperation();
		jboolean isYieldAllowed();
		JArray resolveSelectionArgsBackReferences(JArray arg0, jint arg1);
		android::content::ContentValues resolveValueBackReferences(JArray arg0, jint arg1);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

