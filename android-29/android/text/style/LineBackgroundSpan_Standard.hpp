#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::text::style
{
	class LineBackgroundSpan_Standard : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineBackgroundSpan_Standard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LineBackgroundSpan_Standard(QJniObject obj);
		
		// Constructors
		LineBackgroundSpan_Standard(android::os::Parcel arg0);
		LineBackgroundSpan_Standard(jint arg0);
		
		// Methods
		jint describeContents() const;
		void drawBackground(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jint arg10) const;
		jint getColor() const;
		jint getSpanTypeId() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::text::style

