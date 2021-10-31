#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::content
{
	class ContentProviderOperation : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderOperation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderOperation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::ContentProviderOperation_Builder newAssertQuery(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newCall(android::net::Uri arg0, jstring arg1, jstring arg2);
		static android::content::ContentProviderOperation_Builder newDelete(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newInsert(android::net::Uri arg0);
		static android::content::ContentProviderOperation_Builder newUpdate(android::net::Uri arg0);
		android::content::ContentProviderResult apply(android::content::ContentProvider arg0, jarray arg1, jint arg2);
		jint describeContents();
		android::net::Uri getUri();
		jboolean isAssertQuery();
		jboolean isCall();
		jboolean isDelete();
		jboolean isExceptionAllowed();
		jboolean isInsert();
		jboolean isReadOperation();
		jboolean isUpdate();
		jboolean isWriteOperation();
		jboolean isYieldAllowed();
		android::os::Bundle resolveExtrasBackReferences(jarray arg0, jint arg1);
		jarray resolveSelectionArgsBackReferences(jarray arg0, jint arg1);
		android::content::ContentValues resolveValueBackReferences(jarray arg0, jint arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

