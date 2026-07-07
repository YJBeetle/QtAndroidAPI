#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class RectF;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view::inputmethod
{
	class EditorBoundsInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit EditorBoundsInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EditorBoundsInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::RectF getEditorBounds() const;
		android::graphics::RectF getHandwritingBounds() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

