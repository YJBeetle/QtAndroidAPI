#pragma once

#include "../../content/ContentProvider.hpp"

class JArray;
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
class JString;

namespace android::app::slice
{
	class SliceProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		static JString SLICE_TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SliceProvider(const char *className, const char *sig, Ts...agv) : android::content::ContentProvider(className, sig, std::forward<Ts>(agv)...) {}
		SliceProvider(QJniObject obj);
		
		// Constructors
		SliceProvider();
		SliceProvider(JArray arg0);
		
		// Methods
		void attachInfo(android::content::Context arg0, android::content::pm::ProviderInfo arg1);
		android::os::Bundle call(JString arg0, JString arg1, android::os::Bundle arg2);
		jint _delete(android::net::Uri arg0, JString arg1, JArray arg2);
		JString getType(android::net::Uri arg0);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		android::app::slice::Slice onBindSlice(android::net::Uri arg0, JObject arg1);
		android::app::PendingIntent onCreatePermissionRequest(android::net::Uri arg0);
		JObject onGetSliceDescendants(android::net::Uri arg0);
		android::net::Uri onMapIntentToUri(android::content::Intent arg0);
		void onSlicePinned(android::net::Uri arg0);
		void onSliceUnpinned(android::net::Uri arg0);
		JObject query(android::net::Uri arg0, JArray arg1, android::os::Bundle arg2, android::os::CancellationSignal arg3);
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4);
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, android::os::CancellationSignal arg5);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3);
	};
} // namespace android::app::slice

