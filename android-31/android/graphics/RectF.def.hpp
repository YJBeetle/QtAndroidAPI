#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics
{
	class RectF : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jfloat bottom();
		jfloat left();
		jfloat right();
		jfloat top();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RectF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RectF(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RectF();
		RectF(android::graphics::Rect arg0);
		RectF(android::graphics::RectF &arg0);
		RectF(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		static jboolean intersects(android::graphics::RectF arg0, android::graphics::RectF arg1);
		jfloat centerX() const;
		jfloat centerY() const;
		jboolean contains(android::graphics::RectF arg0) const;
		jboolean contains(jfloat arg0, jfloat arg1) const;
		jboolean contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jfloat height() const;
		void inset(jfloat arg0, jfloat arg1) const;
		jboolean intersect(android::graphics::RectF arg0) const;
		jboolean intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jboolean isEmpty() const;
		void offset(jfloat arg0, jfloat arg1) const;
		void offsetTo(jfloat arg0, jfloat arg1) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void round(android::graphics::Rect arg0) const;
		void roundOut(android::graphics::Rect arg0) const;
		void set(android::graphics::Rect arg0) const;
		void set(android::graphics::RectF arg0) const;
		void set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setEmpty() const;
		jboolean setIntersect(android::graphics::RectF arg0, android::graphics::RectF arg1) const;
		void sort() const;
		JString toShortString() const;
		JString toString() const;
		void union_(android::graphics::RectF arg0) const;
		void union_(jfloat arg0, jfloat arg1) const;
		void union_(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		jfloat width() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

