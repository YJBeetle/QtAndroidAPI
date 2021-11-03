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
	class Bundle;
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
		static android::content::ContentProviderOperation_Builder newCall(android::net::Uri arg0, JString arg1, JString arg2);
		static android::content::ContentProviderOperation_Builder newDelete(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newInsert(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newUpdate(android::net::Uri arg0);
		android::content::ContentProviderResult apply(android::content::ContentProvider arg0, JArray arg1, jint arg2) const;
		jint describeContents() const;
		android::net::Uri getUri() const;
		jboolean isAssertQuery() const;
		jboolean isCall() const;
		jboolean isDelete() const;
		jboolean isExceptionAllowed() const;
		jboolean isInsert() const;
		jboolean isReadOperation() const;
		jboolean isUpdate() const;
		jboolean isWriteOperation() const;
		jboolean isYieldAllowed() const;
		android::os::Bundle resolveExtrasBackReferences(JArray arg0, jint arg1) const;
		JArray resolveSelectionArgsBackReferences(JArray arg0, jint arg1) const;
		android::content::ContentValues resolveValueBackReferences(JArray arg0, jint arg1) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

