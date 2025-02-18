#pragma once

#include "./HandwritingGesture.def.hpp"

namespace android::graphics
{
	class PointF;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view::inputmethod
{
	class InsertGesture : public android::view::inputmethod::HandwritingGesture
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InsertGesture(const char *className, const char *sig, Ts...agv) : android::view::inputmethod::HandwritingGesture(className, sig, std::forward<Ts>(agv)...) {}
		InsertGesture(QJniObject obj) : android::view::inputmethod::HandwritingGesture(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::PointF getInsertionPoint() const;
		JString getTextToInsert() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

