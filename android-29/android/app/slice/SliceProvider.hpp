#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/ContentProvider.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app::slice
{
	class Slice;
}
namespace android::content
{
	class ContentValues;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class ProviderInfo;
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
	class CancellationSignal;
}

namespace android::app::slice
{
	class SliceProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		static jstring SLICE_TYPE();
		
		SliceProvider(QAndroidJniObject obj);
		// Constructors
		SliceProvider();
		SliceProvider(jarray &arg0);
		
		// Methods
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1);
		QAndroidJniObject call(jstring arg0, jstring arg1, android::os::Bundle arg2);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, android::os::Bundle arg2);
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		jint _delete(android::net::Uri arg0, const QString &arg1, jarray arg2);
		jstring getType(android::net::Uri arg0);
		QAndroidJniObject insert(android::net::Uri arg0, android::content::ContentValues arg1);
		QAndroidJniObject onBindSlice(android::net::Uri arg0, __JniBaseClass arg1);
		QAndroidJniObject onCreatePermissionRequest(android::net::Uri arg0);
		QAndroidJniObject onGetSliceDescendants(android::net::Uri arg0);
		QAndroidJniObject onMapIntentToUri(android::content::Intent arg0);
		void onSlicePinned(android::net::Uri arg0);
		void onSliceUnpinned(android::net::Uri arg0);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, android::os::CancellationSignal arg5);
		QAndroidJniObject query(android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, android::os::CancellationSignal arg5);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3);
	};
} // namespace android::app::slice

