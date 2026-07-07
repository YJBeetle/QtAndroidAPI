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
class JString;

namespace android::app::slice
{
	class SliceManager : public JObject
	{
	public:
		// Fields
		static JString CATEGORY_SLICE();
		static JString SLICE_METADATA_KEY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SliceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SliceManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::app::slice::Slice bindSlice(android::content::Intent arg0, JObject arg1) const;
		android::app::slice::Slice bindSlice(android::net::Uri arg0, JObject arg1) const;
		jint checkSlicePermission(android::net::Uri arg0, jint arg1, jint arg2) const;
		JObject getPinnedSlices() const;
		JObject getPinnedSpecs(android::net::Uri arg0) const;
		JObject getSliceDescendants(android::net::Uri arg0) const;
		void grantSlicePermission(JString arg0, android::net::Uri arg1) const;
		android::net::Uri mapIntentToUri(android::content::Intent arg0) const;
		void pinSlice(android::net::Uri arg0, JObject arg1) const;
		void revokeSlicePermission(JString arg0, android::net::Uri arg1) const;
		void unpinSlice(android::net::Uri arg0) const;
	};
} // namespace android::app::slice

