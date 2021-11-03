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
	class Point : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jint x();
		jint y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Point(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Point(QAndroidJniObject obj);
		
		// Constructors
		Point();
		Point(android::graphics::Point &arg0);
		Point(jint arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jboolean equals(jint arg0, jint arg1);
		jint hashCode();
		void negate();
		void offset(jint arg0, jint arg1);
		void readFromParcel(android::os::Parcel arg0);
		void set(jint arg0, jint arg1);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

