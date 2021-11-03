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

namespace android::view
{
	class RoundedCorner : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint POSITION_BOTTOM_LEFT();
		static jint POSITION_BOTTOM_RIGHT();
		static jint POSITION_TOP_LEFT();
		static jint POSITION_TOP_RIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit RoundedCorner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RoundedCorner(QJniObject obj);
		
		// Constructors
		RoundedCorner(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::graphics::Point getCenter();
		jint getPosition();
		jint getRadius();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

