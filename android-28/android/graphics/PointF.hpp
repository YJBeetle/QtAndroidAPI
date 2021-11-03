#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::graphics
{
	class PointF : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jfloat x();
		jfloat y();
		
		// QJniObject forward
		template<typename ...Ts> explicit PointF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PointF(QJniObject obj);
		
		// Constructors
		PointF();
		PointF(android::graphics::Point arg0);
		PointF(jfloat arg0, jfloat arg1);
		
		// Methods
		static jfloat length(jfloat arg0, jfloat arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jboolean equals(jfloat arg0, jfloat arg1) const;
		jint hashCode() const;
		jfloat length() const;
		void negate() const;
		void offset(jfloat arg0, jfloat arg1) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void set(android::graphics::PointF arg0) const;
		void set(jfloat arg0, jfloat arg1) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

