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
		
		// QJniObject forward
		template<typename ...Ts> explicit RectF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RectF(QJniObject obj);
		
		// Constructors
		RectF();
		RectF(android::graphics::Rect arg0);
		RectF(android::graphics::RectF &arg0);
		RectF(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		static jboolean intersects(android::graphics::RectF arg0, android::graphics::RectF arg1);
		jfloat centerX();
		jfloat centerY();
		jboolean contains(android::graphics::RectF arg0);
		jboolean contains(jfloat arg0, jfloat arg1);
		jboolean contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jint describeContents();
		jboolean equals(JObject arg0);
		jint hashCode();
		jfloat height();
		void inset(jfloat arg0, jfloat arg1);
		jboolean intersect(android::graphics::RectF arg0);
		jboolean intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jboolean isEmpty();
		void offset(jfloat arg0, jfloat arg1);
		void offsetTo(jfloat arg0, jfloat arg1);
		void readFromParcel(android::os::Parcel arg0);
		void round(android::graphics::Rect arg0);
		void roundOut(android::graphics::Rect arg0);
		void set(android::graphics::Rect arg0);
		void set(android::graphics::RectF arg0);
		void set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setEmpty();
		jboolean setIntersect(android::graphics::RectF arg0, android::graphics::RectF arg1);
		void sort();
		JString toShortString();
		JString toString();
		void _union(android::graphics::RectF arg0);
		void _union(jfloat arg0, jfloat arg1);
		void _union(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		jfloat width();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

