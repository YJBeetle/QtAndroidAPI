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
		Point(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Point();
		Point(android::graphics::Point &arg0);
		Point(jint arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jboolean equals(jint arg0, jint arg1) const;
		jint hashCode() const;
		void negate() const;
		void offset(jint arg0, jint arg1) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void set(jint arg0, jint arg1) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

