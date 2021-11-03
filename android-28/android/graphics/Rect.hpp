#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

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
		Rect(QAndroidJniObject obj);
		
		// Constructors
		Rect();
		Rect(android::graphics::Rect &arg0);
		Rect(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		static jboolean intersects(android::graphics::Rect arg0, android::graphics::Rect arg1);
		static android::graphics::Rect unflattenFromString(jstring arg0);
		jint centerX();
		jint centerY();
		jboolean contains(android::graphics::Rect arg0);
		jboolean contains(jint arg0, jint arg1);
		jboolean contains(jint arg0, jint arg1, jint arg2, jint arg3);
		jint describeContents();
		jboolean equals(jobject arg0);
		jfloat exactCenterX();
		jfloat exactCenterY();
		jstring flattenToString();
		jint hashCode();
		jint height();
		void inset(jint arg0, jint arg1);
		jboolean intersect(android::graphics::Rect arg0);
		jboolean intersect(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean intersects(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean isEmpty();
		void offset(jint arg0, jint arg1);
		void offsetTo(jint arg0, jint arg1);
		void readFromParcel(android::os::Parcel arg0);
		void set(android::graphics::Rect arg0);
		void set(jint arg0, jint arg1, jint arg2, jint arg3);
		void setEmpty();
		jboolean setIntersect(android::graphics::Rect arg0, android::graphics::Rect arg1);
		void sort();
		jstring toShortString();
		jstring toString();
		void _union(android::graphics::Rect arg0);
		void _union(jint arg0, jint arg1);
		void _union(jint arg0, jint arg1, jint arg2, jint arg3);
		jint width();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

