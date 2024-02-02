#pragma once

#include "./PreviewableHandwritingGesture.def.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::view::inputmethod
{
	class DeleteRangeGesture : public android::view::inputmethod::PreviewableHandwritingGesture
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DeleteRangeGesture(const char *className, const char *sig, Ts...agv) : android::view::inputmethod::PreviewableHandwritingGesture(className, sig, std::forward<Ts>(agv)...) {}
		DeleteRangeGesture(QJniObject obj) : android::view::inputmethod::PreviewableHandwritingGesture(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::RectF getDeletionEndArea() const;
		android::graphics::RectF getDeletionStartArea() const;
		jint getGranularity() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

