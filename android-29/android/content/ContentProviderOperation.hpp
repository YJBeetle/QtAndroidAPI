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
	class Parcel;
}

namespace android::content
{
	class ContentProviderOperation : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ContentProviderOperation(QAndroidJniObject obj);
		// Constructors
		ContentProviderOperation() = default;
		
		// Methods
		static QAndroidJniObject newAssertQuery(android::net::Uri arg0);
		static QAndroidJniObject newDelete(android::net::Uri arg0);
		static QAndroidJniObject newInsert(android::net::Uri arg0);
		static QAndroidJniObject newUpdate(android::net::Uri arg0);
		QAndroidJniObject apply(android::content::ContentProvider arg0, jarray arg1, jint arg2);
		jint describeContents();
		QAndroidJniObject getUri();
		jboolean isAssertQuery();
		jboolean isDelete();
		jboolean isInsert();
		jboolean isReadOperation();
		jboolean isUpdate();
		jboolean isWriteOperation();
		jboolean isYieldAllowed();
		jarray resolveSelectionArgsBackReferences(jarray arg0, jint arg1);
		QAndroidJniObject resolveValueBackReferences(jarray arg0, jint arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

