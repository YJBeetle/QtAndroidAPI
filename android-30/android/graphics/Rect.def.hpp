#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics
{
	class Rect : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint bottom();
		jint left();
		jint right();
		jint top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Rect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Rect(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Rect();
		Rect(android::graphics::Rect &arg0);
		Rect(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		static jboolean intersects(android::graphics::Rect arg0, android::graphics::Rect arg1);
		static android::graphics::Rect unflattenFromString(JString arg0);
		jint centerX() const;
		jint centerY() const;
		jboolean contains(android::graphics::Rect arg0) const;
		jboolean contains(jint arg0, jint arg1) const;
		jboolean contains(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jfloat exactCenterX() const;
		jfloat exactCenterY() const;
		JString flattenToString() const;
		jint hashCode() const;
		jint height() const;
		void inset(jint arg0, jint arg1) const;
		jboolean intersect(android::graphics::Rect arg0) const;
		jboolean intersect(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean intersects(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean isEmpty() const;
		void offset(jint arg0, jint arg1) const;
		void offsetTo(jint arg0, jint arg1) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void set(android::graphics::Rect arg0) const;
		void set(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setEmpty() const;
		jboolean setIntersect(android::graphics::Rect arg0, android::graphics::Rect arg1) const;
		void sort() const;
		JString toShortString() const;
		JString toString() const;
		void union_(android::graphics::Rect arg0) const;
		void union_(jint arg0, jint arg1) const;
		void union_(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jint width() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

