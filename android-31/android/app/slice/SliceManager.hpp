#pragma once

#include "../../../JObject.hpp"

namespace android::app::slice
{
	class Slice;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}

namespace android::app::slice
{
	class SliceManager : public JObject
	{
	public:
		// Fields
		static jstring CATEGORY_SLICE();
		static jstring SLICE_METADATA_KEY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SliceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SliceManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::app::slice::Slice bindSlice(android::content::Intent arg0, JObject arg1);
		android::app::slice::Slice bindSlice(android::net::Uri arg0, JObject arg1);
		jint checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2);
		JObject getPinnedSlices();
		JObject getPinnedSpecs(android::net::Uri arg0);
		JObject getSliceDescendants(android::net::Uri arg0);
		void grantSlicePermission(jstring arg0, android::net::Uri arg1);
		android::net::Uri mapIntentToUri(android::content::Intent arg0);
		void pinSlice(android::net::Uri arg0, JObject arg1);
		void revokeSlicePermission(jstring arg0, android::net::Uri arg1);
		void unpinSlice(android::net::Uri arg0);
	};
} // namespace android::app::slice

