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
		PointF(android::graphics::PointF &arg0);
		PointF(jfloat arg0, jfloat arg1);
		
		// Methods
		static jfloat length(jfloat arg0, jfloat arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean equals(jfloat arg0, jfloat arg1);
		jint hashCode();
		jfloat length();
		void negate();
		void offset(jfloat arg0, jfloat arg1);
		void readFromParcel(android::os::Parcel arg0);
		void set(android::graphics::PointF arg0);
		void set(jfloat arg0, jfloat arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

