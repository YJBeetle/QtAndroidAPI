#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class SliceManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CATEGORY_SLICE();
		static jstring SLICE_METADATA_KEY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SliceManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SliceManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject bindSlice(android::content::Intent arg0, __JniBaseClass arg1);
		QAndroidJniObject bindSlice(android::net::Uri arg0, __JniBaseClass arg1);
		jint checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2);
		QAndroidJniObject getPinnedSlices();
		QAndroidJniObject getPinnedSpecs(android::net::Uri arg0);
		QAndroidJniObject getSliceDescendants(android::net::Uri arg0);
		void grantSlicePermission(jstring arg0, android::net::Uri arg1);
		QAndroidJniObject mapIntentToUri(android::content::Intent arg0);
		void pinSlice(android::net::Uri arg0, __JniBaseClass arg1);
		void revokeSlicePermission(jstring arg0, android::net::Uri arg1);
		void unpinSlice(android::net::Uri arg0);
	};
} // namespace android::app::slice

